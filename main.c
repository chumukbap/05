#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    int sum = 0;
    int i;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", num, sum);

    return 0;
}