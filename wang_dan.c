#include <stdio.h>

void main()
{

int k=0,n=0;//k是循环变量，n是输入数的个数
int i1,i2,i,j1,j2,j;
int a[100];//存储输入的数
int count;//周期
printf("请输入一个数:\n");
while(1)//进行数的输入
{
	scanf("%d",&a[k]);
	
	if(a[k]==0)
	{
		break;
	}
	if(a[k]>10 || a[k] < 3) 
	{
		printf("输入的矩阵太大了");
		continue;
	}	
	k++;
	
}
n=k;

for(k=0;k<n;k++)
{	//其中i1为i‘，j1为j’，i和j为初始值，i2，j2为题目中的i，j
	i=i1=i2=1,j=j1=j2=1;//i，j的初始下标为1，1
	count=0;
	while(1)//开始进行循环
	{
		count=count+1;//每次循环加1
		i1=(i2+j2)%a[k];//取得i‘
		j1=(i2+2*j2)%a[k];//取得j’
		if(i==i1 && j==j1)//如果回到了初始状态则打印出循环次数，也就是周期
		{
			printf("%d\n",count);
			break;	
		}
		else//否则的话令i=i‘，j=j’，然后重新循环
		{
			i2=i1;
			j2=j1;
		}
	
	}
}


}
