










#include <stdio.h>

int main()
{
	int x;
	printf("ENTER THE NUMBER :- ");
	scanf("%d",&x);
	if(x<0) {
		printf("THE NUMBER IS NEGATIVE.");
	}
	else if(x>0) {
		printf("THE NUMBER IS POSITIVE.");
	}
	else {
		printf("THE NUMBER IS EXACTLY ZERO.");
	}

	return 0;
}






