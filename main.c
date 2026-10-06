#include <stdio.h>

int main() {
    int a, b;

    printf("Введите два двузначных числа: ");
    scanf("%d %d", &a, &b);

    if (a < 10 || a > 99 || b < 10 || b > 99) {
        printf("Ошибка ввода: числа должны быть двузначными\n");
    } else {
        if (a * b > 2000) {
            printf("Превышает 2000\n");
        } else {
            printf("Не превышает 2000\n");
        }
    }

    return 0;
}