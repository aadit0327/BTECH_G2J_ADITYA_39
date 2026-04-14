#include <stdio.h>
int main()
{
    char x;
    printf("Enter any Character :- ");
    scanf("%c",&x);
    if(x=='a'||x=='A' || x=='e'||x=='E' || x=='i'||x=='I' || x=='o'||x=='O' || x=='u'||x=='U' ) {
        printf("Entered Character is a VOWEL");
    }
    else{
        printf("Entered Character is a CONSONANT");
    }
    return 0;
}
