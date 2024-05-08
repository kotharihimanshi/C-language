#include<stdio.h>
int main(){
	int a , arr[100] , i, min ,  max;
	printf("enter the no of elements:");
	scanf("%d",&a);
	
	printf("enter the elements:");
	for(i=0 ; i<a ; i++){
	
	scanf("%d", arr[i]);
	}
	
	min = max = arr[0];
	for(i=1 ; i<a ; i++){
	if(min > arr[i])
		min = arr[i];
		if(max < arr[i])
		max  = arr[i];
	
	printf("min value:%d \n", min);
	printf("max value: %d \n", max);} 
	return 0;
}
