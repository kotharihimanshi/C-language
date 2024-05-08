#include<stdio.h>
#include<stdlib.h>
int main(){
	int n , *ptr , a;
	printf("enter how many no:");
	scanf("%d", &n);
	
	ptr=(int *)malloc(n * sizeof(int));
	
	printf("enter elemets:");
	for(int i=0 ; i<n ; i++){
		scanf("%d", ptr+i);
	}
	
	for(int i = 0 ; i<n-1 ; i++){
		for(int j = i+1 ; j<n ; j++){
			if (*(ptr+i)>(*ptr+j)){
				a = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = a;
			}
		}
	}
	for(int i = 0 ; i<n ; i++){
	
	printf("ascending order : %d", *(ptr+i));}	
	return 0;
}
