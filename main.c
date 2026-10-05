#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    printf("정수 하나를 입력하시오: ");
    scanf("%d", &num);

    if (num > 0)
        printf("양수입니다.\n");
    else if (num < 0)
        printf("음수입니다.\n");
    else
        printf("0입니다.\n");

    return 0;
}