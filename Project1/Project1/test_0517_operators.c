#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// 操作符
//int main()
//{
//	//2.算术操作符      +    -   *   /   %
//	//1. 除了 % 操作符之外，其他的几个操作符可以作用于整数和浮点数。
//	//2. 对于 / 操作符如果两个操作数都为整数，执行整数除法。而只要有浮点数执行的就是浮点数除法。
//	//3. % 操作符的两个操作数必须为整数。返回的是整除之后的余数。
//	printf("%d\n",10%3); //%d是用于打印有符号十进制整数类型int的格式化字符串
//	printf("%d\n",10/3);
//	//printf("%d\n",10/3.2);
//	//printf("单精度: %f\n",10/3.2);
//	//printf("%d\n",10.5/3.2);
//	//printf("双精度: %lf\n",10.5/3.2);
//
//	// %f是用于打印单精度浮点数类型float和双精度浮点数类型double的格式化字符串，而%lf则只用于打印双精度浮点数类型double。
//	double d = 3.1415926;
//	//printf("%lf\n", d); // 打印3.141593
//	//printf("%f\n", d);  // 打印3.141593
//	//float f = 3.14;
//	float f = 3.14f;
//	//printf("%f\n", (double)f); // 打印3.140000
//	//printf("%lf\n", (double)f); // 打印3.140000
//	//printf("%f\n", f); // 打印3.140000
//	//printf("%lf\n", f); // 打印3.140000
//
//	//3.移位操作符
//	//<< 左移操作符
//	//>> 右移操作符
//	//注：移位操作符的操作数只能是整数。
//	//int num = 10;
//	//printf("原num: %d\n", num);
//	//num << 1;
//	//printf("左移后未赋值的num: %d\n", num);
//	//num = num << 1;
//	//printf("左移后赋值了的num: %d\n", num);
//	//int right = 10;
//	//printf("原right: %d\n", right);
//	//right >> 1;
//	//printf("右移后未赋值的right: %d\n", right);
//	//right = right >> 1;
//	//printf("右移后赋值了的right: %d\n", right);
//
//	//4.位操作符
//	//& 按位与
//	//| 按位或
//	//^ 按位异或
//	//注：他们的操作数必须是整数。
//	//int num1 = 1;
//	//int num2 = 2;
//	//printf("按位与: %d\n", num1 & num2);
//	//printf("按位或: %d\n", num1 | num2);
//	//printf("按位异或: %d\n", num1 ^ num2);
//	//在C语言中，位操作符包括按位与(&)、按位或(| )、按位异或(^)、按位取反(~)等，它们用于对二进制数的每一位进行操作。
//	//按位与(&)操作符用于将两个数的二进制数的每一位进行与运算，即对应位上的数都为1时，结果为1，否则为0。
//	//按位或(| )操作符用于将两个数的二进制数的每一位进行或运算，即对应位上的数有一个为1时，结果为1，否则为0。
//	//按位异或(^)操作符用于将两个数的二进制数的每一位进行异或运算，即对应位上的数相同时，结果为0，不同时，结果为1。例如：
//	//int a = 0x3; // 二进制表示为0011
//	//int b = 0x5; // 二进制表示为0101
//	//int c = a ^ b; // 二进制表示为0110，即6
//	//printf("c: %d\n", c);
//	//按位取反(~)操作符用于将一个数的二进制数的每一位进行取反操作，即0变为1，1变为0。
//	
//	return 0;
//}

//面试题;
//不能创建临时变量（第三个变量），实现两个数的交换
//按位异或(^)操作符用于将两个数的二进制数的每一位进行异或运算，即对应位上的数相同时，结果为0，不同时，结果为1。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);  // a = 20 b = 10
//	return 0;
//}

//5.赋值运算符
//int main()
//{
//	int a = 10;
//	printf("原a: %d\n", a);
//	a = 500;
//	printf("重新赋值后 a: %d\n", a);
//	double weight = 100.268;
//	printf("原weight：%lf\n", weight);
//	weight = 894.56;
//	printf("weight重新赋值后：%lf\n", weight);
//	
//	int x = 10;
//	int y = 20;
//	int z = 50;
//	x = y = z + 1;
//	printf("x: %d\n", x);
//	printf("y: %d\n", y);
//	printf("z: %d\n", z);
//	y = z + 20;
//	x = y;
//	printf("\n");
//	printf("x: %d\n", x);
//	printf("y: %d\n", y);
//	printf("z: %d\n", z);
//	return 0;
//}


//复合运算符
// +=
// -=
// *=
// /=
// %=
// >>=
// <<=
// &=
// |=
// ^=
//int main()
//{
//	int num = 10;
//	num += 30; // num = mun + 30
//	printf("num: %d\n", num);
//	num %= 9;
//	printf("num %= : %d\n", num);
//	return 0;
//}

// 6.单目操作符
//!逻辑反操作
//- 负值
//+ 正值
//& 取地址
//sizeof    操作数的类型长度（以字节为单位） ,求变量（类型）所占空间的大小。
//~对一个数的二进制按位取反
//--          前置、后置--
//++前置、后置++
//* 间接访问操作符(解引用操作符)
//(类型)强制类型转换
//int main()
//{
//	int a = -10;
//	int* p = NULL;
//	printf("!2  %d\n", !2);
//	printf("!0  %d\n", !0);
//	a = -a;
//	printf("a: %d\n", a);
//	p = &a;
//	printf("p: %d\n", p);
//	printf("sizeof(a)  %d\n", sizeof(a));
//	printf("sizeof(int)  %d\n", sizeof(int));
//	printf("sizeof a  %d\n", sizeof a);//这样写行不行？
//
//	return 0;
//}

// sizeof 和 数组
//void test1(int arr[])
//{
//	// 指针类型不是int类型。指针类型是一种特殊的数据类型，用于存储内存地址
//	// int *p表示指向int类型的指针，char *p表示指向char类型的指针
//	// sizeof(arr)得到的结果是指针类型的大小
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	// sizeof(ch)得到的结果是指针类型的大小
//	printf("%d\n", sizeof(ch));//(4)
//}
//// 数组在作为函数参数传递时，会被转换成指向数组首元素的指针，
////因此在函数中使用sizeof运算符计算数组大小时，得到的结果是指针类型的大小，而不是数组类型的大小
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//++和--运算符
//int main()
//{
//	// 前置++和--
//	// 先+-，后赋值
//	//int a = 10;
//	//int x = ++a;
//	//printf("a : %d\n", a); //11
//	//printf("x: %d\n", x); //11
//	//int y = --a;
//	//printf("a : %d\n", a); //10
//	//printf("y: %d\n", y); //10
//	// 后置++和--
//	//先赋值，后+-
//	int a = 10;
//	int x = a++;
//	printf("a : %d\n", a); //11
//	printf("x: %d\n", x);  //10
//	int y = a--;
//	printf("a : %d\n", a); //10
//	printf("y: %d\n", y); //11
//	return 0;
//}

//7.关系操作符
//  >
//  >=
//  <
//	<=
//	!=   用于测试“不相等”
//	== 用于测试“相等

//8.逻辑操作符
//&& 逻辑与
//|| 逻辑或
//区分逻辑与和按位与
//区分逻辑或和按位或
//int main()
//{
//	printf("按位与：%d\n", 1 & 2); //按位与
//	printf("逻辑与：%d\n", 1 && 2); //逻辑与
//	printf("按位或：%d\n", 1 | 2); //按位或
//	printf("逻辑或：%d\n", 1 || 2); //逻辑或
//	return 0;
//}

//面试题
//int main()
//{
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	int i = 3, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n ,i = %d\n", a, b, c, d, i); 
//	//a = 1
//	//	b = 2
//	//	c = 3
//	//	d = 4
//	//	, i = 0
//	return 0;
//}


//9.条件操作符
//exp1 ? exp2 : exp3
//int main()
//{
//	int a = 0, b = 0;
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	b = (a > 5) ? 3 : -3;
//	//b = a > 5 ? 3 : -3;
//	printf("b: %d\n", b);
//	return 0;
//}


//10.逗号表达式
//exp1, exp2, exp3, …expN     --逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果。
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("c:%d\n", c); // 13
//	//int d = 10;
//	int d = -2;
//	if (a = b + 1, c = a / 2, d > 0)
//	{
//		printf("hahaha-----\n");
//	}
//	return 0;
//}

//11.3. 访问一个结构的成员 
//  . 结构体.成员名
//  ->结构体指针->成员名

struct Stu
{
	char name[10];
	int age;
	char sex[5];
	double score;
};

void set_age1(struct Stu stu)
{
	stu.age = 90;
	printf("haha------------1-------------- %d\n", stu.age);
}

//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;
//}

void set_age2(struct Stu* pStu, struct Stu stu)
{
	pStu->age = 18;
	printf("haha------------2-------------- %d\n", stu.age);
}

//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu; //结构成员访问
//	stu.age = 30;
//	printf("stu.age 20: %d\n", stu.age);
//	//在 C 语言中，函数参数传递是按值传递的，
//	//如果想要在函数内部修改变量的值，可以使用指针传递的方式来传递变量的地址，然后通过指针来修改变量的值
//	//如果想在函数内部修改结构体成员变量，必须传递结构体指针作为函数参数。
//	//如果只传递结构体名字，而不是结构体指针，那么函数内部无法通过结构体名字来访问和修改结构体成员变量，
//	//因为在函数内部，结构体名字只是一个局部变量，只有结构体指针才能指向结构体的地址，从而访问和修改结构体成员变量。
//	set_age1(stu);
//	printf("stu.age 18: %d\n", stu.age);
//	pStu->age = 20;
//	printf("pStu->age 20: %d\n", stu.age);
//	//set_age2(pStu);
//	set_age2(pStu, stu);
//	printf("pStu->age 18: %d\n", stu.age);
//	float f = 3.14;
//	int num = f;//隐式转换，会有精度丢失
//	printf("num: %d\n", num);
//	return 0;
//}
//stu.age 20: 30
//stu.age 18 : 30
//pStu->age 20 : 20
//pStu->age 18 : 18
