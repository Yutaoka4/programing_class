#include<stdio.h>
int main()
{
    int x,y,z;
    
    printf("三つの整数を入力してください.\n");
    
    printf("整数1:");
    scanf("%d",&x);
    
    printf("整数2:");
    scanf("%d",&y);   
     
    printf("整数3:");
    scanf("%d",&z); 
    
    printf("それらの和は%dです.\n",x+y+z);
    printf("それらの積は%dです.\n",x*y*z);
    
    return (0);
}