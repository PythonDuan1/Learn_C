#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//����
//int main()
//{
//	//�⺯��ѧϰ
//	//strcpy
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("arr1: %s\n", arr1); // %s��ӡarr1����ַ���
//	//memset   �ڴ�����
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5); //��arr�ַ�����ǰ5���ַ�����Ϊ'x'
//	printf("arr: %s\n", arr);
//
//	return 0;
//}

//�Զ��庯��

//�����Ķ���
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
//	return z; //����z�����ؽϴ�ֵ
//}
//
////�Ҹ��������������ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//	printf("max: %d\n", max);
//
//	return 0;
//}


////�����޷����� a��b ��ֵ����Ϊ a,b �� x,y ����ͬһ���ڴ��ַ�������ڲ����� x,y ����Ӱ�캯���� a,b ��ֵ
//swap�ڱ�����ʱ��ʵ�δ����βΣ���ʵ�β�ֻ��ʵ�ε�һ����ʱ������x,yֻ�ǿ�����a,b��ֵ�����������µ��ڴ�ռ䣩
//�ı��βΣ����ܸı�ʵ��!
//void swap(int x,int y)  
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
////дһ���������Խ����������α��������ݣ����÷���ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a = %d , b = %d\n", a, b);
//	swap(a, b); //��ֵ����
//	printf("������a = %d , b = %d\n", a, b);
//	return 0;
//}

//ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a; // pa��һ��ָ�����
//	*pa = 20; //ͨ�� ָ����� pa �޸� a ��ֵ , *pa ���� a��*pa �����ò�����
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

//дһ���������Խ����������α��������ݣ����÷���ֵ
// C���Ժ����� return ֻ�ܷ���һ��ֵ�����ܷ��ض��ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a = %d , b = %d\n", a, b);
//	swap(&a, &b); //����ͨ��ָ������޸�a,b��ֵ   //��ַ����,�����ڲ�����ֱ�Ӳ��������ⲿ�ı���
//	printf("������a = %d , b = %d\n", a, b);
//	return 0;
//}