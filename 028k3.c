#include<stdio.h>
int main()
{
    int x,y,z;
    
    printf("直方体の体積を求めます.\n");
    
    printf("縦の長さ:");
    scanf("%d",&x);
    
    printf("横の長さ:");
    scanf("%d",&y);   
     
    printf("高さ:");
    scanf("%d",&z); 
    
    printf("体積は%dです.\n",x*y*z);
   
    return (0);
}