/*�q��L�W��J�@�Ӧʤ���Zscore�A
���U�C��h��X�䵥�šGscore?90�A���Ŭ�A�F
80?score<90�A���Ŭ�B�F70?score<80�A���Ŭ�C�F
60?score<70�A���Ŭ�D�Fscore<60�A���Ŭ�E�C*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	do
	{		
	    printf("�п�J���Z:");
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
