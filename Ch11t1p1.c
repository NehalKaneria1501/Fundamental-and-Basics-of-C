#include <stdio.h>
#define p printf
struct Student 
{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};
int main() 
{
    struct Student students[3];
    p("Enter details for 3 students:\n");
    for(int i=0;i<3;i++) 
	{
        p("Enter details for student %d:\n",i+1);
        printf("ID: ");
        scanf("%d",&students[i].stu_id);
        p("Name:");
        scanf("%s",&students[i].stu_name);
        p("Age:");
        scanf("%d",&students[i].stu_age);
        p("Course:");
        scanf("%s",&students[i].stu_course);
        p("City:");
        scanf("%s",&students[i].stu_city);
        p("Standard:");
        scanf("%d",&students[i].stu_standard);
        p("School:");
        scanf("%s",students[i].stu_school);
    }
    p("Student Records:\n");
    for (int i=0;i<3;i++) 
	{
        p("Student %d:\n",i+1);
        p("ID: %d\n",students[i].stu_id);
        p("Name: %s\n",students[i].stu_name);
        p("Age: %d\n",students[i].stu_age);
        p("Course: %s\n",students[i].stu_course);
        p("City: %s\n",students[i].stu_city);
        p("Standard: %d\n",students[i].stu_standard);
        p("School: %s\n",students[i].stu_school);
    }
    return 0;
}
