//2023041054 ����Ʈ�����к� ��ΰ�
#include<stdio.h>
int main(){
    int i,*p;
    i=10;

    printf("value of i = %d\n",i); //i�� �� 10 ���
    printf("address of i = %p\n",&i); //i�� �ּ� ���
    printf("value of p = %p\n",p); //������ ���� p�� �ּҿ� ����ִ� �ּ� ���, �����Ⱚ, �ֳ��ϸ� �� p�� �ƹ��͵� ���� ����
    printf("address of p = %p\n",&p); //p�� �ּ� ���

    p=&i; //������ ���� p�� i�� �ּ� �־���

    printf("\n\n----- after p = &i ------------\n\n");

    printf("value of p = %p\n", p); //������ ���� p�� �ּҰ� �ƴ� i�� �ּ� ���, p���� i�� �ּҰ� ����ֱ� ������
    printf("address of p = %p\n", &p); //&p�� ������ ���� p�� �ּҸ� ���
    printf("dereferencing *p = %d\n", *p); //*p �ֽ��͸���ũ�� ���̸� ������ ���� p�� ����Ű�� �ּ��� ���� ����Ѵٴ� �ǹ�, ��� 10 ���

    return 0;
}