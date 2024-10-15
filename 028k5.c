#include<stdio.h>
int main()
{
    double x,y;
    
    printf("’¼‰~‚Ì‘ÌÏ‚ğ‹‚ß‚Ü‚·.\n");
    printf("’ê–Ê‚Ì”¼Œa:");
    scanf("%lf",&x);
    printf("‚‚³:");
    scanf("%lf",&y);    
    
    printf("‘ÌÏ‚Í%4.1f‚Å‚·.\n",x*x*y*3.14/3);
    
    return (0);
}