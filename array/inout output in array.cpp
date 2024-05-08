#include<stdio.h>
int main(){
	int aadhar[5];
	for(int i=0 ; i<5; i++){
	   scanf("%d", &aadhar[i]);
	}
	for(int i=0; i<5; i++){
		printf("index %d ", i, aadhar[i]);
	}
	return 0;
}

