#include <stdio.h>
int main ()
{
    float a,b;
    char op;
    printf("Enter the Operator (+,-,*,/) : ");
    scanf("%c",&op);
    printf("Enter the Value of a = ");
    scanf("%f",&a);
    printf("Enter the Value of b = ");
    scanf("%f",&b);
    switch (op)
    {
        case '+':
        printf("Sum = %f\n", a+b);
        break;
        case '-':
        printf("Difference = %f\n", a-b);
        break;
        case '*':
        printf("Product = %f\n", a*b);
        break;
        case '/':
        if (b!=0)
        {
            printf("Division = %f\n", a/b);
        }
        else
        printf("Error");
    }
    return 0;
}