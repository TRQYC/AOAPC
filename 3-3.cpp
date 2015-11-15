#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[50];
	int b[10]={0};
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
	int t=s[i]-48;
	b[t]++;
	}
	for(int i=0;i<10;i++)
	printf("%d  ", b[i]);
}
