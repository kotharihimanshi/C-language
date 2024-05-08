#include<stdio.h>
int main(){
	int matrix[12][12];
	int i , j , cols , rows, sum = 0;
	
	printf("enter the no of elements in row n coloumn:");
	scanf("%d , %d", &rows, &cols);
	
	printf("enter the elements:\n");
	for(i = 0 ; i < rows; i++){
		for(j = 0 ; j < cols ; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("the matirx is:\n");
    for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < cols ; j++){
			printf("%d", matrix[i][j]);
		}}
	for(i = 0 ; i<rows ; i++){
		for(j = 0 ; j<cols ; j++){
		if (i == j){
		sum = sum + matrix[i][j];}
		}}
		printf("sum is %d\n", sum);
		return 0;
	
}
