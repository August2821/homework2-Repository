#include <stdio.h>
#include <stdlib.h>

int main(){
    int list[5]; //배열 list[5] 선언
    int *plist[5] = {NULL,}; //포인터 배열 *plist[5] 선언, NULL로 초기화

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 4byte 동적할당
    
    list[0] = 1; //list[0]에 값 1 할당
    list[1] = 100; //list[1]에 값 100 할당

    *plist[0] = 200; //*plist[0]에 값 200 할당

    printf("[----- [김민경] [2023041054] -----]\n\n");

    printf("list[0] = %d\n", list[0]); //배열 list[0]의 값 출력
    printf("&list[0] = %p\n", &list[0]); //배열 list[0]의 주소 출력
    printf("list = %p\n", list); //배열 list의 0번째 주소 출력
    printf("&list = %p\n", &list); //배열 list[0]의 값 출력

    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]); //배열 list[1]의 값 출력
    printf("&list[1] = %p\n", &list[1]); //배열 list[1]의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); //배열 list를 포인터 형식을 사용하여 [1]번째 값 출력
    printf("list+1 = %p\n", list+1); //배열 list를 포인터 형식을 사용하여 [1]번째 주소 출력

    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]); //포인터 배열 *plist의 0번째 값 출력
    printf("&plist[0] = %p\n", &plist[0]); //포인터 배열*plist의 0번째 주소 출력
    printf("&plist = %p\n", &plist); //*plist의 시작값 [0]번째 주소 출력
    printf("plist = %p\n", plist); //포인터 배열이기 때문에 plist의 0번째 주소 출력
    printf("plist[0] = %p\n", plist[0]); //plist[0]의 주소 출력
    printf("plist[1] = %p\n", plist[1]); //plist[1]의 주소 출력, NULL로 초기화 됐기 때문에 NULL이 출력됨
    printf("plist[2] = %p\n", plist[2]); //plist[2]의 주소 출력, NULL로 초기화 됐기 때문에 NULL이 출력됨
    printf("plist[3] = %p\n", plist[3]); //plist[3]의 주소 출력, NULL로 초기화 됐기 때문에 NULL이 출력됨
    printf("plist[4] = %p\n", plist[4]); //plist[4]의 주소 출력, NULL로 초기화 됐기 때문에 NULL이 출력됨
    
    free(plist[0]); //plist[0]의 동적할당 해제
    return 0;
}
