#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[5]; //�迭 list[5] ����
    int *plist[5]; //������ �迭 *plist[5] ����

    list[0] = 10; //list[0]�� �� 10 �Ҵ�
    list[1] = 11; //list[1]�� �� 11 �Ҵ�

    plist[0] = (int*)malloc(sizeof(int)); // plist[0]�� 4byte �����Ҵ�

    printf("[----- [��ΰ�] [2023041054] -----]\n\n");

    printf("list[0] \t= %d\n", list[0]); //list[0]�� �� ���
    printf("list \t\t= %p\n", list); //list�� ���� �ּ��� 0��° �ּ� ���
    printf("&list[0] \t= %p\n", &list[0]); //list[0]�� �ּ� ���
    printf("list + 0 \t= %p\n", list+0); //list�� ���� �ּҿ� +0�� �� 0��° �ּ� ���
    printf("list + 1 \t= %p\n", list+1); //list�� ���� �ּҿ� +1�� �� 1��° �ּ� ���
    printf("list + 2 \t= %p\n", list+2); //list�� ���� �ּҿ� +2�� �� 2��° �ּ� ���
    printf("list + 3 \t= %p\n", list+3); //list�� ���� �ּҿ� +3�� �� 3��° �ּ� ���
    printf("list + 4 \t= %p\n", list+4); //list�� ���� �ּҿ� +4�� ��41��° �ּ� ���
    printf("&list[4] \t= %p\n", &list[4]); //list[4]�� �ּ� ���

    free(plist[0]); // plist[0]�� �����Ҵ� ����

    return 0;
}
