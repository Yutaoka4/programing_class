#include<stdio.h>
int main()
{
    int x,y;
    
    printf("二つの整数を入力してください.\n");
    printf("整数1:");
    scanf("%d",&x);
    printf("整数2:");
    scanf("%d",&y);    
    
    printf("それらの和は%dです.\n",x+y);
    printf("それらの積は%dです.\n",x*y);
    
    return (0);
}