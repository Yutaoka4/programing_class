#include<stdio.h>
int main()
{
    int x,y;
    double c,d,bmi;
    
    printf("�W���̏d�Ƒ̊i�w��(Body Mass Index)�����߂܂�.\n");
    printf("�g��(mm):");
    scanf("%d",&x);
    printf("�̏d(kg):");
    scanf("%d",&y);    
    
    c=(double)x;
    d=(double)y;
    
    bmi=d/(c/1000.0*c/1000.0);
    printf("�W���̏d��%4.1lf\n",(c/10.0-100.0)*0.9);
    printf("�̊i�w��(Body Mass Index)��%4.1lf�ł�.",bmi);
    
    return (0);
}