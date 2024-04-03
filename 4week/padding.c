#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main(){
    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student)); //19byte가 출력되어야 하나 padding bytes로 인해 24byte가 출력됨
    printf("size of int = %ld\n", sizeof(int)); //int의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short의 크기 출력
    return 0;
}