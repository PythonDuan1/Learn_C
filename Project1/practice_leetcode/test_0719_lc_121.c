#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>


//121. ������Ʊ�����ʱ��
//
//����һ������ prices �����ĵ� i ��Ԫ�� prices[i] ��ʾһ֧������Ʊ�� i ��ļ۸�
//
//��ֻ��ѡ�� ĳһ�� ������ֻ��Ʊ����ѡ���� δ����ĳһ����ͬ������ �����ù�Ʊ�����һ���㷨�����������ܻ�ȡ���������
//
//��������Դ���ʽ����л�ȡ�������������㲻�ܻ�ȡ�κ����󣬷��� 0 ��
//
//���룺[7, 1, 5, 3, 6, 4]
//�����5
//���ͣ��ڵ� 2 �죨��Ʊ�۸� = 1����ʱ�����룬�ڵ� 5 �죨��Ʊ�۸� = 6����ʱ��������������� = 6 - 1 = 5 ��
//ע���������� 7 - 1 = 6, ��Ϊ�����۸���Ҫ��������۸�ͬʱ���㲻��������ǰ������Ʊ��
//
//���룺prices = [7, 6, 4, 3, 1]
//�����0
//���ͣ������������, û�н������, �����������Ϊ 0��


//��άdp��leetcode�����г����ڴ�����
//int maxProfit(int* prices, int pricesSize) {
//	//if (pricesSize == 0)
//	//{
//	//	return 0;
//	//}
//	//int* dp = (int*)malloc(sizeof(int) * (n + 1));
//	// 
//	//dp[i][j] ��ʾ�� ��i�����룬��j�� �����ܵõ����������
//	//int n = pricesSize, m = pricesSize;  // n ��ʾ������m ��ʾ����
//	int n = pricesSize;  // n ��ʾ������m ��ʾ����
//	//int** dp = (int**)malloc(sizeof(int*) * n);  // ��̬���� n ��ָ��
//	int** dp = (int**)malloc(sizeof(int*) * (n + 1));  // ��̬���� n+1 ��ָ��
//	for (int i = 0; i < n + 1; i++) {
//		dp[i] = (int*)malloc(sizeof(int) * (n + 1));  // ��̬����ÿ�� n+1 �е�����
//	}
//
//	// ��ʼ�� dp ����
//	for (int i = 0; i < n + 1; i++) {
//		for (int j = 0; j < n + 1; j++) {
//			dp[i][j] = 0;
//		}
//	}
//	int res = 0;
//	// ʹ�� arr ������̬����Ķ�ά����
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			//dp[i][j] = i * m + j;  // ��ÿ��Ԫ�ظ�ֵ
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
//				//j >= 2 ʱ
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
//	// �ͷŶ�̬����������ڴ�
//	for (int i = 0; i < n; i++) {
//		free(dp[i]);
//	}
//	free(dp);
//
//	return res;
//}


////����һάdp
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
//	//dp[k]��ʾ��k��������õ��������
//	//min_v[k]��ʾ ǰk�� �е���Сֵ
//
//	int* dp = (int*)malloc((n + 1) * sizeof(int));//��̬����
//	int* min_v = (int*)malloc((n + 1) * sizeof(int));//��̬����
//	dp[0] = 0;
//	dp[1] = prices[1] - prices[0];//��2��������õ��������
//	min_v[0] = prices[0];
//	min_v[1] = fmin(prices[0], prices[1]); //ǰ������Сֵ
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
//	free(dp);//ʹ�����ͷ��ڴ�
//	dp = NULL;//�����������Ϊ�գ���ȥ����p���ڴ�ʱ�ͻ��γɷǷ�����!
//	return res;
//}

//�Ż�һά����dp,���ó������洢����
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
//	printf("sz ���鳤�� : %d\n", sz);
//	int res = maxProfit(arr, sz);
//	printf("res************: %d\n", res);
//
//	return 0;
//}