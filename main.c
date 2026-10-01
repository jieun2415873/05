#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, i;
    int sum=0;
    
    printf("input a number : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        sum += i;
    }

    printf("The result is %d", sum);
 
    return 0;

}
