#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

//int main()
//{
//	int input = 0;
//	printf("要好好生活嘛？<1/0>\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好！\n");
//	}
//	else
//	{
//		printf("不好---\n");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	int num = 30;
//	while (line < num)
//	{
//		printf("write code:%d....\n", line);
//		line++;
//	}
//	if (line == num)
//	{
//		printf("good offer!!\n");
//	}
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//
//	int sum = Add(num1, num2);
//	printf("sum:%d", sum);
//
//	return 0;
//}


//int main()
//{
//	//数组 -- 1组相同类型的元素的集合
//	// 10个整型 1-10 存起来
//	// 数组的创建和初始化,数组用下标来访问
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("i:%d\n", arr[i]);
//		i++;
//	}
//	//字符数组
//	// 不完全初始化，剩余的默认为0
//	char ch[5] = { 'a','b','c' };
//
//	return 0;
//}


//int main()
//{
//	//sizeof 是一个操作符，不是函数
//	//用来计算类型或者变量的大小
//	int arr[10] = { 0 };
//	//计算数组总大小，单位是字节
//	printf("arr大小:%d\n", sizeof(arr));
//	printf("arr[0]大小:%d\n", sizeof(arr[0]));
//	printf("arr[1]的值:%d\n", arr[1]);
//	printf("int大小:%d\n", sizeof(int));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("数组长度:%d\n", sz);
//
//	//按位取反(二进制取反)
//	int a = 0;
//	printf("a按位取反：%d\n", ~a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = ++a;  //前置++ ,表示先++,后使用
//
//	//printf("b:%d\n", b); // 11
//	//printf("a:%d\n", a); // 11
//
//	int b = a++;  //后置++ ,表示先使用(b=a),后++ (a++)
//
//	printf("b:%d\n", b); // 10
//	printf("a:%d\n", a); // 11
//
//
//	return 0;
//}


//强制类型转换
//int main()
//{
//	//int a = 3.14;
//	int a = (int)3.14;  // double类型强制转换为int
//
//	printf("a:%d\n", a);
//
//	return 0;
//}

//// 逻辑操作符  &&且  ||或
//int main()
//{
//	int a = 0;
//	int b = 6;
//
//	int c = a && b;
//	int d = a || b;
//
//	printf("且--- c:%d\n", c);
//	printf("或--- d:%d\n", d);
//
//	return 0;
//}



//条件操作符（三目操作符）
// exp1 ? exp2 : exp3
// exp1 如果成立， exp2计算，整个表达式结果是：exp2的结果
// exp1 如果不成立， exp3计算，整个表达式结果是：exp3的结果
//int main()
//{
//	int a = 12;
//	int b = 9;
//	int max = 0;
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//
//	max = a > b ? a : b;
//
//	printf("max:%d\n", max);
//
//	return 0;
//}


// 逗号表达式
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	// 逗号表达式，是从左向右依次计算的
//	// 整个表达式的结果是最后一个表达式的结果(即 b = c + 2 的结果)
//	printf("d:%d\n", d);
//
//	return 0;
//}


//int main()
//{
//	// 大量频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100; //建议num的值存放在寄存器中
//	return 0;
//}


// typedef 类型重定义，类型重命名
typedef unsigned int u_int;

//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 50;
//
//	return 0;
//}

//static --静态的
// 1.static修饰局部变量
// 2.static修饰全局变量
// 3.static修饰函数

//void test()
//{
//	//int a = 1; //局部变量，函数调用结束就销毁  结果是 a:2 a:2 a:2 a:2 a:2 a:2 a:2 a:2 a:2 a:2
//	static int a = 1; //静态变量,static修饰局部变量，改变了局部变量的生命周期，程序结束静态变量才会销毁（本质上改变了变量的存储类型）,结果 a:2 a:3 a:4 a:5 a:6 a:7 a:8 a:9 a:10 a:11
//	a++;
//	printf("a:%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}


//声明变量  extern声明外部符号
extern int g_val;
//int g_val;

//int main()
//{
//	printf("g_val:%d\n",g_val);
//	return 0;
//}

// 声明函数
//extern int Add(int x, int y);
//int main()
//{
//	int a = 25;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum= %d\n", sum);
//
//	return 0;
//}


//define 是一个预处理指令,	定义常量和宏
// 
// 1.define 定义符号
//#define MAX 1000
//int main()
//{
//	printf("max=%d\n", MAX);
//	return 0;
//}

//2.define定义宏
#define ADD(x,y) x+y                 //4*2+3=11
//#define ADD(x,y) ((x)+(y))             //4*(2+3)=20
//int main()
//{
//	printf("宏:%d\n", 4 * ADD(2, 3));
//	return 0;
//}


//指针 就是地址   &取地址操作符
//int main()
//{
//	int a = 30;  // int 类型在内存中分配空间 - 4个字节
//	printf("a的地址:%p\n", &a); //  %p 专门用来打印地址的
//	int* pa = &a; //pa用来存放地址的，在c语言中pa叫指针变量
//	// * 说明pa是指针变量
//	// int 说明pa指向的对象是int类型（pa指向的a是int类型）
//	printf("a的地址:%p\n", pa);
//
//	char ch = "w";
//	char* pc = &ch;
//	printf("ch的地址:%p\n", pc);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 45; // *解引用操作符，*pa就是通过pa里面的地址，找到a
//	printf("a变为:%d\n", a);
//
//	return 0;
//}


//指针变量的大小
//int main()
//{
//	printf("指针变量大小:%d\n",sizeof(char*));
//	printf("指针变量大小:%d\n",sizeof(short*));
//	printf("指针变量大小:%d\n",sizeof(int*));
//	printf("指针变量大小:%d\n",sizeof(long*));
//	printf("指针变量大小:%d\n",sizeof(long long*));
//	printf("指针变量大小:%d\n",sizeof(float*));
//	printf("指针变量大小:%d\n",sizeof(double*));
//
//	return 0;
//}



//结构体
//结构体可以让c语言创建新的类型

//创建学生类型
struct Stu
{
	char name[20];
	int age;
	double score;
};

//创建书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};


//int main()
//{
//	struct Stu s = { "张三", 18, 85.6 };//结构体的创建和初始化
//	printf("1: 名字:%s,年龄:%d,分数:%lf\n", s.name, s.age, s.score); //结构体的元素访问: 结构体变量.成员变量
//	//结构体指针
//	struct Stu* ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);  // 结构体指针->成员变量名
//
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age >= 18)
//	{
//		printf("成年了！\n");
//	}
//	else
//	{
//		printf("你没有成年！\n");
//		printf("不能谈恋爱！\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age >= 18)
//		printf("成年了！\n");
//	else
//		// if else 语句后面如果不带{}，那么默认只能控制一条语句；
//		printf("你没有成年！\n");
//		printf("不能谈恋爱！\n");
//	return 0;
//}

