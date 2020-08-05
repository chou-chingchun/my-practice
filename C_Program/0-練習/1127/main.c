/*實現從鍵盤輸入兩個字串，分別存入兩個不同的字元陣列中；
將兩個字串連線為一個字串，並列印輸出連線後的整個字元。*/ 

#include <stdio.h>
#include <stdlib.h>


int main()
{
	char a[6];
	char b[6];
	int i;
	printf("請輸入第一個字元陣列:");
	for(i=0; a[i]!='\0' ;i=i+1)
	{
		scanf("%c",&a[i]);
	}
	printf("請輸入第二個字元陣列:");
	for(i=0; b[i]!='\0' ;i=i+1)
	{
		scanf("%c",&b[i]);
	}
	for(i=0; a[i]!='\0' ;i=i+1)
	{
		printf("%c",a[i]);
	}
	for(i=0; b[i]!='\0' ;i=i+1)
	{
		printf("%c",b[i]);
	}
	return 0;
}
