#include<stdio.h>
#include<string.h>
struct customer{
	int accno;
	char name[];
	int balance;
};
int main()
{
	struct customer cust;
	
	 printf("enter account no: ");
	 scanf("%d", &cust.accno);
	 
	 printf("enter name:");
	 scanf("%s", cust.name);
	 
	 printf("enter balance:");
	 scanf("%d", &cust.balance);
	 
	 
	 printf("customer detailes are as follows:");
	 printf("account no: %d \n", cust.accno);
	 printf("name: %s \n", cust.name);
	 printf("balance: %d \n", cust.balance);
	 return 0;
}
