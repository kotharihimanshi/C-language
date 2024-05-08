#include<stdio.h>

int main(){
	int a, s, b, c, d, e;
	
	printf("enter no: \na: ");
	scanf("%d", &a);
	
	printf("s: ");
	scanf("%d", &s);
	//sum function
	b = a + s;
	
	printf("sum is %d \n", b);
	
	//difference function
	c = a - s;
	
	printf("diff is %d \n", c);
	
	//MULTIPLY FUNCTION
	d = a * s;
	
	printf("multiplication is %d \n", d);
	
	//divide function
	e = a / s;
	
	printf("divide %d", e);
	
	return 0;
}

