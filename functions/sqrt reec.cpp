#include<stdio.h>
#include<math.h>
int main()
{
	float num,root;
	printf("Enter a number to find the square");
	scanf("%f",&num);
	root=sqrt(num);
	printf("square root of %2f=%.2f",num,root);
	return 0;
}


