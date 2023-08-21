#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//break和continue在for循环中
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			printf("--------i is 5 ,break 退出循环----\n");
//			break;
//		}
//		printf("i is %d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			printf("--------i is 5 ,continue 退出本轮循环----\n");
//			continue;
//		}
//		printf("i is %d\n", i);
//	}
//	return 0;
//}

// for循环前闭后开区间
//int main()
//{
//	printf("this is 前闭后开 -----\n");
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf("i is %d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	// 赋值运算符（=）和相等运算符（==）是不同的运算符。
//	// 当使用 k = 0 这样的赋值操作时，整个表达式的值就是被赋的值。
//	// 因此，在条件语句中，这个表达式的值是 0。在 C 语言中，0 被认为是假（false）的。
//	// 即 k=0，则循环条件将被视为假（false），那么将不会执行循环体；k=1时，循环条件为true，始终成立，会无限循环执行循环体代码
//	// 想要判断 k 是否等于 0，应该使用相等运算符 ==，而不是赋值运算符 =，即 k==0 作为循环条件
//	//for (i = 0, k = 0; k = 0; i++, k++)
//	//for (i = 0, k = 0; k = 1; i++, k++)
//	for (i = 0, k = 0; k == 0; i++, k++)
//	{
//		printf("i : %d , k : %d", i, k);
//		k++;
//	}
//	return 0;
//}
