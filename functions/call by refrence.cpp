#include<stdio.h>
int interchange(int * , int *);
int main(){
	int x , y, c;
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d", &y);
	
	c = interchange(&x , &y);
	printf("%d", c);
	printf("value at a =", x);
	printf("value at b =", y);
	}
int interchange(int * x , int * y){
	int a;
	a = *x;
	*x = *y;
	*y = a;
	printf("value at a =", *x);
	printf("value at b =", *y);
	return *x, *y;
}
