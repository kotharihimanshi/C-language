 #include<stdio.h>
int main ( )
{
int n[ 11 ];	/* n is an array of 10 integers */
int i, j;	/* initialize elements of array n to 0 */
for ( i = 1; i < 11; i++ )
{
n[i] = i + 100;	/* set element at location i to i + 100 */
}	/* output each array element's value */
for (j = 1; j < 11; j++)
{
printf("Element[%d] = %d\n", j, n[j] );
} return 0;
}


