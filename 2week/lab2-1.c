//----[김민경]    [2023041054]----
#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("----[김민경]    [2023041054]----\n");

    printf("Size of char: %ld byte\n",sizeof(charType)); //변수 charType의 데이터 타입의 크기 출력, char 이기 때문에 1byte 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //변수 integerType의 데이터 타입의 크기 출력, int 이기 때문에 4byte 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //변수 floatType의 데이터 타입의 크기 출력, float 이기 때문에 4byte 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //변수 doubleType의 데이터 타입의 크기 출력, double 이기 때문에 8byte 출력
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); //변수 이름 대신 데이터 타입 char를 사용하여 char의 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(int)); //변수 이름 대신 데이터 타입 int를 사용하여 int의 크기 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); //변수 이름 대신 데이터 타입 float를 사용하여 float의 크기 출력
    printf("Size of double: %ld bytes\n",sizeof(double)); //변수 이름 대신 데이터 타입 double를 사용하여 double의 크기 출력
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); //포인터는 데이터 타입과 상관없이 32bit면 4byte, 64bit면 8byte의 크기를 가짐
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //4byte로 출력된 것으로 보아 32bit임을 알 수 있음
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
return 0;
}