#include<stdio.h>
struct Student
{
    char studentName[100];
    char rollNo[20];
    float totalMarks;
};
void readStudent(struct Student *s);
void displayStudent(struct Student s);
int main()
{
    struct Student s;
    readStudent(&s);
    displayStudent(s);
}
void readStudent(struct Student*s)
{
    printf("Enter name:");
    fgets(s->studentName, sizeof(s->studentName),stdin);
    printf("Enter roll no");
    fgets(s->rollNo,sizeof(s->rollNo),stdin);
    printf("Enter marks:");
    scanf("%f",&s->totalMarks);

}
void displayStudent(struct Student s)
{
    printf("\nName:%S",s.studentName);
    printf("roll No:%s",s.rollNo);
    printf("Marks:%f\n",s.totalMarks);
}
