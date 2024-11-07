// program to show structure working
#include <stdio.h>
#include <string.h>
struct employee {
    char name[30];
    int ID;
    char department[30];
    float salary;
    char email[40];
}employee1;
int main() {
    strcpy(employee1.name,"John Doe");
    employee1.ID=45454545;
    strcpy(employee1.department,"Human Resources");
    employee1.salary=27000000;
    strcpy(employee1.email,"john@gmail.com");
    
    printf("Name:%s\n",employee1.name);
    printf("ID;%d\n",employee1.ID);
    printf("Department:%s\n",employee1.department);
    printf("Salary:%.2f\n",employee1.salary);
    printf("Email:%s\n",employee1.email);
    return 0;
}
