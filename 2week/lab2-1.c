//----[��ΰ�]    [2023041054]----
#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("----[��ΰ�]    [2023041054]----\n");

    printf("Size of char: %ld byte\n",sizeof(charType)); //���� charType�� ������ Ÿ���� ũ�� ���, char �̱� ������ 1byte ���
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //���� integerType�� ������ Ÿ���� ũ�� ���, int �̱� ������ 4byte ���
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //���� floatType�� ������ Ÿ���� ũ�� ���, float �̱� ������ 4byte ���
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //���� doubleType�� ������ Ÿ���� ũ�� ���, double �̱� ������ 8byte ���
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); //���� �̸� ��� ������ Ÿ�� char�� ����Ͽ� char�� ũ�� ���
    printf("Size of int: %ld bytes\n",sizeof(int)); //���� �̸� ��� ������ Ÿ�� int�� ����Ͽ� int�� ũ�� ���
    printf("Size of float: %ld bytes\n",sizeof(float)); //���� �̸� ��� ������ Ÿ�� float�� ����Ͽ� float�� ũ�� ���
    printf("Size of double: %ld bytes\n",sizeof(double)); //���� �̸� ��� ������ Ÿ�� double�� ����Ͽ� double�� ũ�� ���
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); //�����ʹ� ������ Ÿ�԰� ������� 32bit�� 4byte, 64bit�� 8byte�� ũ�⸦ ����
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //4byte�� ��µ� ������ ���� 32bit���� �� �� ����
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
return 0;
}