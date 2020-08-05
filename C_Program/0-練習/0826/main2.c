//輸入一個圓半徑（r）當r>＝0時，計算並輸出圓的面積和周長，否則，輸出提示資訊
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r,area,ln;
	printf("請輸入半徑長:");
	scanf("%d", &r);
	if(r>0)
	{
		area=r*r;
		ln=2*r;
		printf("面積是%dpi\n周長是%dpi",area,ln);
	}
	else
	{
		printf("請輸入正整數");
	}
	
	
	return 0;
}
