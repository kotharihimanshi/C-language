#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr = (int *)calloc(5, sizeof(int));
	printf("enter 5 odd numbers: ");
	for(int i = 0; i<5; i++){
		scanf("%d\n", &ptr[i]);
	}
	for(int i=0 ; i<5; i++){
		printf("%d\n",i, ptr[i]);
	}
	ptr = (int *)realloc(ptr, 6);
	printf("6 even  numbers:");
	for(int i = 0; i<6; i++){
		scanf("%d\n", &ptr[i]);
	}
	for(int i=0 ; i<6; i++){
		printf("%d\n",i, ptr[i]);
	}
}
