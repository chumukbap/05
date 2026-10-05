#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int answer = 59;
    int guess;
    int count = 0;

    do
    {
        printf("정답을 입력하시오: ");
        scanf("%d", &guess);

        count++;

        if (guess > answer)
        {
            printf("정답보다 큽니다.\n");
        }
        else if (guess < answer)
        {
            printf("정답보다 작습니다.\n");
        }
        else
        {
            printf("정답입니다!\n");
        }

    } while (guess != answer);

    printf("시도 횟수는 %d번입니다.\n", count);

    return 0;
}