#include <stdio.h>
#include <stdlib.h>

void passarray(int *A)//����a[0]��m 
{
	printf("%d\n",A[2]);
}
int main()
{
	int a[5]={1,3,5,7,9};
	int i;
	int* p=a;//p=a[0]
	passarray(a);//��a[0]��m�ǵ��t�� 
	
	
	return 0;
}
