#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// if else 分支语句
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("b is 2 hahaha----\n");
//		}
//	}
//	else
//	{
//		if (b == 5)
//		{
//			printf("b is 5 lalalala-------\n");
//		}
//	}
//	return 0;
//}


// 在switch语句中，我们没办法直接实现分支，搭配break使用才能实现真正的分支。
// break语句 的实际效果是把语句列表划分为不同的分支部分
//switch (整型表达式)
//{
//	语句项；
//}

// 1. 输入1-5，输出的是“weekday”;
// 2. 输入6 - 7，输出“weekend”
//int main()
//{
//	int day = 6;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("this is weekday 工作日 呜呜呜呜呜呜呜\n");
//		break;
//	case 6:
//	case 7:
//		printf("this is weekend 休息日 啊哈哈哈哈\n");
//		break;
//	// 当 switch 表达式的值并不匹配所有 case 标签的值时，这个 default 子句后面的语句就会执行。
//	default:
//		printf("啥也不是---\n");
//		break;
//	}
//	return 0;
//}

// default语句练习
// 某个 case 后面没有跟 break 语句，则会继续执行下面的 case 语句
// 在使用 switch-case 语句时，我们需要特别注意每个 case 后面是否需要加上 break 语句，以免程序出现逻辑错误和不必要的运算。
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		printf("m++\n");
//		m++;
//		//break;
//	case 2:
//		printf("n++\n");
//		n++;
//		break;
//
//	default:
//		break;
//	}
//	printf("n = %d, m = %d\n", n, m);
//	return 0;
//}


// while 循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

// while 循环中的break 
// 实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。 while中的break是用于永久终止循环的
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i == 5)
//		{
//			printf("i = 5 ,break 退出循环了 ！");
//			break;
//		}
//		printf("i is %d\n", i);
//		i++;
//	}
//	return 0;
//}

// while  continue
//int main()
//{
//	int k = 0;
//	while (k <= 10)
//	{
//		k++;
//		if (k == 5)
//		{
//			printf("k == 5 ,continue 跳过本次循环！继续---");
//			continue;
//		}
//		printf("k is %d\n", k);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//continue在while循环中的作用就是：
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
//而是直接跳转到while语句的判断部分。进行下一次循环的入口判断

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//		{
//			printf("continue 跳过本轮循环!\n");
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}




