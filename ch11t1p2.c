#include <stdio.h>
#define p printf
struct Employee 
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};
int main() 
{
    int num_employees;
    p("Enter the number of employees: ");
    scanf("%d", &num_employees);
    struct Employee employees[num_employees];
    p("Enter details for %d employees:\n",num_employees);
    for (int i=0;i<num_employee;i++) 
	{
        p("Enter details for employee %d:\n",i+1);
        p("ID: ");
        scanf("%d",&employees[i].emp_id);
        p("Name:");
        scanf("%s",&employees[i].emp_name);
        p("Age:");
        scanf("%d",&employees[i].emp_age);
        p("Role:");
        scanf("%s",&employees[i].emp_role);
        p("City:");
        scanf("%s",&employees[i].emp_city);
        p("Experience (in years): ");
        scanf("%d",&employees[i].emp_experience);
        p("Company Name: ");
        scanf("%s",employees[i].emp_company_name);
    }
    printf("\nEmployee Records:\n");
    for (int i = 0; i <num_employees;i++) 
	{
        p("Employee %d:\n",i+1);
        p("ID: %d\n",employees[i].emp_id);
        p("Name: %s\n",employees[i].emp_name);
        p("Age:%d\n",employees[i].emp_age);
        p("Role: %s\n",employees[i].emp_role);
        p("City: %s\n",employees[i].emp_city);
        p("Experience: %d years\n",employees[i].emp_experience);
        p("Company Name: %s\n",employees[i].emp_company_name);
    }
    return 0;
}

