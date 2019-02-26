#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void)
{
char q[10];
int n,o;
printf("value:");
scanf("%s",q);
n=strlen(q);
o=n/2;
q[o]='*';
printf("%s",q);
getch();
}
