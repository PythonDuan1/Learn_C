#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//1. 汉诺塔问题:
// 1.有三根杆(编号A、B、C)
// 2. 在A杆自下而上、由大到小按顺序放置n个金盘
// 3.把A杆上的金盘全部移到C杆上，并仍保持原有顺序叠好。
//
// 操作规则：每次只能移动一个盘子，并且在移动过程中三根杆上都始终保持大盘在下，
// 小盘在上，操作过程中盘子可以置于A、B、C任一杆上。

//2. 青蛙跳台阶问题

//将n个圆盘从A柱借助于B柱移动到C柱上，需要移动几次盘子
int count = 0;

void move(char a,char c,int n)
{
	printf("把第%d个圆盘从%c -> %c\n", n, a, c);
	count++;
}

void Hanno(char a, char b, char c, int n)
{
	if (n == 1)
	{
		move(a, c, n);
	}
	else
	{
		//将n-1个圆盘从A柱借助于C柱移动到B柱上
		Hanno(a, c, b, n - 1);
		//将A柱子最后一个圆盘移动到C柱上
		move(a, c, n);
		//将n-1个圆盘从B柱借助于A柱移动到C柱上
		Hanno(b, a, c, n - 1);
	}
}

//int main()
//{
//	int n = 0;
//	printf("输入A柱子上的圆盘个数：");
//	scanf("%d", &n);
//	//将n个圆盘从A柱借助于B柱移动到C柱上
//	Hanno('A', 'B', 'C', n);
//	printf("一共移动了%d次圆盘", count);
//	return 0;
//}