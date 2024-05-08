#include<stdio.h>
void interchange(int *number1,int *number2)
{
	int temp;
	temp=*number1;
	*number1=*number2;			
	*number2=temp;
}
int main()
{
	int num1=50,num2=70;
	interchange(&num1,&num2);
	printf("\n Number1: %d",num1);
	printf("\n Number2: %d",num2);
	return 0;
}

