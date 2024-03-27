#include <stdio.h>
#include <stdlib.h>

int main(){
    int list[5]; //�迭 list[5] ����
    int *plist[5] = {NULL,}; //������ �迭 *plist[5] ����, NULL�� �ʱ�ȭ

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]�� 4byte �����Ҵ�
    
    list[0] = 1; //list[0]�� �� 1 �Ҵ�
    list[1] = 100; //list[1]�� �� 100 �Ҵ�

    *plist[0] = 200; //*plist[0]�� �� 200 �Ҵ�

    printf("[----- [��ΰ�] [2023041054] -----]\n\n");

    printf("list[0] = %d\n", list[0]); //�迭 list[0]�� �� ���
    printf("&list[0] = %p\n", &list[0]); //�迭 list[0]�� �ּ� ���
    printf("list = %p\n", list); //�迭 list�� 0��° �ּ� ���
    printf("&list = %p\n", &list); //�迭 list[0]�� �� ���

    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]); //�迭 list[1]�� �� ���
    printf("&list[1] = %p\n", &list[1]); //�迭 list[1]�� �ּ� ���
    printf("*(list+1) = %d\n", *(list + 1)); //�迭 list�� ������ ������ ����Ͽ� [1]��° �� ���
    printf("list+1 = %p\n", list+1); //�迭 list�� ������ ������ ����Ͽ� [1]��° �ּ� ���

    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]); //������ �迭 *plist�� 0��° �� ���
    printf("&plist[0] = %p\n", &plist[0]); //������ �迭*plist�� 0��° �ּ� ���
    printf("&plist = %p\n", &plist); //*plist�� ���۰� [0]��° �ּ� ���
    printf("plist = %p\n", plist); //������ �迭�̱� ������ plist�� 0��° �ּ� ���
    printf("plist[0] = %p\n", plist[0]); //plist[0]�� �ּ� ���
    printf("plist[1] = %p\n", plist[1]); //plist[1]�� �ּ� ���, NULL�� �ʱ�ȭ �Ʊ� ������ NULL�� ��µ�
    printf("plist[2] = %p\n", plist[2]); //plist[2]�� �ּ� ���, NULL�� �ʱ�ȭ �Ʊ� ������ NULL�� ��µ�
    printf("plist[3] = %p\n", plist[3]); //plist[3]�� �ּ� ���, NULL�� �ʱ�ȭ �Ʊ� ������ NULL�� ��µ�
    printf("plist[4] = %p\n", plist[4]); //plist[4]�� �ּ� ���, NULL�� �ʱ�ȭ �Ʊ� ������ NULL�� ��µ�
    
    free(plist[0]); //plist[0]�� �����Ҵ� ����
    return 0;
}
