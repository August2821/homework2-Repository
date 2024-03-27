#include <stdio.h>

void print_one(int *ptr, int rows);

int main(){
    int one[] = {0, 1, 2, 3, 4};

    printf("[----- [김민경] [2023041054] -----]\n\n");

    printf("one = %p\n", one); //one의 시작 주소 one[0]의 주소 출력
    printf("&one = %p\n", &one); //one의 시작 주소 one[0]의 주소 출력
    printf("&one[0] = %p\n", &one[0]); //one[0]의 주소 출력
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //함수 print_one에 one[0]의 주소를 매개변수 *ptr에 전달, 매개변수 rows는 5를 전달

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //배열 one의 이름 자체를 매개변수 *ptr에 전달, 배열 이름은 배열의 0번째 주소 전달하는 것과 같음, 매개변수 rows에 5를 전달

    return 0;
}
void print_one(int *ptr, int rows){/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) //i는 0이고 i가 5보다 작을 때까지 4까지 i=i+1한다.
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr+i는 ptr+0부터 ptr+4까지 의 주소를 출력한다.
        //*(ptr + i)는 ptr의 값을 *(ptr+0)~*(ptr+4)까지 출력한다.
    printf("\n");
}
