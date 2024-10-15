#include <stdio.h>
int main (void)
{
    int n1,n2,n3,n4,n5;
    puts("五つの整数を入力してください.");
    
 printf("整数１:");scanf("%d",&n1);
 printf("整数２:");scanf("%d",&n2);
 printf("整数３:");scanf("%d",&n3);
 printf("整数４:");scanf("%d",&n4);
 printf("整数５:");scanf("%d",&n5);

 if((n1==n2 && n2==n3 && n3==n4) || (n1==n2 && n2==n3 && n3==n5) || (n1==n3 && n3==n4 && n4==n5) || (n2==n3 && n3==n4 && n4==n5) || (n1==n2 && n2==n4 && n4==n5)){
 printf("フォア・カード");
 }

else if((n1==n2 && n2==n3) || (n1==n2 && n2==n4) || (n1==n2 && n2==n5) ||(n1==n3 && n3==n4) ||(n1==n3 && n3==n5) ||(n1==n4 && n4==n5) || (n2==n3 && n3==n4) || (n2==n3 && n3==n5) || (n2==n4 && n4==n5) || (n3==n4 && n4==n5)){
    printf("スリー・カード");
 }
 else if((n1==n2) || (n1==n3) || (n1==n4) || (n1==n5) || (n2==n3) || (n2==n4) || (n2==n5) || (n3==n4) || (n3==n5) ||(n4==n5)){
    printf("ワン・ペア");
 }
 else {
    printf("ポーカー・ハンド(役)はありません.");
 }
 return 0;

}









