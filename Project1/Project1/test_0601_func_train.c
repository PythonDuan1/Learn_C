#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// P55函数递归习题

//数一下 1-100 的所有整数中出现多少个数字 9 
// 个位为9，十位为9
//int main()
//{
//
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			//个位为9
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			//十位为9
//			count++;
//		}
//	}
//
//	printf("count = %d\n", count);
//
//	return 0;
//}


//计算 1/1 - 1/2 + 1/3 - 1/4 + 1/5 ...... + 1/99 - 1/100 的值，并打印出结果
// 奇数正，偶数负
//int main()
//{
//	int i = 0;
//	double count = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			count = count - (1.0 / i);
//		}
//		else
//		{
//			count = count + (1.0 / i);
//		}
//	}
//
//	printf("count = %lf\n",count);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//
//	printf("sum = %lf\n", sum);
//
//	//两个整数相除的结果也是整数，如果要得到小数结果，可以将其中一个整数强制转换为浮点数
//	//int a = 10;
//	//int b = 3;
//	int a = 1;
//	int b = 2;
//	float c = (float)a / b;
//	printf("%f\n", c);   // 输出结果为3.333333
//
//	return 0;
//}

// 求10个整数中的最大值
//int main()
//{
//	//int arr[10] = { 1,4,6,8,24,67,876,13,56,0 };
//	int arr[10] = { -9,-10,-5,-3,-7,-2,-1,-8,-4, -89 };
//	//int arr[10] = { -9,-10,-5,-3,-7,-2,-1,-8 };
//	int i = 0;
//	//int max = 0;
//	int max = arr[0]; //max的初始值要从数组中随机选一个，不能直接赋为0
//	//for (i = 0; i < 10; i++)
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值: %d\n", max);
//
//	return 0;
//}

//输出9*9乘法口诀表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			if (j <= i)
//			{
//				printf("%d * %d = %d  ", j, i, i * j);
//				//printf("%d * %d = %d\t", j, i, i * j);
//			}
//		}
//		printf("\n");
//	}
//
//	printf("Name\tAge\tCity\n");
//	printf("John\t28\tNew York\n");
//	printf("Alice\t35\tLondon\n");
//
//	return 0;
//}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}

////递归方式实现打印一个整数的每一位
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//
//	return 0;
//}


//【题目名称】
//
//字符串逆序（递归实现）
//
//【题目内容】
//
//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba


//void reverse_string(char* string)
//{
//	while (*string != '\0')
//	{
//		printf("%c\n", *string);
//		string++;
//	}
//}

//int reverse_string(char* str)
//{	
//	printf("指针 str: %p\n", str);
//	printf("指针 str+1:  %p\n", str + 1);
//	printf("指针 str 指向的字符: %c\n", *str);
//	printf("指针 str+1 指向的字符: %c\n", *(str + 1));
//	//指针 str : 000000D269EFFC84
//	//指针 str + 1 : 000000D269EFFC85
//	//指针 str 指向的字符 : a
//	//指针 str + 1 指向的字符 : b
//	printf(" strlen(str): %d\n", strlen(str));
//	printf(" strlen(str + 1): %d\n", strlen(str + 1));
//	//strlen(str) : 6
//	//strlen(str + 1) : 5
//
//
//	//char* right = str + strlen(str) - 1;
//
//	return 0;
//}


///*
//思路：
//逆置字符串，循环的方式实现非常简单
//  1. 给两个指针，left放在字符串左侧，right放在最后一个有效字符位置
//  2. 交换两个指针位置上的字符
//  3. left指针往后走，right指针往前走，只要两个指针没有相遇，继续2，两个指针相遇后，逆置结束
//*/
//void reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//}


/*
递归方式：
对于字符串“abcdefg”，递归实现的大概原理：
  1. 交换a和g，
  2. 以递归的方式逆置源字符串的剩余部分，剩余部分可以看成一个有效的字符串，再以类似的方式逆置
*/
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}

//int main()
//{
//	char arr[] = "abcdef";
//	//char arr[] = { 'a','b','c','d','e','f','\0' };
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	//int mid = sz / 2;
//	//printf("arr: %s\n", arr);
//	//printf("sz: %d\n", sz);
//	reverse_string(arr);
//
//	printf("改变后 arr: %s\n", arr);
//
//	return 0;
//}


//【题目名称】
//
//计算一个数的每位之和（递归实现）
//
//【题目内容】
//
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19

//int DigitSum(int n)
//{
//	int num = 0;
//	if (n > 9)
//	{
//		num = DigitSum(n / 10);
//	}
//	return num + n % 10;
//}

/*
思路：
			n    n < 10
DigiSum(n) =
		   DibiSum(n/10)+n%10   // 前n-1位之和+第N位
*/

//int DigitSum(int n)//1729
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("ret: %d\n", ret);
//
//	return 0;
//}


//【题目名称】
//
//递归实现n的k次方
//
//【题目内容】
//
//编写一个函数实现n的k次方，使用递归实现。
//int my_exponent(int n, int k)
//{
//	if (k > 1)
//	{
//		return n * my_exponent(n, k - 1);
//	}
//	else if (k == 0)  //补充了k==0的情况
//	{
//		return 1;
//	}
//	else
//	{
//		return n;
//	}
//}
//
///*
//思路：
//		  1      K==0
//Pow(n,K) =
//		  Pow(n, K-1)*n
//
//*/
//int Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k >= 1)
//	{
//		return n * Pow(n, k - 1);
//	}
//}
//
//
//int main()
//{
//	int  n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = my_exponent(n, k);
//	printf("ret: %d\n", ret);
//
//	return 0;
//}


//【题目名称】
//
//计算斐波那契数
//
//【题目内容】
//
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1

//1 1 2 3 5 8 13 21 34 55 89 144
//F(0) = 1
//F(1) = 1
//F(n) = F(n - 1) + F(n - 2) (n >= 2)
//也就是说，斐波那契数列的第n项是前两项的和。例如，斐波那契数列的前10项分别是：
//1、1、2、3、5、8、13、21、34、55

//递归法 求第n个斐波那契数
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

//非递归  求第n个斐波那契数
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//
//	int i = 0;
//	int count = 0;
//	int a = 1, b = 1;
//	for (i = 0; i < n - 2; i++)
//	{
//		count = a + b;
//		a = b;
//		b = count;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("第%d个斐波那契数为: %d\n", n, ret);
//
//	return 0;
//}

