#include <stdio.h>
int main(void)
{
char x[50],count=0,i;
scanf("%s",&x);
for(i=0;x[i]!='\0';i++)
{
f((x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')||(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'))
count++;
}
if(count>=1)
printf("yes");
else
printf("no");
return 0;
}
