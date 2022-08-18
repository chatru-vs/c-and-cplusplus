#include <stdio.h>
#include <string.h>

// structure address add

struct student
{
    int rollno;
    float cgpa;
    char name[100];
};

struct vector{
    int x;
    int y;
};

struct complex{
    int real;
    int img;
};
void calSumVec(struct vector v1, struct vector v2, struct vector sum);
void printInfo(struct student s1);

int main()
{

    struct complex number1 = {5, 8};
    struct complex *ptrr = &number1;
    printf("%d", ptrr->img);
    printf("%d", ptrr->real);
    struct vector v1 = {5, 10};
    struct vector v2 = {10, 15};
    struct vector sum = {0};

    calSumVec(v1, v2, sum);


   struct  student s1 = {12, 9.6, "Bhola"};
   struct student s2 ={13, 8.5, "Raju"};
   printf("student cgpa %f \n", s1.cgpa);

    struct student *ptr = &s1;
    printf("studnet rollnumber %d\n", (*ptr).cgpa);
    printf("studnet rollnumber %d\n", ptr->rollno);
    printf("student name %s", ptr->name);

    printInfo(s2);
}

void printInfo(struct student s1){

    printf("student roll %d", s1.rollno);
    printf("student cgpa%f", s1.cgpa);
    printf("stdent name %s", s1.name);

}

void calSumVec(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is %d",sum.x);
    printf("sum of y is %d", sum.y);

}