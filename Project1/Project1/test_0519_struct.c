#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// 结构体

//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//结构体的成员可以是标量、数组、指针，甚至是其他结构体。
// 结构体变量的定义和初始化
struct Point
{
	int x;
	int y;
}p1;     //声明类型的同时定义变量p1

struct Point p2; //定义结构体变量p2

//初始化：定义变量的同时赋初值
struct Point p3 = { 3,4 };

//struct Stu    //类型声明
//{
//	char name[15];
//	int age;
//};
//struct Stu s = { "zhangsan",15 }; //初始化

struct Node
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10,{4,5},NULL };  //结构体嵌套初始化

struct Node n2 = { 20,{5,6},NULL }; //结构体嵌套初始化


//2.结构体成员的访问
//2.1结构体变量访问成员
//结构变量的成员是通过点操作符（.）访问的
//int main()
//{
//	printf("s.name: %s\n", s.name);
//	printf("s.age: %d\n", s.age);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void print(struct Stu* ps)
//{
//	printf("name = %s   age = %d\n",(*ps).name,(*ps).age);
//	//使用结构体指针访问指向对象的成员
//	printf("name = %s   age = %d\n",ps->name,ps->age);
//}
//
////2.2结构体指针访问指向变量的成员
//int main()
//{
//	struct Stu s = { "王哈哈",18 };
//	print(&s); //结构体地址传参
//
//	return 0;
//}

////3.结构体传参
//struct S
//{
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4}, 1000 };
//
////结构体传参
//void print1(struct S s)
//{
//	printf("print1 结构体s 地址--------: %p\n", &s);   //0000008833F5EDA0
//	printf("结构体传参: %d\n", s.num);
//}
//
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("print2 结构体s 地址----------: %p\n", ps);  //00007FF7DD74E040
//	printf("结构体地址传参: %d\n", ps->num);
//}
//
//int main()
//{
//	printf("结构体 s 的地址-------: %p\n",&s);   //00007FF7DD74E040
//	print1(s);  //传结构体   ,print1函数里面的形参s和main()中的实参s地址不同，形参s是实参s的副本
//	print2(&s); //传地址
//	//结论 : 结构体传参的时候，要传结构体的地址。
//	//原因：函数传参的时候，参数是需要压栈的。
//	//	    如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//	return 0;
//}
