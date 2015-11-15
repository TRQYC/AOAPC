#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[50];
	float sum=0.0;
	scanf("%s",&s);
	int str=strlen(s);
	for(int i=0;i<str;i++)
	{	float t=0.00;
		while(i!=str-1)
		{
		if(isalpha(s[i])&&isalpha(s[i+1])) t=1.00; 
		else if (isalpha(s[i])&&!isalpha(s[i+1])) t=('s[i+1]'-'0')*1.00;
		}
		if(i==str-1) t=1.00;
		if(s[i]=='C') sum+=t*12.00;
		else if(s[i]=='H') sum+=t*1.008;
		else if(s[i]=='O') sum+=t*16.00;
		else if(s[i]=='N') sum+=t*14.01;
	}
	printf("%dg/mol",sum);
}
