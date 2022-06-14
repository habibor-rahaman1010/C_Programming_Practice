//structure in c program
#include <stdio.h>

struct Student{
    int id;
    float cgpa;
    char name[30];
    char college[100];
    int age;
};

int main(){
    struct Student student;
    printf("Enter your id: \n");
    scanf("%d", &student.id);

    printf("Enter your cgpa: \n");
    scanf("%f", &student.cgpa);

    printf("Enter your name: \n");
    scanf("%s", student.name);

    printf("Enter your college name: \n");
    scanf("%s", student.college);

    printf("Enter your age: \n");
    scanf("%d", &student.age);

    printf("id: %d; gread: %f; name: %s; college: %s; age: %d \n", student.id, student.cgpa, student.name, student.college, student.age);

    return 0;
}
