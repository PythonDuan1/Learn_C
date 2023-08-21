#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//int main() {
//    int N = 3, M = 4;
//
//    // 分配指针数组内存
//    int** dp = (int**)malloc(sizeof(int*) * (N + 1));
//
//    // 分配二维数组内存
//    for (int i = 0; i < N + 1; i++) {
//        dp[i] = (int*)malloc(sizeof(int) * (M + 1));
//    }
//
//    // 初始化二维数组
//    for (int i = 0; i < N + 1; i++) {
//        for (int j = 0; j < M + 1; j++) {
//            dp[i][j] = i * (M + 1) + j;
//        }
//    }
//
//    // 输出二维数组
//    for (int i = 0; i < N + 1; i++) {
//        for (int j = 0; j < M + 1; j++) {
//            printf("%d ", dp[i][j]);
//        }
//        printf("\n");
//    }
//
//    // 释放内存
//    for (int i = 0; i < N + 1; i++) {
//        free(dp[i]);
//    }
//    free(dp);
//
//    return 0;
//}