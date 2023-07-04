#include <stdio.h>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

    int t1, t2, t3;
    float time;

    // Вхідні дані, що вводяться з клавіатури
    printf("Введіть t1: ");
    scanf("%d", &t1);

    printf("Введіть t2: ");
    scanf("%d", &t2);

    printf("Введіть t3: ");
    scanf("%d", &t3);

    // Розрахунок загального часу
    time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    // Виведення результату
    printf("Час, за який гості з'їдять торт: %.2f часів\n", 1 / time);

    return 0;
}
