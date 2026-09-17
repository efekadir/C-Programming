#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

typedef struct{
    char name[41];
    long int id;
    short int class;
    float gpa;
}Student;

void gpaAssigner(Student students[]){
    int i;
    srand(time(NULL));

    for(i = 0; i < SIZE; i++){
        students[i].gpa = (rand() % 401) / 100.0;
    }
}
void gpaPrinter(Student students[]){
    int i;

    for(i = 0; i < SIZE; i++){
        printf("%d. %-20s: %.2f\n", (i + 1), students[i].name, students[i].gpa);
    }
}  
float gpaAverageCalculator(Student students[]){
    int i;
    float totalGpa = 0;

    for(i = 0; i < SIZE; i++){
        totalGpa += students[i].gpa;
    }

    return totalGpa / SIZE;
}
int main(){
    printf("Student GPA List:\n\n");
    Student students[SIZE];
    students[0] = (Student){"Ali Yılmaz", 120130010, 1};
    students[1] = (Student){"Bekir Yılmaz", 120130011, 1};
    students[2] = (Student){"Ceren Yılmaz", 120130012, 1};
    students[3]= (Student){"Deniz Yılmaz", 120130013, 1};
    students[4] = (Student){"Efe Kadir Küçük", 120130014, 1};
    students[5] = (Student){"Fırat Yılmaz", 120130015, 1};
    students[6] = (Student){"Gizem Yılmaz", 120130016, 1};
    students[7] = (Student){"Halime Yılmaz", 120130017, 1};
    students[8] = (Student){"Irmak Yılmaz", 120130018, 1};
    students[9] = (Student){"Kerem Yılmaz", 120130019, 1};

    gpaAssigner(students);
    gpaPrinter(students);
    printf("\nThe average is %.2f", gpaAverageCalculator(students));

}
