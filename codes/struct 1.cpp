#include<stdio.h>
#include<string.h>
struct employee
{
	int eid;
	char name[4];
	int salary;
};
int main(){

struct employee e1,e2;
e1.eid=1;
strcpy(e1.name, "abc");
e1.salary = 20000;

e2.eid=2;
strcpy(e2.name, "vbf");
e2.salary = 30000;
printf("eid of e1 and e2 is: %d, %d\n", e1.eid, e2.eid);
printf("name of e1 and e2: %s %s\n", e1.name, e2.name);
printf("salary of e1 and e2: %d %d\n", e1.salary, e2.salary);
}

