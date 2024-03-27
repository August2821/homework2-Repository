#include <stdio.h>
#define MAX_SIZE 100 //상수 MAX_SIZE 값 100 할당
float sum1(float list[], int); //함수 sum1 선언
float sum2(float *list, int); //함수 sum2 선언
float sum3(int n, float *list); //함수 sum3 선언

float input[MAX_SIZE], answer; //전역 변수 input[MAX_SIZE], answer 선언
int i; //전역 변수 i 선언

int main(void){
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i; //input[0]~input[99]까지 0~99 값 할당

    printf("[----- [김민경] [2023041054] -----]\n\n");

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input의 시작 주소 input[0]의 주소 출력
    
    answer = sum1(input, MAX_SIZE); //함수 sum1의 return 값을 answer에 할당, 매개변수 list[]에 input의 0번째 주소 전달, 매개변수 n에 MAX_SIZE 전달
    printf("The sum is: %f\n\n", answer); //0~99까지 더한 값 출력
    
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input의 시작 주소 input[0]의 주소 출력
    
    answer = sum2(input, MAX_SIZE); //함수 sum2의 return 값을 answer에 할당, 매개변수 *list에 input의 0번째 주소 전달, 매개변수 n에 MAX_SIZE 전달
    printf("The sum is: %f\n\n", answer); //0~99까지 더한 값 출력
    
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input의 시작 주소 input[0]의 주소 출력
    
    answer = sum3(MAX_SIZE, input); //함수 sum3의 return 값을 answer에 할당, 매개변수 *list에 input의 0번째 주소 전달, 매개변수 n에 MAX_SIZE 전달
    printf("The sum is: %f\n\n", answer); //0~99까지 더한 값 출력

    return 0;
}

float sum1(float list[], int n) {
    printf("list \t= %p\n", list); //매개변수 list가 가리키는 input의 시작 주소 input[0]의 주소 출력
    printf("&list \t= %p\n\n", &list); //매개변수 list의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i]; //0~99 더한 값 tempsum에 할당
    return tempsum;
}

float sum2(float *list, int n) {
    printf("list \t= %p\n", list); //매개변수 list가 가리키는 input의 시작 주소 input[0]의 주소 출력
    printf("&list \t= %p\n\n", &list); //매개변수 list의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i); //0~99 더한 값 tempsum에 할당
    return tempsum;
}

/* stack variable reuse test */
float sum3(int n, float *list) {
    printf("list \t= %p\n", list); //매개변수 list가 가리키는 input의 시작 주소 input[0]의 주소 출력
    printf("&list \t= %p\n\n", &list); //매개변수 list의 주소 출력

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i); //0~99 더한 값 tempsum에 할당
    return tempsum;
}
