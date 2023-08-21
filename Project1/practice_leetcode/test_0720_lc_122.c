#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

//122. ������Ʊ�����ʱ�� II
//����һ���������� prices ������ prices[i] ��ʾĳ֧��Ʊ�� i ��ļ۸�
//
//��ÿһ�죬����Ծ����Ƿ���� / ����۹�Ʊ�������κ�ʱ�� ��� ֻ�ܳ��� һ�� ��Ʊ����Ҳ�����ȹ���Ȼ���� ͬһ�� ���ۡ�
//
//���� ���ܻ�õ� ��� ���� ��

//��1��
//���룺prices = [7, 1, 5, 3, 6, 4]
//�����7
//���ͣ��ڵ� 2 �죨��Ʊ�۸� = 1����ʱ�����룬�ڵ� 3 �죨��Ʊ�۸� = 5����ʱ������, ��ʽ������ܻ������ = 5 - 1 = 4 ��
//����ڵ� 4 �죨��Ʊ�۸� = 3����ʱ�����룬�ڵ� 5 �죨��Ʊ�۸� = 6����ʱ������, ��ʽ������ܻ������ = 6 - 3 = 3 ��
//������Ϊ 4 + 3 = 7 ��
// 
//��2��
//���룺prices = [1, 2, 3, 4, 5]
//�����4
//���ͣ��ڵ� 1 �죨��Ʊ�۸� = 1����ʱ�����룬�ڵ� 5 �� ����Ʊ�۸� = 5����ʱ������, ��ʽ������ܻ������ = 5 - 1 = 4 ��
//������Ϊ 4 ��
// 
//��3��
//���룺prices = [7, 6, 4, 3, 1]
//�����0
//���ͣ������������, �����޷�������������Բ����뽻�׿��Ի����������������Ϊ 0 ��


//�����ⷨ:
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
//	int buy_i = 0, sell_i = 0, k = 0; //Ѱ����Ҫ������������±�
//	for (k = 1; k < pricesSize - 1; k++)
//	{
//		//�ȿ����Ƿ���Ҫ����
//		if (prices[k] <= prices[k - 1])
//		{
//			//��Ҫ����
//			buy_i = k;
//		}
//		if (prices[k] >= prices[k + 1] && prices[k] > prices[buy_i] && prices[k] > prices[k - 1])
//		{
//			//���Ӧ������׬����
//			sell_i = k;
//			total_p = total_p + (prices[sell_i] - prices[buy_i]);
//		}
//		if (k + 1 == pricesSize - 1 && prices[k + 1] > prices[k] && prices[k + 1] > prices[buy_i])
//		{
//			sell_i = k + 1;
//			// k+1�����һ��Ԫ�� ��ֻ�����Ƿ���
//			total_p = total_p + (prices[sell_i] - prices[buy_i]);
//		}
//	}
//	return total_p;
//}


//��̬�滮dp[][]
//���ǵ�������ͬʱ�����ʽ��ס������ÿ�콻�׽�����ֻ���ܴ���������һ֧��Ʊ����û�й�Ʊ��״̬��

//����״̬ dp[i][0] ��ʾ�� i �콻���������û�й�Ʊ���������dp[i][1] ��ʾ�� i �콻������������һ֧��Ʊ���������i �� 0 ��ʼ����

//int maxProfit(int* prices, int pricesSize)
//{
//	int n = pricesSize;
//	int** dp = (int**)malloc(sizeof(int*) * (n + 1));  // ��̬���� n+1 ��ָ��
//	for (int i = 0; i < n + 1; i++) {
//		dp[i] = (int*)malloc(sizeof(int) * (2));  // ��̬����ÿ�� 2 �е�����
//	}
//		
//	int res = 0;
//	dp[0][0] = 0, dp[0][1] = -prices[0];//��һ�콻������һ֧��Ʊ��ζ�������ˣ����� -prices[0]
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		dp[i][0] = fmax(dp[i - 1][0], dp[i - 1][1] + prices[i]);
//		dp[i][1] = fmax(dp[i - 1][1], dp[i - 1][0] - prices[i]);
//	}
//	res = dp[n - 1][0];
//
//	// �ͷŶ�̬����������ڴ�
//	for (int i = 0; i < n + 1; i++) {
//		free(dp[i]);
//	}
//	free(dp);
//
//	return res;
//}

int maxProfit(int* prices, int pricesSize)
{
	int profit = 0;//��ʼ������
	int i = 0;
	for (i = 1; i < pricesSize; i++)
	{
		//��ǰ�۸����ǰһ��ʱ�����۲��������
		if (prices[i] - prices[i - 1] > 0)
		{
			//profit = profit + (prices[i] - prices[i - 1]);
			profit += (prices[i] - prices[i - 1]); // ʹ�� += ������򻯼������
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
//	printf("sz ���鳤�� : %d\n", sz);
//	int res = maxProfit(arr, sz);
//	printf("res************: %d\n", res);
//
//	return 0;
//}
