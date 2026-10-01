#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;
    int count = 0;
    int answer = 59;
    
    do
    {
        printf("Guess a number : ");
        scanf("%d", &num);

        count++;

        if (num > answer)
            printf("high!\n");
        else if (num < answer)
            printf("low!\n");
    }
    while (num  != answer);

    printf("Congratulation! trials:%d\n", count);

    return 0;

}
