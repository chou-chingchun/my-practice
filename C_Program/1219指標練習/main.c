#include <stdio.h>
#include <stdlib.h>

void passarray(int *A)//接收a[0]位置 
{
	printf("%d\n",A[2]);
}
int main()
{
	int a[5]={1,3,5,7,9};
	int i;
	int* p=a;//p=a[0]
	passarray(a);//把a[0]位置傳給含式 
	
	
	return 0;
}
