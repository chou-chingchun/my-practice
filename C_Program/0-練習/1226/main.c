/*輸入兩個整數，利用指標變數作為函式引數，
程式設計實現兩數互換功能，並將交換後的資料重新輸出。 */ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,x;
	int* add_a=&a;
	int* add_b=&b;
	printf("請輸入a=");
	scanf("%d",&a);
	printf("請輸入b=");
	scanf("%d",&b);
	x=*add_a;
	*add_a=*add_b;
	*add_b=x;
	printf("交換後a=%d\n",*add_a);
	printf("交換後b=%d\n",*add_b);
	printf("a的記憶體位置:%d\n",add_a);
	printf("b的記憶體位置:%d\n",add_b);
	
	
	
	return 0;
} 
