#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Value of a:");
    scanf("%d",&a);
    printf("Enter the Value of b:");
    scanf("%d",&b);
    printf("Before Swapping:\n a=%d\n b=%d", a,b);
    c=a;
    a=b;
    a=c;
    printf("\nAfter Swapping:\n a=%d\n b=%d", a,b);
    return 0;
}