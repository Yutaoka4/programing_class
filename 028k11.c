#include <stdio.h>
#include <math.h>  
int main(void) {
    int n, i;
    double num, sum = 0.0, sum_sq = 0.0, ave, bunsan, hyoujunhensa;

    printf("いくつの数を入力しますか：");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d 番目の数値を入力：", i + 1);
        scanf("%lf", &num);
        sum += num;
        sum_sq += num * num;  
    }

    
    ave = sum / n;

    bunsan = (sum_sq / n) - (ave * ave);

    hyoujunhensa = sqrt(bunsan);

    printf("合計：%.2f\n", sum);
    printf("平均：%.2f\n", ave);
    printf("分散：%.2f\n", bunsan);
    printf("標準偏差：%.2f\n", hyoujunhensa);

    return 0;
}