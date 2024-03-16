//2023041054 소프트웨어학부 김민경
#include<stdio.h>
int main(){
    int i,*p;
    i=10;

    printf("value of i = %d\n",i); //i의 값 10 출력
    printf("address of i = %p\n",&i); //i의 주소 출력
    printf("value of p = %p\n",p); //포인터 변수 p의 주소에 들어있는 주소 출력, 쓰레기값, 왜냐하면 난 p에 아무것도 넣지 않음
    printf("address of p = %p\n",&p); //p의 주소 출력

    p=&i; //포인터 변수 p에 i의 주소 넣어줌

    printf("\n\n----- after p = &i ------------\n\n");

    printf("value of p = %p\n", p); //포인터 변수 p의 주소가 아닌 i의 주소 출력, p에는 i의 주소가 들어있기 때문에
    printf("address of p = %p\n", &p); //&p는 포인터 변수 p의 주소를 출력
    printf("dereferencing *p = %d\n", *p); //*p 애스터리스크를 붙이면 포인터 변수 p가 가리키는 주소의 값을 출력한다는 의미, 고로 10 출력

    return 0;
}