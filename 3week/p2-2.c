#include <stdio.h>

void print_one(int *ptr, int rows);

int main(){
    int one[] = {0, 1, 2, 3, 4};

    printf("[----- [��ΰ�] [2023041054] -----]\n\n");

    printf("one = %p\n", one); //one�� ���� �ּ� one[0]�� �ּ� ���
    printf("&one = %p\n", &one); //one�� ���� �ּ� one[0]�� �ּ� ���
    printf("&one[0] = %p\n", &one[0]); //one[0]�� �ּ� ���
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //�Լ� print_one�� one[0]�� �ּҸ� �Ű����� *ptr�� ����, �Ű����� rows�� 5�� ����

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //�迭 one�� �̸� ��ü�� �Ű����� *ptr�� ����, �迭 �̸��� �迭�� 0��° �ּ� �����ϴ� �Ͱ� ����, �Ű����� rows�� 5�� ����

    return 0;
}
void print_one(int *ptr, int rows){/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) //i�� 0�̰� i�� 5���� ���� ������ 4���� i=i+1�Ѵ�.
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr+i�� ptr+0���� ptr+4���� �� �ּҸ� ����Ѵ�.
        //*(ptr + i)�� ptr�� ���� *(ptr+0)~*(ptr+4)���� ����Ѵ�.
    printf("\n");
}
