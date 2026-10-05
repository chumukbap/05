#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char c;
    int num = 0;

    printf("문자열을 입력하시오: ");

    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
        {
            num++;
        }
    }

    printf("숫자의 개수는 %d개입니다.\n", num);

    return 0;
}