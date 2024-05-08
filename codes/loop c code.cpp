#include<stdio.h>

int main(){
	
	int i=1;
	int j=10;
	
	//example of while loop entry check loop
	
	while(i<=10){
		printf("\n time: %d",i);
		i++;
	}
	do{
		printf("\n time: %d",j);
		j--;
	}
	while(j>=0);
}
