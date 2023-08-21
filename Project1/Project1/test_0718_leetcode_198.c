#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>


//198. 打家劫舍
//你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，
// 影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
//
//给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。
//
//例1：
//输入：[1, 2, 3, 1]
//输出：4
//解释：偷窃 1 号房屋(金额 = 1) ，然后偷窃 3 号房屋(金额 = 3)。
//偷窃到的最高金额 = 1 + 3 = 4 。
// 
//例2：
//输入：[2, 7, 9, 3, 1]
//输出：12
//解释：偷窃 1 号房屋(金额 = 2), 偷窃 3 号房屋(金额 = 9)，接着偷窃 5 号房屋(金额 = 1)。
//偷窃到的最高金额 = 2 + 9 + 1 = 12 。
//
//提示：
//1 <= nums.length <= 100
//0 <= nums[i] <= 400


//int rob(int* nums, int numsSize) {
//	int odd = 0, even = 0, i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (i % 2 == 0)
//		{
//			even = even + nums[i];	//偶数
//		}
//		else
//		{
//			odd = odd + nums[i]; //奇数
//		}
//	}
//
//	if (odd >= even)
//	{
//		return odd;
//	}
//	else
//	{
//		return even;
//	}
//}


//int max(int a, int b) {
//	return (a > b) ? a : b;
//}

//动态规划解法 -- C语言版本
int rob(int* nums, int numsSize) {
	if (numsSize == 0)
	{
		return 0;
	}
	// 子问题：
	// f(k) = 偷 [0..k) 房间中的最大金额

	// f(0) = 0
	// f(1) = nums[0]
	// f(k) = max{ rob(k-1), nums[k-1] + rob(k-2) }
	int N = numsSize;
	//使用动态内存分配的方式来创建指定长度的数组(创建长度为 N+1 的数组)
	//int* dp = (int*)malloc(sizeof(int) * N + 1);
	int* dp = (int*)malloc(sizeof(int) * (N + 1));
	dp[0] = 0;  // 当 k=0 时，没有房子，所以 f(0) = 0。
	dp[1] = nums[0]; //当 k=1 时，只有一个房子，偷这个房子即可，
	int k = 0;
	for (k = 2; k < N + 1; k++)
	{
		//dp[k] = max(dp[k - 1], nums[k - 1] + dp[k - 2]);
		dp[k] = fmax(dp[k - 1], nums[k - 1] + dp[k - 2]);
	}
	return dp[N];

	// 使用 arr 操作动态分配的数组
	free(dp);  // 释放动态分配的数组内存
	
}

int main()
{
	//int arr[] = { 2,7,9,3,1 };
	//int arr[] = { 1,2,3,1 };
	//int arr[] = { 2,1,1,2 }; //4
	//int arr[] = { 3,1,4,7,2 }; //10
	//int arr[] = { 1,3,1,3,100 };//103
	int arr[] = { 6, 3, 10, 8, 2, 10, 3, 5, 10, 5, 3 };//39
	//int arr[] = { 6, 3, 10 };
	//int arr[] = { 6,3,10,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz: %d\n", sz);
	int res = rob(arr, sz);
	printf("res-------: %d\n", res);

	return 0;
}

//dp[2] = max(dp[1], nums[1] + dp[0]) = max(6,3+0) = 6
//dp[3] = max(dp[2], nums[2] + dp[1]) = max(6,10+6) = 16
//dp[4] = max(dp[3], nums[3] + dp[2]) = max(16,8+6) = 16
