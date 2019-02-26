#include<stdio.h>
 main()
{
int x,i;
scanf("%d",&x);
for(i=x;;i++)
{
if(i%10==0)
{
printf("%d",&i);
break;
}
}
return 0;
}
