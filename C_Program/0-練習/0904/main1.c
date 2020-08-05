/*個人所得稅計算，應納稅款的計算公式如下：
收入
稅率
收入<＝1000元部分
0％
2000元>＝收入>1000元的部分
5％
3000元>＝收入>2000元的部分
10％
6000元>＝收入>3000元的部分
15％
收入>6000元的部分
20％
輸入某人的收入，計算出應納稅額及實際得到的報酬。（7分）*/
//（如需連續計算多個人的納稅情況，直到輸入負數為止，程式應如何改進？試寫出程式）

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=0,b=0,c=0,cout=0;//收入,應稅額,實際報酬 	
	do
	{
		printf("請輸入收入:");
	    scanf("%d",&a);
	    if(a<0)
	    {
	    	break;
		}
	    else if(0<=a && a<=1000)
	    {
		    b=a*0;
		    c=a-b;
	    } 
	    else if(1000<=a && a<2000)
	    {
	 	    b=a*0.05;
		    c=a-b;
	    }
	    else if(2000<=a && a<3000)
	    {
		    b=a*0.1;
		    c=a-b;
	    }
	    else if(3000<=a && a<6000)
	    {
		    b=a*0.15;
		    c=a-b;
	    }
	    else
	    {
	    	b=a*0.2;
	    	c=a-b;
		}
	cout=cout+1;
	printf("%d號應稅額為:%d\n",cout,b);
    printf("%d號實際收入為:%d\n",cout,c);
    }while(a>=0);
    
	
	return 0;
}


