#include<stdio.h>
#include<string.h>
void main()
{
char x[50],y[50];
int i;
printf("value");
scanf("%s",x);
strcpy(y,x);
strrev(x);
i=strcmp(x,y);
if(i==0)
{
printf("yes");
}
else
{
printf("no");
}
}
