 #include<stdio.h>
int main()
{

    int arr[3][3] = {{1,2,3},{4,5,6},{5,6,7}};
     int i,j;
     for(i=0; i<3; i++)
    {
    	printf("\n");
    	for(j=0; j<3; j++)
    	printf("%d   ",arr[i][j]);
	}
	return 0;
}
