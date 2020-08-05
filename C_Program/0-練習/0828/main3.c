/*神州行使用者無月租費，話費每分鐘0.6元，
全球通使用者月租費50元，話費每分鐘0. 4元。
輸入一個月的通話時間，分別計算出兩種方式的費用，判斷哪一種合適。*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a,b,c;//神州.全球.時間
	printf("請輸入通話時間:");
	scanf("%d",&c);
	a=c*0.6;
	b=c*0.4+50;
	printf("神州行動費用是:%d\n",a);
	printf("全球通行者費用是:%d\n",b);
	if(a>b)
	{
		printf("全球行動者比較適合\n");
    }
    else if(a<b)
    {
    	printf("神州行動比較適合\n");
	}
	else
	{
		printf("都可以");
	}
	
	return 0;
}
