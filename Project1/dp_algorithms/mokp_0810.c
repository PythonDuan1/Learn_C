#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int seekMax(int N, int M, int V[], int W[])
{
    //1������dp����
    //int dp[N + 1][M + 1]; //c99֮ǰ���ܴ�����̬����
    //dp����ĺ��壬dp[i][j] ���������ǰ i ����Ʒ��������Ϊ j �ı��������ֵ�ܺ͵����ֵ
    int** dp = (int**)malloc(sizeof(int*) * (N + 1));  // ��̬���� n+1 ��ָ��
	for (int i = 0; i < N + 1; i++) {
		dp[i] = (int*)malloc(sizeof(int) * (M + 1));  // ��̬����ÿ�� m+1 �е�����
	}
    //memset() �������ڽ�һ���ڴ�ռ�����Ϊָ����ֵ�����Ǹ����鸳ֵ
    //memset(dp, 0, sizeof(dp[0][0]) * (N + 1) * (M + 1)); //��ȫ����Ϊ0����λ�Ӱ��������鸳ֵ������ע�͵�

    //2����ʼ��dp����,Ϊ���鸳ֵ
    
	for (int i = 0; i < N + 1; i++)
	{
		dp[i][0] = 0;  //��������Ϊ0�����ò�����Ʒ��ֵ���Ϊ0
	}
	
	for (int j = 0; j < M + 1; j++)
	{
		dp[0][j] = 0;  //�㲻����Ʒ��ֵ���Ϊ0
	}
    //3����ʼ����״̬ת�Ʒ��̵�������dp����
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (j < W[i]) {
                dp[i][j] = dp[i - 1][j];  //װ���µ�i����Ʒ��ֻ�ܲ�Ҫ��
            }
            else {
                dp[i][j] = fmax(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]); //����װ�£�����ѡ�� �û��߲���
            }
        }
    }

    //return dp[N][M];
    int res = dp[N][M];

    printf("�����ά����------------------\n");
    // �����ά����
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < M + 1; j++) {
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }

    //�ͷ��ڴ�
    for (int i = 0; i < N + 1; i++)
    {
        free(dp[i]);
    }
    free(dp);

    return res;
}


//0 - 1��������
//��������N����Ʒ��һ������ΪM�ı�������N����Ʒ�ĵ� i ����Ʒ�� ��ֵ��V[i] ��������W[i].
//��������ȡ��N����Ʒ���ļ���ʱ��ʹ�ñ�������װ�£���˼������Ʒ�������ܺ�С�ڻ����M���Ҽ�ֵ���

//int main() {
//    int N = 4; //��Ʒ������
//    int M = 10; //����������
//    int V[] = { 0,2,4,3,7 }; //��Ʒ�ļ�ֵ ǰ���0����ռλ�ģ��������
//    int W[] = { 0,2,3,5,5 }; //��Ʒ������
//    int re = seekMax(N, M, V, W);
//    printf("res: %d\n", re); //13
//}
