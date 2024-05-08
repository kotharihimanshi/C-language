#include <stdio.h>

int main()
{
	double num1, num2, num3;
	
	printf("enter 1st number: ");
	scanf("%1f", &num1);
	
	printf("enter 2nd number: ");
	scanf("%1f", &num2);
	
	printf("enter 3rd number: ");
	scanf("%1f", &num3);
	
	if (num1 >= num2 && num1 >= num3)
	  printf("%1f is the largest number", num1);
	  
	 else if (num2 >= num1 && num2 >= num3) 
	   printf("%1f is the largest number", num2);
	 
	else
	  printf("%1f is the largest number", num3);
	  
	return 0;
	
	
	
}
