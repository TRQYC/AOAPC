#include<stdio.h>
	int main(){//统计m个长度为n的DNA序列，找出每列种出现字母最多的组成一行新DNA序列 
	int m,n,sum=0;
	scanf("%d %d",&m,&n);
	char a[50][1000], c[n];
   	int b[4]={0};
	gets(a[m+1]);//吸收缓冲区中的enter残留	
	for(int i=0;i<m;i++)
    	gets(a[i]);//
    	
	for(int i=0;i<n;i++)//比较第n列出现最多的字母 
	{
		for(int s=0;s<m;s++) //s为行数 
			{
			if(a[s][i]=='A') b[0]++;
			else if(a[s][i]=='C') b[1]++;
			else if(a[s][i]=='G') b[2]++;
			else  b[3]++;
			}	
		int max=0,temp=0;
		for(int k=0;k<4;k++)
			if(b[k]>temp) {max=k;temp=b[k];} 
		 //得出第n列出现最多的字母并且当出现次数相同的时候用字母序排序 
		//sum+=(m-b[max]);//累加hamming距离 
 		switch(max)
		 {
		case 0:c[i]='A';break;
	 	case 1:c[i]='C';break;
	 	case 2:c[i]='G';break;
	 	case 3:c[i]='T';break;	//优化方法。设置一个常量数组即可避免这个switch啦 
		 }	//生成第i列的DNA序列的字母 
	 	for(int k=0;k++;k<4)
	 		b[k]=0;//清空b数组 
	}
printf("%d\n",sum); //打印hamingj距离 
printf("%s",c); 				//输出DNA序列 
}
