#include<stdio.h>
int main()
{
    int x,y;
    double c,d,bmi;
    
    printf("標準体重と体格指数(Body Mass Index)を求めます.\n");
    printf("身長(mm):");
    scanf("%d",&x);
    printf("体重(kg):");
    scanf("%d",&y);    
    
    c=(double)x;
    d=(double)y;
    
    bmi=d/(c/1000.0*c/1000.0);
    printf("標準体重は%4.1lf\n",(c/10.0-100.0)*0.9);
    printf("体格指数(Body Mass Index)は%4.1lfです.",bmi);
    
    return (0);
}