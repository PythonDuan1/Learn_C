#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//函数的嵌套调用和链式访问

//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//}
//
////C语言函数不可以嵌套定义，但是函数可以嵌套调用!!
//int main()
//{
//	test2();
//
//	return 0;
//}


//函数的链式访问 : 把一个函数的返回值作为另外一个函数的参数

//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问
//	//printf("%d\n", strlen("abc"));
//
//	char arr1[20] = { 0 };
//	char arr2[] = "abcde";
//	strcpy(arr1, arr2);
//	printf("arr1: %s\n", arr1);
//	printf("arr1: %s\n", strcpy(arr1, arr2));
//
//	// printf函数的返回值是打印在屏幕上字符的个数
//	printf("%d", printf("%d", printf("%d", 43))); // 4321
//
//	return 0;
//}


//函数的声明和定义

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数声明一下 -- 告知
//	// 函数的定义在调用的后面，需要声明一下
//	//函数的声明一般出现在函数的使用之前。要满足先声明后使用
//	int Add(int, int);
//
//	int c = Add(a, b);
//	printf("c: %d\n", c);
//
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

#include "add.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c: %d\n", c);
//
//	return 0;
//}
