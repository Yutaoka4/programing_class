#include<stdio.h>
int main()
{
    double x,y;
    
    printf("���~���̑̐ς����߂܂�.\n");
    printf("��ʂ̔��a:");
    scanf("%lf",&x);
    printf("����:");
    scanf("%lf",&y);    
    
    printf("�̐ς�%4.1f�ł�.\n",x*x*y*3.14/3);
    
    return (0);
}