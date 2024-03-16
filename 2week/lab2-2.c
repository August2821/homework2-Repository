#include <stdio.h>
int main(){
    int i;
    int *ptr;
    int **dptr;
    i = 1234;

    printf("----[��ΰ�]    [2023041054]----\n");

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); //���� i�� �� 1234 ���
    printf("address of i == %p\n", &i); //���� i�� �޸� �ּ� ���
    printf("value of ptr == %p\n", ptr); //������ ���� ptr�� ��(������ ��) ���
    printf("address of ptr == %p\n", &ptr); //������ ���� ptr�� �޸� �ּ� ���
    
    ptr = &i; /* ptr is now holding the address of i */ //������ ���� ptr�� ���� i�� �޸� �ּ� �Ҵ�
    printf("\n[checking values after ptr = &i] \n"); 
    printf("value of i == %d\n", i); //���� i�� �� 1234 ���
    printf("address of i == %p\n", &i); //���� i�� �޸� �ּ� ���
    printf("value of ptr == %p\n", ptr); //������ ���� ptr�� �� ���� i�� �ּҸ� ���
    printf("address of ptr == %p\n", &ptr); //������ ���� ptr�� �޸� �ּ� ���
    printf("value of *ptr == %d\n", *ptr); //������ ���� ptr�� ����Ű�� ���� i�� �� ���

    dptr = &ptr; /* dptr is now holding the address of ptr */ //���� ������ ���� dptr�� ������ ���� ptr�� �޸� �ּ� �Ҵ�
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); //���� i�� �� 1234 ���
    printf("address of i == %p\n", &i); //���� i�� �޸� �ּ� ���
    printf("value of ptr == %p\n", ptr); //������ ���� ptr�� �� ���� i�� �ּҸ� ���
    printf("address of ptr == %p\n", &ptr); //������ ���� ptr�� �޸� �ּ� ���
    printf("value of *ptr == %d\n", *ptr); //������ ���� ptr�� ����Ű�� ���� i�� �� ���
    printf("value of dptr == %p\n", dptr); //���� ������ ���� dptr�� �� ������ ���� ptr�� �ּҸ� ���
    printf("address of dptr == %p\n", &dptr); //���� ������ ���� dptr�� �޸� �ּ� ���
    printf("value of *dptr == %p\n", *dptr); //���� ������ ���� dptr�� ����Ű�� ������ ���� ptr�� �ּ� ���
    printf("value of **dptr == %d\n", **dptr); //���� ������ ���� dptr�� ����Ű�� ������ ���� ptr�� ����Ű�� ���� i�� �� ���

    *ptr = 7777; /* changing the value of *ptr */ //������ ���� ptr�� ����Ű�� �� ���� i�� ���� 7777�� ����
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); //���� i�� �� 7777 ���
    printf("value of *ptr == %d\n", *ptr); //������ ���� ptr�� ����Ű�� ���� i�� �� ���
    printf("value of **dptr == %d\n", **dptr); //���� ������ ���� dptr�� ����Ű�� �� => ������ ���� ptr�� ����Ű�� �� => ���� i�� �� ���

    **dptr = 8888; /* changing the value of **dptr */ //���� ������ ���� dptr�� ����Ű�� �� => ������ ���� ptr�� ����Ű�� �� => ���� i�� ���� 8888�� ����
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); //���� i�� �� 8888 ���
    printf("value of *ptr == %d\n", *ptr); //������ ���� ptr�� ����Ű�� ���� i�� �� ���
    printf("value of **dptr == %d\n", **dptr); //���� ������ ���� dptr�� ����Ű�� �� => ������ ���� ptr�� ����Ű�� �� => ���� i�� �� ���
return 0;
}