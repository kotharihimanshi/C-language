#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("Enter four numbers: \n a:");
	scanf("%d", &a);
	
	printf("b: ");
	scanf("%d", &b);
	
	printf("c: ");
	scanf("%d", &c);
	
	printf("d: ");
	scanf("%d", &d);
	
	if (a > b && a > c && a > d){
		return a;
	}
	if(b > a && b > c && b > d){
		return b;
	}
	if(c > a && c > b && c > d){
		return c;
	}
	if(d > a && d > b && d > c){
		return d;
		
	}
	return 0;
}  

	
	
