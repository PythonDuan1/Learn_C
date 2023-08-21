#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include <stdlib.h>

//509. 쳲�������
//쳲������� ��ͨ���� F(n) ��ʾ���γɵ����г�Ϊ 쳲��������� ���������� 0 �� 1 ��ʼ�������ÿһ�����ֶ���ǰ���������ֵĺ͡�Ҳ���ǣ�
//F(0) = 0��F(1) = 1
//F(n) = F(n - 1) + F(n - 2)������ n > 1
//���� n ������� F(n) ��
//
//���룺n = 2
//�����1
//���ͣ�F(2) = F(1) + F(0) = 1 + 0 = 1
//
//���룺n = 3
//�����2
//���ͣ�F(3) = F(2) + F(1) = 1 + 1 = 2


//��̬�滮�ⷨ
//int fib(int n) {
//	//int* dp = (int*)malloc((n + 1) * sizeof(int));//��̬����
//	int* dp = (int*)malloc((n + 2) * sizeof(int));//��̬����
//	dp[0] = 0;
//	dp[1] = 1;
//	for (int i = 2; i < n + 1; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	int res = dp[n];
//	//�ڷ��غ������֮ǰ,���ͷŶ�̬������ڴ�ռ䣬�����ڴ�й©���⡣
//	free(dp); // �ͷ��ڴ�ռ�
//
//	return res;
//}

// ���� ��̬�滮�ⷨ
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