#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//������Ƕ�׵��ú���ʽ����

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
////C���Ժ���������Ƕ�׶��壬���Ǻ�������Ƕ�׵���!!
//int main()
//{
//	test2();
//
//	return 0;
//}


//��������ʽ���� : ��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���

//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////��ʽ����
//	//printf("%d\n", strlen("abc"));
//
//	char arr1[20] = { 0 };
//	char arr2[] = "abcde";
//	strcpy(arr1, arr2);
//	printf("arr1: %s\n", arr1);
//	printf("arr1: %s\n", strcpy(arr1, arr2));
//
//	// printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43))); // 4321
//
//	return 0;
//}


//�����������Ͷ���

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//��������һ�� -- ��֪
//	// �����Ķ����ڵ��õĺ��棬��Ҫ����һ��
//	//����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
//	int Add(int, int);
//
//	int c = Add(a, b);
//	printf("c: %d\n", c);
//
//	return 0;
//}
//
////�����Ķ���
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
