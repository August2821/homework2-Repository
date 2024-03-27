#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[5]; //배열 list[5] 선언
    int *plist[5]; //포인터 배열 *plist[5] 선언

    list[0] = 10; //list[0]에 값 10 할당
    list[1] = 11; //list[1]에 값 11 할당

    plist[0] = (int*)malloc(sizeof(int)); // plist[0]에 4byte 동적할당

    printf("[----- [김민경] [2023041054] -----]\n\n");

    printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력
    printf("list \t\t= %p\n", list); //list의 시작 주소인 0번째 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소 출력
    printf("list + 0 \t= %p\n", list+0); //list의 시작 주소에 +0을 한 0번째 주소 출력
    printf("list + 1 \t= %p\n", list+1); //list의 시작 주소에 +1을 한 1번째 주소 출력
    printf("list + 2 \t= %p\n", list+2); //list의 시작 주소에 +2을 한 2번째 주소 출력
    printf("list + 3 \t= %p\n", list+3); //list의 시작 주소에 +3을 한 3번째 주소 출력
    printf("list + 4 \t= %p\n", list+4); //list의 시작 주소에 +4을 한41번째 주소 출력
    printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소 출력

    free(plist[0]); // plist[0]에 동적할당 해제

    return 0;
}
