#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    char op;
    
    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &op, &b);

    if (op == '+')
        printf("= %d\n", a+b);
    else if (op == '-')
        printf("= %d\n", a-b);
    else if (op == '*')
        printf("= %d\n", a*b);
    else if (op == '/')
        printf("= %d\n", a/b);
    else
        printf("=%d\n", a%b);

    return 0;

}
