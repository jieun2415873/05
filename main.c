#include <stdio.h>

int main(int argc, char *argv[])
{
    int c;
    int num = 0;
    
    printf("input a string : ");

    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
        {
            num++;
        }
    }

    printf("the number of digits is %d", num);
 
    return 0;

}
