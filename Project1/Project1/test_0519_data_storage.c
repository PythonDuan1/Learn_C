#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// 数据的存储

//1.数据类型介绍
// 
//基本内置数据类型：
//char        //字符数据类型
//short       //短整型
//int         //整形
//long        //长整型
//long long   //更长的整形
//float       //单精度浮点数
//double      //双精度浮点数

//1.1类型基本归类
//整形：
//char
//unsigned char
//signed char
//short
//unsigned short[int]
//signed short[int]
//int
//unsigned int
//signed int
//long
//unsigned long[int]
//signed long[int]
// 
//浮点数：
//float
//double
// 
//构造类型：
//> 数组类型
//> 结构体类型 struct
//> 枚举类型 enum
//> 联合类型 union
// 
//指针类型：
//int* pi;
//char* pc;
//float* pf;
//void* pv;
// 
//空类型：
//void 表示空类型（无类型）
//通常应用于函数的返回类型、函数的参数、指针类型。

//大小端（Endianness）是计算机存储器中多字节数据的字节序排列方式的一种表示方法。
// 
//在小端字节序（Little Endian）中，低位字节（即数值中的最低有效字节）存放在内存的低地址处，
//而高位字节（即数值中的最高有效字节）存放在内存的高地址处。比如，数值 0x12345678 在小端字节序中被存储为 0x78 0x56 0x34 0x12。
// 
//在大端字节序（Big Endian）中，高位字节存放在内存的低地址处，低位字节存放在内存的高地址处。
//比如，数值 0x12345678 在大端字节序中被存储为 0x12 0x34 0x56 0x78。

//在字节中，最低位存储在字节的最右边，最高位存储在字节的最左边。
//int main()
//{
//	return 0;
//}

