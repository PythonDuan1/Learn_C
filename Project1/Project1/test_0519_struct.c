#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// �ṹ��

//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����
//�ṹ��ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ�塣
// �ṹ������Ķ���ͳ�ʼ��
struct Point
{
	int x;
	int y;
}p1;     //�������͵�ͬʱ�������p1

struct Point p2; //����ṹ�����p2

//��ʼ�������������ͬʱ����ֵ
struct Point p3 = { 3,4 };

//struct Stu    //��������
//{
//	char name[15];
//	int age;
//};
//struct Stu s = { "zhangsan",15 }; //��ʼ��

struct Node
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10,{4,5},NULL };  //�ṹ��Ƕ�׳�ʼ��

struct Node n2 = { 20,{5,6},NULL }; //�ṹ��Ƕ�׳�ʼ��


//2.�ṹ���Ա�ķ���
//2.1�ṹ��������ʳ�Ա
//�ṹ�����ĳ�Ա��ͨ�����������.�����ʵ�
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
//	//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
//	printf("name = %s   age = %d\n",ps->name,ps->age);
//}
//
////2.2�ṹ��ָ�����ָ������ĳ�Ա
//int main()
//{
//	struct Stu s = { "������",18 };
//	print(&s); //�ṹ���ַ����
//
//	return 0;
//}

////3.�ṹ�崫��
//struct S
//{
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4}, 1000 };
//
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("print1 �ṹ��s ��ַ--------: %p\n", &s);   //0000008833F5EDA0
//	printf("�ṹ�崫��: %d\n", s.num);
//}
//
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("print2 �ṹ��s ��ַ----------: %p\n", ps);  //00007FF7DD74E040
//	printf("�ṹ���ַ����: %d\n", ps->num);
//}
//
//int main()
//{
//	printf("�ṹ�� s �ĵ�ַ-------: %p\n",&s);   //00007FF7DD74E040
//	print1(s);  //���ṹ��   ,print1����������β�s��main()�е�ʵ��s��ַ��ͬ���β�s��ʵ��s�ĸ���
//	print2(&s); //����ַ
//	//���� : �ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��
//	//ԭ�򣺺������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//	//	    �������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//	return 0;
//}
