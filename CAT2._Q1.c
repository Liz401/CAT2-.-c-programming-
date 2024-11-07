/*CT101/G/22501/24
Elizabeth Amondi 
*/

#include<stdio.h>
#include<string.h>
struct employee{
char name[25];
int id;
char department[20];
float salary;
char email[50];
} employee;

int main(){
 
 employee.id=12345;
employee.salary=55000.50;
strcpy(employee.name,"John Doe");
strcpy(employee.department,"Human Resource");
strcpy(employee.email,"john.doe@company.com");

printf("Name:%s\n", employee.name);
printf("ID:%d\n", employee.id);
printf("Department:%s\n", employee.department);
printf("Salary:%f\n", employee.salary);
printf("Email:%s\n", employee.email);
return 0;
}

    
