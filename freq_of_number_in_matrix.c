#include <stdio.h>

int main() {
    int a[100][100], r, c, i, j, count = 0, srch_n;

    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("%d", &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered Matrix : \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the number to find frequency of : ");
    scanf("%d", &srch_n);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] == srch_n) {
                count++;
            }
        }
    }

    printf("The frequency of %d in the matrix is: %d\n", srch_n, count);

    return 0;
}
