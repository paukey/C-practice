#include<stdio.h>   //方便输入输出
#include<stdlib.h>  //为了使用system语句


//从小到大输出a,b,c的值
void main()
{
	double a, b, c;
	printf("分别输入a,b,c\n");
	scanf("%lf%lf%lf", &a, &b, &c);

	printf("\n排序之前a=%f, b=%f, c=%f", a, b, c);
	//实现从小到大
	//a<b
	//a<c
	//b<c
	//实现a,b互换另一种方式
	//a=10,b=100
	//a=a+b    a=110,b=100
	//b=a-b    b=10,a=110
	//a=a-b    b=10,a=100
	if (a>b) //将a与b的最小数存入a
	{
		double	t=a; //实现a,b的互换
		a=b;
		b=t;
	}
	if (a>c)//将a,c之间最小值存入a
	{
		double	t=a; //实现a,c的互换
		a=c;
		c=t;
	}
	if (b>c)
	{
		double	t=c; //实现b,c的互换
		c=b;
		b=t;
	}
	printf("\n排序之后a=%f, b=%f, c=%f", a, b, c);

	system("pause");
}




void main2()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if (x>y)
	{
		printf("min=%d", y);
	}
	if (x<=y)
	{
		printf("min=%d", x);
	}
	system("pause");
}


void main1()
{
	if (1) //0不执行块语句，非零执行块语句
	{
		system("tasklist");
	}
	system("pause");
}


