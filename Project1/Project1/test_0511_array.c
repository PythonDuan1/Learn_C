#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// 数组是一组相同类型元素的集合。
//int main()
//{
//	//数组创建
//	//代码1
//	//int arr1[10];
//	//代码2
//	//数组创建，在C99标准之前， [] 中要给一个常量才可以，不能使用变量。在C99标准支持了变长数组的概念。
//	//int count = 10;
//	//int arr2[count];  count是变量，这样创建数组会报错
//
//	//代码3
//	//char arr3[10];
//	//float arr4[1];
//	//double arr5[20];
//
//	//数组的初始化是指，在创建数组的同时给数组的内容一些合理初始值（初始化）。
//	//数组在创建的时候如果想不指定数组的确定的大小就得初始化。数组的元素个数根据初始化的内容来确定。
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	printf("arr3 数组的长度为 %d \n", sizeof(arr3) / sizeof(arr3[0]));
//	char arr4[3] = { 'a',98, 'c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//
//	return 0;
//}


// [] ，下标引用操作符。它其实就数组访问的操作符。
// 1. 数组是使用下标来访问的，下标是从0开始。
// 2. 数组的大小可以通过计算得到。
//int main()
//{
//	int arr[10] = { 0 };
//	//数组元素的个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("arr 数组的元素个数为 %d\n", sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 15;
//	}
//	//输出数组元素内容
//	for (i = 0; i < 10; i++)
//	{
//		printf("第 %d 个arr元素：%d\n", i, arr[i]);
//	}
//	return 0;
//}

// 数组在内存中是连续存放的。

//二维数组的创建
// 在同一个作用域内定义了两个同名变量，就会导致编译错误
//int main()
//{
//	//数组创建
//	//int arr1[3][4];
//	//char arr2[3][5];
//	//double arr3[2][4];
//	//数组初始化
//	int arr1[3][4] = { 1,2,3,4 };
//	int arr2[3][4] = { {1,2},{4,5} }; // 2维数组第1行为1，2；第2行为4，5
//	int arr3[][4] = { {2,3},{4,5} };//二维数组如果有初始化，行可以省略，列不能省略
//	//二维数组的使用也是通过下标的方式。
//	int i = 0;
//	int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("arr2数组第 %d 行，%d 列 的元素为 %d\n", i, j, arr2[i][j]);
//	//	}
//	//}
//	//printf("arr2 元素个数为 %d\n", sizeof(arr2) / sizeof(arr2[0][0]));
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr1数组的第%d行第%d列: %d\n", i, j, arr1[i][j]);
//		}
//	}
//	printf("arr1数组的长度：%d\n", sizeof(arr1) / sizeof(arr1[0][0]));
//	return 0;
//}