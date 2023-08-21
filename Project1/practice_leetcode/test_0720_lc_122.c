#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

//122. 买卖股票的最佳时机 II
//给你一个整数数组 prices ，其中 prices[i] 表示某支股票第 i 天的价格。
//
//在每一天，你可以决定是否购买和 / 或出售股票。你在任何时候 最多 只能持有 一股 股票。你也可以先购买，然后在 同一天 出售。
//
//返回 你能获得的 最大 利润 。

//例1：
//输入：prices = [7, 1, 5, 3, 6, 4]
//输出：7
//解释：在第 2 天（股票价格 = 1）的时候买入，在第 3 天（股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5 - 1 = 4 。
//随后，在第 4 天（股票价格 = 3）的时候买入，在第 5 天（股票价格 = 6）的时候卖出, 这笔交易所能获得利润 = 6 - 3 = 3 。
//总利润为 4 + 3 = 7 。
// 
//例2：
//输入：prices = [1, 2, 3, 4, 5]
//输出：4
//解释：在第 1 天（股票价格 = 1）的时候买入，在第 5 天 （股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5 - 1 = 4 。
//总利润为 4 。
// 
//例3：
//输入：prices = [7, 6, 4, 3, 1]
//输出：0
//解释：在这种情况下, 交易无法获得正利润，所以不参与交易可以获得最大利润，最大利润为 0 。


//暴力解法:
//int maxProfit(int* prices, int pricesSize) {
//	int total_p = 0;
//	if (pricesSize == 1)
//	{
//		return total_p;
//	}
//	if (pricesSize == 2)
//	{
//		total_p = fmax(0, prices[1] - prices[0]);
//		return total_p;
//	}
//	int buy_i = 0, sell_i = 0, k = 0; //寻找需要买入和卖出的下标
//	for (k = 1; k < pricesSize - 1; k++)
//	{
//		//先考虑是否需要买入
//		if (prices[k] <= prices[k - 1])
//		{
//			//需要买入
//			buy_i = k;
//		}
//		if (prices[k] >= prices[k + 1] && prices[k] > prices[buy_i] && prices[k] > prices[k - 1])
//		{
//			//这回应该卖掉赚利润
//			sell_i = k;
//			total_p = total_p + (prices[sell_i] - prices[buy_i]);
//		}
//		if (k + 1 == pricesSize - 1 && prices[k + 1] > prices[k] && prices[k + 1] > prices[buy_i])
//		{
//			sell_i = k + 1;
//			// k+1是最后一个元素 ，只考虑是否卖
//			total_p = total_p + (prices[sell_i] - prices[buy_i]);
//		}
//	}
//	return total_p;
//}


//动态规划dp[][]
//考虑到「不能同时参与多笔交易」，因此每天交易结束后只可能存在手里有一支股票或者没有股票的状态。

//定义状态 dp[i][0] 表示第 i 天交易完后手里没有股票的最大利润，dp[i][1] 表示第 i 天交易完后手里持有一支股票的最大利润（i 从 0 开始）。

//int maxProfit(int* prices, int pricesSize)
//{
//	int n = pricesSize;
//	int** dp = (int**)malloc(sizeof(int*) * (n + 1));  // 动态分配 n+1 行指针
//	for (int i = 0; i < n + 1; i++) {
//		dp[i] = (int*)malloc(sizeof(int) * (2));  // 动态分配每行 2 列的数组
//	}
//		
//	int res = 0;
//	dp[0][0] = 0, dp[0][1] = -prices[0];//第一天交易完有一支股票意味着买入了，所以 -prices[0]
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		dp[i][0] = fmax(dp[i - 1][0], dp[i - 1][1] + prices[i]);
//		dp[i][1] = fmax(dp[i - 1][1], dp[i - 1][0] - prices[i]);
//	}
//	res = dp[n - 1][0];
//
//	// 释放动态分配的数组内存
//	for (int i = 0; i < n + 1; i++) {
//		free(dp[i]);
//	}
//	free(dp);
//
//	return res;
//}

int maxProfit(int* prices, int pricesSize)
{
	int profit = 0;//初始化利润
	int i = 0;
	for (i = 1; i < pricesSize; i++)
	{
		//当前价格高于前一天时，将价差计入利润
		if (prices[i] - prices[i - 1] > 0)
		{
			//profit = profit + (prices[i] - prices[i - 1]);
			profit += (prices[i] - prices[i - 1]); // 使用 += 运算符简化计算过程
		}
	}
	return profit;
}

//int main()
//{
//	//int arr[] = { 7,1,5,3,6,4 };
//	//int arr[] = { 1,2,3,4,5 };
//	//int arr[] = { 7,6,4,3,1 };
//	//int arr[] = { 2,1,1,2,0,0,3 };//4
//	int arr[] = { 5, 2, 3, 2, 6, 6, 2, 9, 1, 0, 7, 4, 5, 0 };//20   1+4+7+7+1=20
//	//int arr[] = { 0,5,5,6,2,1,1,3 };//8   5+1+2=8
//	//int arr[] = { 2,1,4 };
//	//int arr[] = { 2,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz 数组长度 : %d\n", sz);
//	int res = maxProfit(arr, sz);
//	printf("res************: %d\n", res);
//
//	return 0;
//}
