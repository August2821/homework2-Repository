#include<stdio.h>
#include<stdlib.h>

int main(){
    int **x;
    printf("sizeof(x) = %lu\n", sizeof(x)); //������ x�� ũ�⸦ ����Ѵ�. 32bit�̱� ������ 4 ���
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //������ *x�� ũ�⸦ ����Ѵ�. 32bit�̱� ������ 4 ���
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //���� x�� ũ�⸦ ����Ѵ�.

    return 0;
}
