#include<stdio.h>
#include<string.h>
int main(){ 
char p[50];
int num=0,s=0;
scanf("%s",p);
int str=strlen(p);
for(int i=0;i<str;i++)
{
	if(p[i]=='O') {num++;s+=num;}
	else num=0;
}
printf("%d",s);
} 
