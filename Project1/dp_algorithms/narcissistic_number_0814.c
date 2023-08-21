#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include <stdio.h>
#include <math.h>


//水仙花数是指一个 n 位数（n >= 3），它的每个位上的数字的 n 次幂之和等于它本身。例如153是一个水仙花数，1^3 + 5^3 + 3^3 =153

int main() {
    int n = 3;  // 求 3 位水仙花数
    //pow() 函数用于计算一个数的幂
    int start = pow(10, n - 1);  // n 位数的最小值
    int end = pow(10, n) - 1;  // n 位数的最大值
    for (int i = start; i <= end; i++) {
        int sum = 0;
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}