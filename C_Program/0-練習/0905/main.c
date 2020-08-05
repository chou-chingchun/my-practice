/*眖龄絃块κだΘ罿score
玥块ㄤ单score?90单A
80?score<90单B70?score<80单C
60?score<70单Dscore<60单E*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	do
	{		
	    printf("叫块Θ罿:");
	    scanf("%d",&a);
	    if(a>=90)
	    {
		    printf("A\n");
	    }
	    if(80<=a&&a<90)
	    {
		    printf("B\n");
	    }
	    if(70<=a&&a<80)
	    {
		    printf("C\n");
	    }
	    if(60<=a&&a<7)
  	    {
		    printf("D\n");
		
	    }
	    if(a<60)
	    {
		    printf("E\n");
	    }
    }while(a>0);
	
	return 0;
} 
