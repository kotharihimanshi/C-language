
#include<stdio.h>
int reverse(int);
int main()
{
    int number,reverse_num;
    printf("enter a number");
    scanf("%d",&number);
    reverse_num=reverse(number);
    printf("The reverse of the given number is %d",reverse_num);

}

int reverse(int number)
{
    int sum=0,rev;
    while(number>0)
    {
        rev=number%10;
        sum=sum*10+rev;
        number=number/10;
    }
    return sum;

}

