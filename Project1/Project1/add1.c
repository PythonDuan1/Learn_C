#define _CRT_SECURE_NO_WARNINGS 1

//全局变量
//int g_val = 2023;
// static 修饰全局变量，使得这个全局变量只能在自己所在的源文件（.c）内部使用
//其他源文件不能使用
static int g_val = 2023;

//int Add(int x, int y)
//{
//	return x + y;
//}

// static修饰函数，使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用
// 本质上：static是将函数的外部链接属性变成了内部链接属性！（和static修饰全局变量一样！）
//static int Add(int x, int y)
//{
//	return x + y;
//}

