#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>


//121. 买卖股票的最佳时机
//
//给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。
//
//你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。
//
//返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。
//
//输入：[7, 1, 5, 3, 6, 4]
//输出：5
//解释：在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6 - 1 = 5 。
//注意利润不能是 7 - 1 = 6, 因为卖出价格需要大于买入价格；同时，你不能在买入前卖出股票。
//
//输入：prices = [7, 6, 4, 3, 1]
//输出：0
//解释：在这种情况下, 没有交易完成, 所以最大利润为 0。


//二维dp在leetcode上运行超出内存限制
//int maxProfit(int* prices, int pricesSize) {
//	//if (pricesSize == 0)
//	//{
//	//	return 0;
//	//}
//	//int* dp = (int*)malloc(sizeof(int) * (n + 1));
//	// 
//	//dp[i][j] 表示在 第i天买入，第j天 卖出能得到的最大利润
//	//int n = pricesSize, m = pricesSize;  // n 表示行数，m 表示列数
//	int n = pricesSize;  // n 表示行数，m 表示列数
//	//int** dp = (int**)malloc(sizeof(int*) * n);  // 动态分配 n 行指针
//	int** dp = (int**)malloc(sizeof(int*) * (n + 1));  // 动态分配 n+1 行指针
//	for (int i = 0; i < n + 1; i++) {
//		dp[i] = (int*)malloc(sizeof(int) * (n + 1));  // 动态分配每行 n+1 列的数组
//	}
//
//	// 初始化 dp 数组
//	for (int i = 0; i < n + 1; i++) {
//		for (int j = 0; j < n + 1; j++) {
//			dp[i][j] = 0;
//		}
//	}
//	int res = 0;
//	// 使用 arr 操作动态分配的二维数组
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			//dp[i][j] = i * m + j;  // 给每个元素赋值
//			//dp[i][j]= fmax(dp[i])
//			//if (j == 0)
//			//{
//			//	dp[i][j] = 0;
//			//}
//			if (j - i == 1)
//			{
//				dp[i][j] = prices[j] - prices[i];
//			}
//			else
//			{
//				//j >= 2 时
//				dp[i][j] = fmax(dp[i][j - 1], prices[j] - prices[i]);
//			}
//			if (dp[i][j] > res)
//			{
//				res = dp[i][j];
//			}
//
//		}
//	}
//	//return dp[n - 1][n];
//
//	// 释放动态分配的数组内存
//	for (int i = 0; i < n; i++) {
//		free(dp[i]);
//	}
//	free(dp);
//
//	return res;
//}


////改用一维dp
//int maxProfit(int* prices, int pricesSize)
//{
//	int res = 0;
//	if (pricesSize == 1)
//	{
//		return 0;
//	}
//	if (pricesSize == 2)
//	{
//		res = prices[1] - prices[0];
//		if (res > 0)
//		{
//			return res;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	int n = pricesSize;
//	//dp[k]表示第k天卖出获得的最大利润
//	//min_v[k]表示 前k天 中的最小值
//
//	int* dp = (int*)malloc((n + 1) * sizeof(int));//动态数组
//	int* min_v = (int*)malloc((n + 1) * sizeof(int));//动态数组
//	dp[0] = 0;
//	dp[1] = prices[1] - prices[0];//第2天卖出获得的最大利润
//	min_v[0] = prices[0];
//	min_v[1] = fmin(prices[0], prices[1]); //前两项最小值
//	//printf("dp[1] :%d\n", dp[1]);
//	int k = 0;
//	for (k = 2; k < n; k++)
//	{
//		dp[k] = fmax(dp[k - 1], prices[k] - min_v[k - 1]);
//		min_v[k] = fmin(min_v[k - 1], prices[k]);
//		/*printf("k :%d\n", k);
//		printf("dp[k] :%d\n", dp[k]);
//		printf("min_v :%d\n", min_v[k]);*/
//		if (dp[k] > res)
//		{
//			res = dp[k];
//		}
//
//	}
//	free(dp);//使用完释放内存
//	dp = NULL;//如果不将其置为空，再去访问p的内存时就会形成非法访问!
//	return res;
//}

//优化一维数组dp,改用常数来存储变量
//int maxProfit(int* prices, int pricesSize)
//{
//	int price_min = prices[0];
//	int profit_max = 0; 
//	int k = 0;
//	for (k = 0; k < pricesSize; k++)
//	{
//		price_min = fmin(prices[k], price_min);
//		profit_max = fmax(prices[k] - price_min, profit_max);
//	}
//	return profit_max;
//}


//int main()
//{
//	//int arr[] = { 7, 1, 5, 3, 6, 4 };
//	int arr[] = { 7, 6, 4, 3, 1 };
//	//int arr[] = { 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz 数组长度 : %d\n", sz);
//	int res = maxProfit(arr, sz);
//	printf("res************: %d\n", res);
//
//	return 0;
//}