//有一函式當x<0時y=1，當x>0時，y=3，當x=0時y=5，程式設計，從鍵盤輸入一個x值，輸出y值。 
#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int x,y;
	printf("請輸入X:");
	scanf("%d", &x);
	if(x<0){y=1;}
	else if(x>0){y=3;}
	else {y=5;}
	
	printf("y=%d",y);
	return 0;
}
