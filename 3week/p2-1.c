#include <stdio.h>
#define MAX_SIZE 100 //��� MAX_SIZE �� 100 �Ҵ�
float sum1(float list[], int); //�Լ� sum1 ����
float sum2(float *list, int); //�Լ� sum2 ����
float sum3(int n, float *list); //�Լ� sum3 ����

float input[MAX_SIZE], answer; //���� ���� input[MAX_SIZE], answer ����
int i; //���� ���� i ����

int main(void){
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i; //input[0]~input[99]���� 0~99 �� �Ҵ�

    printf("[----- [��ΰ�] [2023041054] -----]\n\n");

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input�� ���� �ּ� input[0]�� �ּ� ���
    
    answer = sum1(input, MAX_SIZE); //�Լ� sum1�� return ���� answer�� �Ҵ�, �Ű����� list[]�� input�� 0��° �ּ� ����, �Ű����� n�� MAX_SIZE ����
    printf("The sum is: %f\n\n", answer); //0~99���� ���� �� ���
    
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input�� ���� �ּ� input[0]�� �ּ� ���
    
    answer = sum2(input, MAX_SIZE); //�Լ� sum2�� return ���� answer�� �Ҵ�, �Ű����� *list�� input�� 0��° �ּ� ����, �Ű����� n�� MAX_SIZE ����
    printf("The sum is: %f\n\n", answer); //0~99���� ���� �� ���
    
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input�� ���� �ּ� input[0]�� �ּ� ���
    
    answer = sum3(MAX_SIZE, input); //�Լ� sum3�� return ���� answer�� �Ҵ�, �Ű����� *list�� input�� 0��° �ּ� ����, �Ű����� n�� MAX_SIZE ����
    printf("The sum is: %f\n\n", answer); //0~99���� ���� �� ���

    return 0;
}

float sum1(float list[], int n) {
    printf("list \t= %p\n", list); //�Ű����� list�� ����Ű�� input�� ���� �ּ� input[0]�� �ּ� ���
    printf("&list \t= %p\n\n", &list); //�Ű����� list�� �ּ� ���
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i]; //0~99 ���� �� tempsum�� �Ҵ�
    return tempsum;
}

float sum2(float *list, int n) {
    printf("list \t= %p\n", list); //�Ű����� list�� ����Ű�� input�� ���� �ּ� input[0]�� �ּ� ���
    printf("&list \t= %p\n\n", &list); //�Ű����� list�� �ּ� ���
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i); //0~99 ���� �� tempsum�� �Ҵ�
    return tempsum;
}

/* stack variable reuse test */
float sum3(int n, float *list) {
    printf("list \t= %p\n", list); //�Ű����� list�� ����Ű�� input�� ���� �ּ� input[0]�� �ּ� ���
    printf("&list \t= %p\n\n", &list); //�Ű����� list�� �ּ� ���

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i); //0~99 ���� �� tempsum�� �Ҵ�
    return tempsum;
}
