#include<stdio.h>
#include<conio.h>
void main()
{int a[100];
int i, n;
printf("enter how many numbers you have:");
scanf("%d", &n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	printf("the reverse list is \n");
	for(i=n-1;i>=0;i--)
	{
	printf("%d ",a[i]);
	}
}
	getch() ;

}
