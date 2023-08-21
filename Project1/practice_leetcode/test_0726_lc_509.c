#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include <stdlib.h>

//509. 斐波那契数
//斐波那契数 （通常用 F(n) 表示）形成的序列称为 斐波那契数列 。该数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和。也就是：
//F(0) = 0，F(1) = 1
//F(n) = F(n - 1) + F(n - 2)，其中 n > 1
//给定 n ，请计算 F(n) 。
//
//输入：n = 2
//输出：1
//解释：F(2) = F(1) + F(0) = 1 + 0 = 1
//
//输入：n = 3
//输出：2
//解释：F(3) = F(2) + F(1) = 1 + 1 = 2


//动态规划解法
//int fib(int n) {
//	//int* dp = (int*)malloc((n + 1) * sizeof(int));//动态数组
//	int* dp = (int*)malloc((n + 2) * sizeof(int));//动态数组
//	dp[0] = 0;
//	dp[1] = 1;
//	for (int i = 2; i < n + 1; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	int res = dp[n];
//	//在返回函数结果之前,先释放动态分配的内存空间，避免内存泄漏问题。
//	free(dp); // 释放内存空间
//
//	return res;
//}

// 常数 动态规划解法
int fib(int n)
{
	if (n < 2)
	{
		return n;
	}
	int n_1 = 1, n_2 = 0, r = 0;
	for (int i = 2; i < n + 1; i++)
	{
		r = n_1 + n_2;
		n_2 = n_1;
		n_1 = r;
	}
	return r;
}

// 0 1 1 2 3 5 8 13
//int main()
//{
//	int n = 7;
//	int res = fib(n);
//	printf("res-----: %d\n", res);
//
//	return 0;
//}