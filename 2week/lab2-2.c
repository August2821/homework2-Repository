#include <stdio.h>
int main(){
    int i;
    int *ptr;
    int **dptr;
    i = 1234;

    printf("----[김민경]    [2023041054]----\n");

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); //변수 i의 값 1234 출력
    printf("address of i == %p\n", &i); //변수 i의 메모리 주소 출력
    printf("value of ptr == %p\n", ptr); //포인터 변수 ptr의 값(쓰레기 값) 출력
    printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 메모리 주소 출력
    
    ptr = &i; /* ptr is now holding the address of i */ //포인터 변수 ptr에 변수 i의 메모리 주소 할당
    printf("\n[checking values after ptr = &i] \n"); 
    printf("value of i == %d\n", i); //변수 i의 값 1234 출력
    printf("address of i == %p\n", &i); //변수 i의 메모리 주소 출력
    printf("value of ptr == %p\n", ptr); //포인터 변수 ptr의 값 변수 i의 주소를 출력
    printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 메모리 주소 출력
    printf("value of *ptr == %d\n", *ptr); //포인터 변수 ptr이 가리키는 변수 i의 값 출력

    dptr = &ptr; /* dptr is now holding the address of ptr */ //더블 포인터 변수 dptr에 포인터 변수 ptr의 메모리 주소 할당
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); //변수 i의 값 1234 출력
    printf("address of i == %p\n", &i); //변수 i의 메모리 주소 출력
    printf("value of ptr == %p\n", ptr); //포인터 변수 ptr의 값 변수 i의 주소를 출력
    printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 메모리 주소 출력
    printf("value of *ptr == %d\n", *ptr); //포인터 변수 ptr이 가리키는 변수 i의 값 출력
    printf("value of dptr == %p\n", dptr); //더블 포인터 변수 dptr의 값 포인터 변수 ptr의 주소를 출력
    printf("address of dptr == %p\n", &dptr); //더블 포인터 변수 dptr의 메모리 주소 출력
    printf("value of *dptr == %p\n", *dptr); //더블 포인터 변수 dptr이 가리키는 포인터 변수 ptr의 주소 출력
    printf("value of **dptr == %d\n", **dptr); //더블 포인터 변수 dptr이 가리키는 포인터 변수 ptr이 가리키는 변수 i의 값 출력

    *ptr = 7777; /* changing the value of *ptr */ //포인터 변수 ptr이 가리키는 값 변수 i의 값을 7777로 변경
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); //변수 i의 값 7777 출력
    printf("value of *ptr == %d\n", *ptr); //포인터 변수 ptr이 가리키는 변수 i의 값 출력
    printf("value of **dptr == %d\n", **dptr); //더블 포인터 변수 dptr이 가리키는 값 => 포인터 변수 ptr이 가리키는 값 => 변수 i의 값 출력

    **dptr = 8888; /* changing the value of **dptr */ //더블 포인터 변수 dptr이 가리키는 값 => 포인터 변수 ptr이 가리키는 값 => 변수 i의 값을 8888로 변경
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); //변수 i의 값 8888 출력
    printf("value of *ptr == %d\n", *ptr); //포인터 변수 ptr이 가리키는 변수 i의 값 출력
    printf("value of **dptr == %d\n", **dptr); //더블 포인터 변수 dptr이 가리키는 값 => 포인터 변수 ptr이 가리키는 값 => 변수 i의 값 출력
return 0;
}