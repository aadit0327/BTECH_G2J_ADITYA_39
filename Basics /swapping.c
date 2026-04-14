#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the Value of a:");
    scanf("%d",&a);
    printf("Enter the Value of b:");
    scanf("%d",&b);
    printf("Before Swapping:\n a=%d\n b=%d", a,b);
    temp=a;
    a=b;
    a=temp;
    printf("\nAfter Swapping:\n a=%d\n b=%d", a,b);
    return 0;
}
