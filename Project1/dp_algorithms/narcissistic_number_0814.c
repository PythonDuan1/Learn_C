#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include <stdio.h>
#include <math.h>


//ˮ�ɻ�����ָһ�� n λ����n >= 3��������ÿ��λ�ϵ����ֵ� n ����֮�͵�������������153��һ��ˮ�ɻ�����1^3 + 5^3 + 3^3 =153

int main() {
    int n = 3;  // �� 3 λˮ�ɻ���
    //pow() �������ڼ���һ��������
    int start = pow(10, n - 1);  // n λ������Сֵ
    int end = pow(10, n) - 1;  // n λ�������ֵ
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