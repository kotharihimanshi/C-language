#include<stdio.h>
void storetable(int arr[][] , int n, int m, int number);
int main()
{
	int tables[2][10];
	storetable(tables, 0, 10, 2);
	storetable(tables, 1, 10, 3);
	return 0;
	
}

void storetable(int arr[][], int n, int m, int number){
	for(int i = 0; i<m; i++){
		arr[n][m] = number * (i+1);
	}
}
