#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b=25,count=0;	

	while(a!=b){
		if(a>25){
			printf("�Ӥj�F\n");
		}
		else{
			printf("�Ӥp�F\n");
		}
	    printf("�п�J�Ʀr:");
	    scanf("%d", &a);
	 count=count+1;   
	}
	
	printf("���ߵ���,�q�F%d��",count);
	return 0;
} 
