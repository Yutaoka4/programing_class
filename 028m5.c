#include <stdio.h>
int main(void)

{
int i,j,h;
h=3;
for(i=1; i<=h; i++){
for(j=1; j<=i*2-1; j++) putchar('-');
for(j=1; j<=h-i; j++) putchar('*');
putchar('\n');
}
for(i=1; i<=h; i++){
for(j=1; j<=2*(h-i)+1; j++) putchar('-');
for(j=1; j<=i-1; j++) putchar('*');
putchar('\n');
}
return(0);
}