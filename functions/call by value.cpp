#include <stdio.h>
int swap(int,int);
int main()
{
    int a,b;
    printf("Enter a integer: ");
    scanf("%d",&a);
    printf("Enter b integer: ");
    scanf("%d",&b);
    swap(a,b);

}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The values after swapping\n");
    printf("The a value is %d\n",a);
    printf("The b value is %d\n",b);

}

