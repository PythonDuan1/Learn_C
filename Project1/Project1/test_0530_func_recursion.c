#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//写递归代码时:
//1.不能死递归，得有跳出条件，每次递归都要逼近跳出条件；
//2.递归层次不能太深，否则还是会栈溢出！


//递归与迭代
//迭代就是重复做同一件事情，循环


//求n的阶乘。（不考虑溢出）
//int main()
//{
//	// 循环法，迭代
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d 的阶乘为 %d\n", n, ret);
//
//	return 0;
//}


//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}

//递归法
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


// 0、1、1、2、3、5、8、13、21、34、55、89、144……
//int fib(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	else if (n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

//int count = 0; //全局变量

// 1、1、2、3、5、8、13、21、34、55、89、144……
//递归可以求解，但是效率太低，有大量重复计算！！
//int fib(int n)
//{
//	//统计第3个斐波那契数的计算次数
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

//求第n个斐波那契数。（不考虑溢出）
//斐波那契数列指的是：0、1、1、2、3、5、8、13、21、34、55、89、144……
//其中第一项为0，第二项为1，从第三项开始，每一项都是前两项的和。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}


// 1、1、2、3、5、8、13、21、34、55、89、144……
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	// 从前往后 挨着加，这样不会重复计算
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}


//迭代法(循环)
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


