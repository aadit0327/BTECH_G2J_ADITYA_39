#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the size of Array upto 100\n");
    printf("Enter the number of Elements : ");
    scanf("%d",&n);
    printf("Enter the Array Elements\n");
    for(i=0;i<n;i++)
    {
      printf("Enter a[%d] = " , i);  
      scanf("%d",&a[i]);
    }
    printf("The Array Elements Are:\n");
     for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}
