#include <stdio.h>

int main(void) {
    int dan, i, j, k;

    printf("���s�l�ӌ`�����܂��B\n");
    printf("���i�ł����F");
    scanf("%d", &dan);

    for (i = 0; i < dan; i++) {
        
        for (k = 0; k < i; k++) {
            printf(" ");
        }
        
        for (j = 0; j < dan; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}