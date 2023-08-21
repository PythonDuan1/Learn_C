#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//函数
//int main()
//{
//	//库函数学习
//	//strcpy
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("arr1: %s\n", arr1); // %s打印arr1这个字符串
//	//memset   内存设置
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5); //把arr字符串的前5个字符设置为'x'
//	printf("arr: %s\n", arr);
//
//	return 0;
//}

//自定义函数

//函数的定义
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z; //返回z，返回较大值
//}
//
////找个两个整数的最大值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//	printf("max: %d\n", max);
//
//	return 0;
//}


////这样无法交换 a和b 的值，因为 a,b 和 x,y 不是同一个内存地址，函数内部交换 x,y 不能影响函数外 a,b 的值
//swap在被调用时，实参传给形参，其实形参只是实参的一份临时拷贝（x,y只是拷贝了a,b的值，并创建了新的内存空间）
//改变形参，不能改变实参!
//void swap(int x,int y)  
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
////写一个函数可以交换两个整形变量的内容，不用返回值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d , b = %d\n", a, b);
//	swap(a, b); //传值调用
//	printf("交换后：a = %d , b = %d\n", a, b);
//	return 0;
//}

//指针
//int main()
//{
//	int a = 10;
//	int* pa = &a; // pa是一个指针变量
//	*pa = 20; //通过 指针变量 pa 修改 a 的值 , *pa 就是 a（*pa 解引用操作）
//	printf("a: %d\n", a);
//
//	return 0;
//}


//void swap(int* pa, int* pb) 
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}

//写一个函数可以交换两个整形变量的内容，不用返回值
// C语言函数中 return 只能返回一个值，不能返回多个值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d , b = %d\n", a, b);
//	swap(&a, &b); //可以通过指针变量修改a,b的值   //传址调用,函数内部可以直接操作函数外部的变量
//	printf("交换后：a = %d , b = %d\n", a, b);
//	return 0;
//}