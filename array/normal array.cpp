#include<stdio.h>
int main(){
	int price[3];
	printf("enter amount:");
	scanf("%d", &price[0]);
	scanf("%d", &price[1]);
	scanf("%d", &price[2]);
	
	printf("total %d:" price[0] + price[1] + price[2]);
	return 0;
	
}
