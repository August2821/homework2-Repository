#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main(){
    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student)); //19byte�� ��µǾ�� �ϳ� padding bytes�� ���� 24byte�� ��µ�
    printf("size of int = %ld\n", sizeof(int)); //int�� ũ�� ���
    printf("size of short = %ld\n", sizeof(short)); //short�� ũ�� ���
    return 0;
}