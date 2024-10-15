#include <stdio.h>

int main(void) {
    int dan, i, j, k;

    printf("数字ピラミッドを作ります.。\n");
    printf("何段ですか：");
    scanf("%d", &dan);

    for (i = 1; i <= dan; i++) {
        
        for (k = 0; k < dan-i; k++) {
            printf(" ");
        }
        
        for (j = 0; j < 2*i-1; j++) {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}