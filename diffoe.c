#include <stdio.h>
int main(void)
{
intx,y,z;
printf("enter values");
scanf("%d%d",&x,&y);
z=x-y;
if(z%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
