#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//函数递归

//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}


//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}


// 接受一个整型值（无符号），按照顺序打印它的每一位。
// 输入：1234，输出 1 2 3 4.
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);  // %u是无符号整型
//	// 递归 --函数自己调用自己
//	print(num); // print函数可以打印参数部分数字的每一位
//
//	return 0;
//}

//写递归代码时:
//1.不能死递归，得有跳出条件，每次递归都要逼近跳出条件；
//2.递归层次不能太深，否则还是会栈溢出！
