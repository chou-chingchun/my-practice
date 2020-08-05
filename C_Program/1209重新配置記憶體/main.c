#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* numbers=0;
	int length=0;
	int input;
	int i;
	printf("½Ð¿é¤J:\n");
	while(1)
	{
		scanf("%d",&input);
		if(input == 0)
		{break;}
		numbers=realloc(numbers,sizeof(int)*(length+1));
		
	    /*int larger = malloc(numbers,sizeof(int)*(length+1))
	    for(i=0;i<length;i=i+1)
	    {
	        larger[i]=numbers[i];
	    }
	    free(numbers);
	    numbers=larger;*/
		
	    numbers[length]=input;
	    length++;		
	}
	printf("Numbers:");
	for(i=0;i<length;i=i+1)
	{
		printf("%d ",numbers[i]);
	}
	printf("\n");
	return 0;
} 
