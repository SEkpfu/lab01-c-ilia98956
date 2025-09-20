#include <stdio.h>

int main() {
    int num;
    printf("Введите трёхзначное число: ");
    scanf("%d", &num);

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    // Меняем сотни и десятки местами
    int new_num = tens * 100 + hundreds * 10 + units;

    printf("Новое число: %d\n", new_num);

    return 0;
}
