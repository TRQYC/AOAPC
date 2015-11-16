#include<stdio.h> 
#include<string.h>
#include<ctype.h>
int main()
{
char ch[50];
int x=0,y=0;
char a[5][5];
gets(*a);
printf("enter the command\n");
scanf("%s",ch);
int len=strlen(ch);

for(int i=0;i<5;i++)
 for(int j=0;j<5;j++)
if(a[i][j]==' ') {y=i;x=j;printf("%d %d\n",i,j);break;}//暂时不考虑退出i循环，牺牲时间性能


for(int i=0;i<5;i++)
	{for(int j=0;j<5;j++)
		printf("%3c",a[i][j]);
	 printf("\n");
	}
 printf("\n");
for(int i=0;i<len;i++)
{char temp;
	if(ch[i]=='A'&&y>=1) {temp=a[y-1][x];a[--y][x]=' ';a[y+1][x]=temp;}
	else if(ch[i]=='B'&&y<=3) {temp=a[y+1][x];a[++y][x]=' ';a[y-1][x]=temp;}
	else if(ch[i]=='L'&&x>=1) {temp=a[y][x-1];a[y][--x]=' ';a[y][x+1]=temp;}
	else if(ch[i]=='R'&&x<=3) {temp=a[y][x+1];a[y][++x]=' ';a[y][x-1]=temp;}
	else {printf("This puzzle has no final configuration.");return 0;
}
	}

for(int i=0;i<5;i++)
	{for(int j=0;j<5;j++)
		printf("%3c",a[i][j]);
	 printf("\n");
	}
}

