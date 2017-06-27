#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i,j=0;
clrscr();
printf("enter the word\n");
scanf("%s",a);
strrev(a);
printf("reverse word is :%s\n",a);
for(i=0;i<=strlen(a);i++)
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
a[i]=' ';
else
b[j++]=a[i];
}
b[i]='/0';
printf("the word removed vowels is:%s\n",b);
getch();
}
