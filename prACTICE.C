#include<stdio.h>
int main ()
{
    int n;
    printf(" enter the number of row:");
    scanf("%d",&n);
    int m;
    printf(" enter the number of coloum");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for( int i=1;i<=m;i++){
            printf(" * ");
        }
        printf(" \n");
    }
    return 0;

}