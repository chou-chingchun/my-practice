#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b=25,count=0;	
	do
	{
		printf("請輸入數字:");
	    scanf("%d", &a);
		if(a>25)
		{
			printf("太大了\n");
		}
		else
		{
			printf("太小了\n");
		}
		
	count=count+1;	
	}while(a!=b);
	/*while(a!=b){
		if(a>25){
			printf("太大了\n");
		}
		else{
			printf("太小了\n");
		}
	    printf("請輸入數字:");
	    scanf("%d", &a);
	    
	}*/
	
	printf("恭喜答對,猜了%d次",count);
	return 0;
} 
