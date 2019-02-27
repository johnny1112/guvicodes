#include <stdio.h>
int main(void)
{
int x,y=1,i;
for(i=0;i<3;i++)
{
scanf("%d%d",&x,&y);
if(y!=0)
{
printf("%d\n",x-y);
}
}
return 0;
}
