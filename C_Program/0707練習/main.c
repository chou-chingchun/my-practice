#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int r;
	float PI=3.14159;
	printf("½Ð¿é¤J¶ê¥b®|:");
	scanf("%d",&r); 
	if(r<=0) 
		return 0;
	printf("¶ê©Pªø:%f \n",2*r*PI);
	printf("¶ê­±¿n:%f \n",r*r*PI);
	return 0;	   
} 
