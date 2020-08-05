#include <stdio.h>
#include <stdlib.h>

int main()
{
	int answer = 7;
	int guess;
	
	
	
	while (guess != answer)
	{
		printf("please enter your guess:");
	    scanf("%d", &guess);
	    
		 if (guess > answer)
		 {
		 	printf("too big! \n");		 	
		 }
		 
		 if(guess == answer)
		 {
		 	printf("you are right! \n");
		 }
		 if(guess < answer)
		 {
		 	printf("too small! \n");
		 }
		 
	   
	   
	   
	   
	}
	
	return 0;
	
 	
} 
