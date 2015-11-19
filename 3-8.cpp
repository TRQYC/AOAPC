#include<stdio.h>
#include<string.h>
#define maxn 100
#define display_limint 50
#define max_INT 10000

int digits[maxn];//存在问题，无法输出1/2， 
int reminder_exist[max_INT];
int reminder_pos[max_INT];
int main()
{
	int fengmu,fengzi,reminder,shang;
	while(scanf("%d%d",&fengzi,&fengmu)!=EOF&fengmu)
	{
		int original_fengzi=fengzi;
		memset(reminder_exist,0,sizeof(reminder_exist));
		memset(reminder_pos,0,sizeof(reminder_pos));
		shang=fengzi/fengmu;
		reminder=fengzi%fengmu;
		int integer=shang;
		
		//找出循环 
		int cycle_pos=maxn;
		int cycle_len=0;
		int i=0;
		int found_cycle=0;
		
		for(i=0;i<=52;i++)
		{
			if(reminder_exist[reminder])
			{
				cycle_pos=reminder_pos[reminder];
				cycle_len=i-cycle_pos;
				break;
			}
			else
			{
				reminder_exist[reminder]=1;
				reminder_pos[reminder]=i;
			}
			shang=reminder*10/fengmu;
			reminder=reminder*10%fengmu;
			digits[i]=shang;
		}
		//输出 
	
		printf("%d/%d=%d.",original_fengzi,fengmu,integer);
		
		for(int j=0;j<i&&j<=display_limint;j++)
		{	if(j==cycle_pos) printf("(");
			printf("%d",digits[j]);
			if(j==i-1) printf(")");
			if(j==display_limint) printf("...");
		}
		printf(" cycle_len：%d\n",cycle_len);	
	}
}
