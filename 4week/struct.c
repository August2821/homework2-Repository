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
    struct student1 st1 = {'A', 100, 'A'}; //struct student1 Ÿ���� ���� st1�� {'A', 100, 'A'}�� �ʱ�ȭ
    
    printf("[----- [��ΰ�] [2023041054] -----]\n\n");

    printf("st1.lastName = %c\n", st1.lastName); //st1�� lastName ���
    printf("st1.studentId = %d\n", st1.studentId); //st1�� studentId ���
    printf("st1.grade = %c\n", st1.grade); //st1�� grade ���
    
    student2 st2 = {'B', 200, 'B'}; //struct student2 Ÿ���� ���� st1�� {'B', 200, 'B'}�� �ʱ�ȭ

    printf("\nst2.lastName = %c\n", st2.lastName); //st2�� lastName ���
    printf("st2.studentId = %d\n", st2.studentId); //st2�� studentId ���
    printf("st2.grade = %c\n", st2.grade); //st2�� grade ���
    
    student2 st3;  //struct student2 Ÿ���� ���� st3 ����
    st3 = st2;  //st2�� ���� st3�� ����
    
    printf("\nst3.lastName = %c\n", st3.lastName); //st3�� lastName ���
    printf("st3.studentId = %d\n", st3.studentId); //st3�� studentId ���
    printf("st3.grade = %c\n", st3.grade); //st3�� grade ���
    
    /* equality test */
    //st2�� st3�� ������ �˻�
    if((st3.grade==st2.grade)&&(st3.lastName==st2.lastName)&&(st3.studentId==st2.studentId)) /* not working */
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}
