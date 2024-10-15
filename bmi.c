#include <stdio.h>
int main()
{
    int x,y;
    printf("を入力してください.\n");
    
    printf(":");
    scanf("%d",&x);
    
    printf(":");
    
    scanf("%d",&y);    
    x=x*x;
    printf("は%dです.\n",y/x);
    
    
    return (0);
}