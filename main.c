#include <stdio.h>

int main(int argc, char *argv[]){

    int a;

    printf("정수 하나를 입력하시오 : ");
    scanf("%d", &a);

    if (a<0)
        printf("절댓값은 %d 입니다.", -a);
    else
        printf("절댓값은 %d 입니다", a);
 
    return 0;

}
