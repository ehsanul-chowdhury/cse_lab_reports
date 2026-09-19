#include <stdio.h>

int main() {
    int n, p[1000], i, j;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
        p[i] = 0;

    i = 2;

    while(i <= n) {
        if(p[i] == 0)
            printf("%d ", i);

        for(j = 1; i * j <= n; j++)
            p[i * j] = 1;

        i++;
    }

    return 0;
}
