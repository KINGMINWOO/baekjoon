#include <stdio.h>

int main(void)
{
    unsigned int A, B;
    scanf("%d %d",&A,&B);
    
    printf("%d\n", A + B); // 더하기
    printf("%d\n", A - B); // 빼기
    printf("%d\n", A * B); // 곱하기
    printf("%d\n", A / B); // 나누기(몫)
    printf("%d\n", A % B); // 나누기(나머지)

    return 0;
}