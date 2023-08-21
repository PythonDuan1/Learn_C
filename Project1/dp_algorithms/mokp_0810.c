#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int seekMax(int N, int M, int V[], int W[])
{
    //1、创建dp数组
    //int dp[N + 1][M + 1]; //c99之前不能创建动态数组
    //dp数组的含义，dp[i][j] ：代表的是前 i 个物品加入容量为 j 的背包里面价值总和的最大值
    int** dp = (int**)malloc(sizeof(int*) * (N + 1));  // 动态分配 n+1 行指针
	for (int i = 0; i < N + 1; i++) {
		dp[i] = (int*)malloc(sizeof(int) * (M + 1));  // 动态分配每行 m+1 列的数组
	}
    //memset() 函数用于将一段内存空间设置为指定的值，不是给数组赋值
    //memset(dp, 0, sizeof(dp[0][0]) * (N + 1) * (M + 1)); //先全部置为0。这段会影响后面数组赋值操作，注释掉

    //2、初始化dp数组,为数组赋值
    
	for (int i = 0; i < N + 1; i++)
	{
		dp[i][0] = 0;  //背包容量为0，你拿不拿物品价值最大都为0
	}
	
	for (int j = 0; j < M + 1; j++)
	{
		dp[0][j] = 0;  //你不拿物品价值最大都为0
	}
    //3、开始根据状态转移方程递推填满dp数组
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (j < W[i]) {
                dp[i][j] = dp[i - 1][j];  //装不下第i件物品，只能不要咯
            }
            else {
                dp[i][j] = fmax(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]); //可以装下，可以选择 拿或者不拿
            }
        }
    }

    //return dp[N][M];
    int res = dp[N][M];

    printf("输出二维数组------------------\n");
    // 输出二维数组
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < M + 1; j++) {
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }

    //释放内存
    for (int i = 0; i < N + 1; i++)
    {
        free(dp[i]);
    }
    free(dp);

    return res;
}


//0 - 1背包问题
//这里你有N件物品和一个容量为M的背包，这N件物品的第 i 件物品的 价值是V[i] ，重量是W[i].
//问题是拿取这N件物品的哪几件时，使得背包可以装下（意思就是物品的重量总和小于或等于M）且价值最大。

//int main() {
//    int N = 4; //物品的数量
//    int M = 10; //背包的容量
//    int V[] = { 0,2,4,3,7 }; //物品的价值 前面的0就是占位的，方便遍历
//    int W[] = { 0,2,3,5,5 }; //物品的重量
//    int re = seekMax(N, M, V, W);
//    printf("res: %d\n", re); //13
//}
