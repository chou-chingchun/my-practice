#include <stdio.h>
#include <stdlib.h>

void str_read(char[]);
int main()
{
	char str[15];
	str_read(str);
	printf("%s \n",str);
	return 0;
}

void str_read(char str[])
{
	int i=0;
	while(1)
	{
	    scanf("%c",&str[i]);
	    if(str[i]=='\n')
	    {
	    	break;
		}
		i=i+1;
		str[i]=='\0';
    }
}
