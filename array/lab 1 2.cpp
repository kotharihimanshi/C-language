#include<stdio.h>
int main(){
	int f , n , i  , arr[100];
	int freq = 0;
	printf("enter no of elements:");
	scanf("%d", &n);
	
	printf("enter elemetns:");
	for(i=0;i<n;i++){
	scanf("%d", arr[i]);
	}
	
	printf("enter no of which freq is to be knwn:");
	scanf("%d", &f);
	
	for(i= 0; i< n; i++){
		if(arr[i] == f)
		freq++;
	printf("frequency of %d is %d", f , freq);
	}
	return 0;
	
}
