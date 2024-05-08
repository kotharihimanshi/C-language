#include<stdio.h>
int sum(int a , int b);

int main(){
	int a,b;
	printf("enter a nuber:");
	scanf("%d",&a);
	
	printf("enter a number:");
	scanf("%d", &b);
	
	int s= sum(a , b);
	printf("sum is: %d", s);
	
	
}
int sum(int a , int b)
{
	return a + b;
}
