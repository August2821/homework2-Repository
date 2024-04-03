#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;
int main() {
    struct student1 st1 = {'A', 100, 'A'}; //struct student1 타입의 변수 st1을 {'A', 100, 'A'}로 초기화
    
    printf("[----- [김민경] [2023041054] -----]\n\n");

    printf("st1.lastName = %c\n", st1.lastName); //st1의 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); //st1의 studentId 출력
    printf("st1.grade = %c\n", st1.grade); //st1의 grade 출력
    
    student2 st2 = {'B', 200, 'B'}; //struct student2 타입의 변수 st1을 {'B', 200, 'B'}로 초기화

    printf("\nst2.lastName = %c\n", st2.lastName); //st2의 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); //st2의 studentId 출력
    printf("st2.grade = %c\n", st2.grade); //st2의 grade 출력
    
    student2 st3;  //struct student2 타입의 변수 st3 선언
    st3 = st2;  //st2의 값을 st3에 저장
    
    printf("\nst3.lastName = %c\n", st3.lastName); //st3의 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); //st3의 studentId 출력
    printf("st3.grade = %c\n", st3.grade); //st3의 grade 출력
    
    /* equality test */
    //st2와 st3가 같은지 검사
    if((st3.grade==st2.grade)&&(st3.lastName==st2.lastName)&&(st3.studentId==st2.studentId)) /* not working */
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}
