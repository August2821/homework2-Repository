#include<stdio.h>
#include<stdlib.h>

int main(){
    int **x;
    printf("sizeof(x) = %lu\n", sizeof(x)); //포인터 x의 크기를 출력한다. 32bit이기 때문에 4 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //포인터 *x의 크기를 출력한다. 32bit이기 때문에 4 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //정수 x의 크기를 출력한다.

    return 0;
}
