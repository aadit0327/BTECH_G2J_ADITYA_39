#include <stdio.h>
int main()
{
	int x;
	printf("Enter any number :- ");
	scanf("%d",&x);
	if(x<0) 
  {
		printf("The entered number is NEGATIVE.");
	}
	else if(x>0) 
  {
		printf("The entered number is POSITIVE.");
	}
	else 
  {
		printf("The entered number is exactly ZERO.");
	}

	return 0;
}
