#include<stdio.h>
int main()
{
int length,wid,hght,vol,surf;
printf(" length&wid");
scanf("%d%d%d",&length,&wid,&hght);
vol=length*wid*hght;
surf=(2*length*wid)+(2*length*hght)+(2*hght*wid);
printf("volume",&vol);
printf("surface %d",surf);
getch();
return 0;}
