#include <stdio.h>
#include <string.h>

struct student
{
    int ID; //학번
    char name[30]; //이름
    float grade; //학점
}; 

int main(void)
{
    struct student s1 = {26000, "kim", 4.2};

    s1.ID = 12345;
    strcpy(s1.name, "choi");
    s1.grade = 2.7;

    printf("ID : %i, name : %s, grade : %f\n", s1.ID, s1.name, s1.grade);

    return 0;


}