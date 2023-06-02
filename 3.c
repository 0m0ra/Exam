#include <stdio.h>

int main() {
    int number;
    int count = 0;
    long long sum = 0;

    printf("Введите последовательность чисел, оканчивающуюся 0: \n");

    while (1) {
        scanf("%d", &number);
        
        if (number == 0) {
            break; 
        }

        if (number % 2 == 0) {
            sum += number;
            count++;
        }
    }

    if (count != 0) {
        float average = (float)sum / count;
        printf("Среднее значение четных элементов: %.1f\n", average);
    } else {
        printf("Нет четных элементов в последовательности.\n");
    }

    return 0;
}