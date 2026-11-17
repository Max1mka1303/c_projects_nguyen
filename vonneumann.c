#include <stdio.h>

int main(void){
    // объявление памяти
    int memory[256] = {0};
    // хранение регистров процессора: [0] pc(счётчик команд), [1] acc(аккумулятор), [2] ir(регистр команд), [3] вектор прерываний, [4] флаг остановки (0 = работает, 1 = остановлен) [5] — код последней ошибки (0 = нет ошибки) [6], [7] — резерв для будущих расширений
    int cpu_state[8] = {0};

    int i = 0;
    // Ввод данных в память
    while (i < 256 && scanf("%d", &memory[i]) == 1){
        i++;
    }
    // объявление стартовой команды и вектора прерываний
    cpu_state[0] = 4;
    cpu_state[3] = memory[0];
    // цикл работы процессора
    while(cpu_state[4] == 0){
        int pc = cpu_state[0];
        int error = 0;
        // сброс регистра команд и операнда
        cpu_state[2] = -1;
        int op = -1;
        if (pc < 0 || pc >= 256){
            error = 1;
        } else {
            // считываем команду в регистр
            cpu_state[2] = memory[pc];
            switch (cpu_state[2]){
                //STOP: остановка
                case 0: {
                    printf("pc=%d: команда %d, acc=%d\n", pc, cpu_state[2], cpu_state[1]);
                    cpu_state[4] = 1;
                    break;
                }
                //LOAD: загрузка значения из памяти в аккумулятор
                case 1:{
                    if (pc + 1 >= 256){
                        error = 1;
                        break;
                    }
                    op = memory[pc+1];
                    if (op < 0 || op >= 256){
                        error = 1;
                        break;
                    }
                    cpu_state[1] = memory[op];
                    printf("pc=%d: команда %d, operand=%d, acc=%d\n", pc, cpu_state[2], op, cpu_state[1]);
                    cpu_state[0] += 2;
                    break;
                }
                //ADD: сложение значения из памяти с аккумулятором
                case 2: {
                    if (pc + 1 >= 256){
                        error = 1;
                        break;
                    }
                    op = memory[pc+1];
                    if (op < 0 || op >= 256){
                        error = 1;
                        break;
                    }
                    cpu_state[1] += memory[op];
                    printf("pc=%d: команда %d, operand=%d, acc=%d\n", pc, cpu_state[2], op, cpu_state[1]);
                    cpu_state[0] += 2;
                    break;
                }
                //PRINT: вывод значения аккумулятора на экран
                case 3: {
                    printf("pc=%d: команда %d, acc=%d\n", pc, cpu_state[2], cpu_state[1]);
                    cpu_state[0] += 1;
                    break;
                }
                //JUMP: безусловный переход к команде по адресу
                case 4:
                    if (pc + 1 >= 256){
                        error = 1;
                        break;
                    } 
                    op = memory[pc+1];
                    if (op < 0 || op >= 256){
                        error = 1;
                        break;
                    }
                    printf("pc=%d: команда %d, operand=%d, acc=%d\n", pc, cpu_state[2], op, cpu_state[1]);
                    cpu_state[0] = op;
                    break;
                // Вывод в случае неизвестной команды
                default:
                    error = 1;
                    break;
            }
        }
        // Обработка ошибок 
        if (error == 1) {
            if (op != -1) {
                printf("pc=%d: команда %d, operand=%d, ОШИБКА: выход за границы памяти", pc, cpu_state[2], op);
            } else if (cpu_state[2] != -1) {
                printf("pc=%d: команда %d, ОШИБКА: неверная команда или нет операнда", pc, cpu_state[2]);
            } else {
                printf("pc=%d: ОШИБКА: выход за границы памяти", pc);
            }
            // фиксация ошибки и переход к вектору прерываний
            if (cpu_state[5] == 0) {
                printf("\n");
                cpu_state[5] = 1;
                cpu_state[0] = cpu_state[3];
            // обраотка повторного прерывания
            } else {
                printf(" (повторное прерывание)\n");
                printf("Программа завершена с ошибкой.\n");
                cpu_state[4] = 1;
            }
        }
    }
    return 0;
}