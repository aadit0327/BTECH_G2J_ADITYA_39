#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number a:\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("\n The entered number is even.");
    }
    else
    {
        printf("\n The entered number is odd.");
    }

    return 0;
}
