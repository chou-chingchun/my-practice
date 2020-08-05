#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b=25,count=0;	

	while(a!=b){
		if(a>25){
			printf("太大了\n");
		}
		else{
			printf("太小了\n");
		}
	    printf("請輸入數字:");
	    scanf("%d", &a);
	 count=count+1;   
	}
	
	printf("恭喜答對,猜了%d次",count);
	return 0;
} 
