#include <stdio.h>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

    int t1, t2, t3;
    float time;

    // ������ ����, �� ��������� � ���������
    printf("������ t1: ");
    scanf("%d", &t1);

    printf("������ t2: ");
    scanf("%d", &t2);

    printf("������ t3: ");
    scanf("%d", &t3);

    // ���������� ���������� ����
    time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    // ��������� ����������
    printf("���, �� ���� ���� �'����� ����: %.2f ����\n", 1 / time);

    return 0;
}
