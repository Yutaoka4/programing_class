#include <stdio.h>
#include <math.h>  
int main(void) {
    int n, i;
    double num, sum = 0.0, sum_sq = 0.0, ave, bunsan, hyoujunhensa;

    printf("�����̐�����͂��܂����F");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d �Ԗڂ̐��l����́F", i + 1);
        scanf("%lf", &num);
        sum += num;
        sum_sq += num * num;  
    }

    
    ave = sum / n;

    bunsan = (sum_sq / n) - (ave * ave);

    hyoujunhensa = sqrt(bunsan);

    printf("���v�F%.2f\n", sum);
    printf("���ρF%.2f\n", ave);
    printf("���U�F%.2f\n", bunsan);
    printf("�W���΍��F%.2f\n", hyoujunhensa);

    return 0;
}