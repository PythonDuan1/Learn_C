#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>


//198. ��ҽ���
//����һ��רҵ��С͵���ƻ�͵���ؽֵķ��ݡ�ÿ�䷿�ڶ�����һ�����ֽ�
// Ӱ����͵�Ե�Ψһ��Լ���ؾ������ڵķ���װ���໥��ͨ�ķ���ϵͳ������������ڵķ�����ͬһ���ϱ�С͵���룬ϵͳ���Զ�������
//
//����һ������ÿ�����ݴ�Ž��ķǸ��������飬������ ����������װ�õ������ ��һҹ֮���ܹ�͵�Ե�����߽�
//
//��1��
//���룺[1, 2, 3, 1]
//�����4
//���ͣ�͵�� 1 �ŷ���(��� = 1) ��Ȼ��͵�� 3 �ŷ���(��� = 3)��
//͵�Ե�����߽�� = 1 + 3 = 4 ��
// 
//��2��
//���룺[2, 7, 9, 3, 1]
//�����12
//���ͣ�͵�� 1 �ŷ���(��� = 2), ͵�� 3 �ŷ���(��� = 9)������͵�� 5 �ŷ���(��� = 1)��
//͵�Ե�����߽�� = 2 + 9 + 1 = 12 ��
//
//��ʾ��
//1 <= nums.length <= 100
//0 <= nums[i] <= 400


//int rob(int* nums, int numsSize) {
//	int odd = 0, even = 0, i = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (i % 2 == 0)
//		{
//			even = even + nums[i];	//ż��
//		}
//		else
//		{
//			odd = odd + nums[i]; //����
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

//��̬�滮�ⷨ -- C���԰汾
int rob(int* nums, int numsSize) {
	if (numsSize == 0)
	{
		return 0;
	}
	// �����⣺
	// f(k) = ͵ [0..k) �����е������

	// f(0) = 0
	// f(1) = nums[0]
	// f(k) = max{ rob(k-1), nums[k-1] + rob(k-2) }
	int N = numsSize;
	//ʹ�ö�̬�ڴ����ķ�ʽ������ָ�����ȵ�����(��������Ϊ N+1 ������)
	//int* dp = (int*)malloc(sizeof(int) * N + 1);
	int* dp = (int*)malloc(sizeof(int) * (N + 1));
	dp[0] = 0;  // �� k=0 ʱ��û�з��ӣ����� f(0) = 0��
	dp[1] = nums[0]; //�� k=1 ʱ��ֻ��һ�����ӣ�͵������Ӽ��ɣ�
	int k = 0;
	for (k = 2; k < N + 1; k++)
	{
		//dp[k] = max(dp[k - 1], nums[k - 1] + dp[k - 2]);
		dp[k] = fmax(dp[k - 1], nums[k - 1] + dp[k - 2]);
	}
	return dp[N];

	// ʹ�� arr ������̬���������
	free(dp);  // �ͷŶ�̬����������ڴ�
	
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
