#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// if else ��֧���
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("b is 2 hahaha----\n");
//		}
//	}
//	else
//	{
//		if (b == 5)
//		{
//			printf("b is 5 lalalala-------\n");
//		}
//	}
//	return 0;
//}


// ��switch����У�����û�취ֱ��ʵ�ַ�֧������breakʹ�ò���ʵ�������ķ�֧��
// break��� ��ʵ��Ч���ǰ�����б���Ϊ��ͬ�ķ�֧����
//switch (���ͱ��ʽ)
//{
//	����
//}

// 1. ����1-5��������ǡ�weekday��;
// 2. ����6 - 7�������weekend��
//int main()
//{
//	int day = 6;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("this is weekday ������ ��������������\n");
//		break;
//	case 6:
//	case 7:
//		printf("this is weekend ��Ϣ�� ����������\n");
//		break;
//	// �� switch ���ʽ��ֵ����ƥ������ case ��ǩ��ֵʱ����� default �Ӿ��������ͻ�ִ�С�
//	default:
//		printf("ɶҲ����---\n");
//		break;
//	}
//	return 0;
//}

// default�����ϰ
// ĳ�� case ����û�и� break ��䣬������ִ������� case ���
// ��ʹ�� switch-case ���ʱ��������Ҫ�ر�ע��ÿ�� case �����Ƿ���Ҫ���� break ��䣬�����������߼�����Ͳ���Ҫ�����㡣
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		printf("m++\n");
//		m++;
//		//break;
//	case 2:
//		printf("n++\n");
//		n++;
//		break;
//
//	default:
//		break;
//	}
//	printf("n = %d, m = %d\n", n, m);
//	return 0;
//}


// while ѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

// while ѭ���е�break 
// ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ���� while�е�break������������ֹѭ����
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i == 5)
//		{
//			printf("i = 5 ,break �˳�ѭ���� ��");
//			break;
//		}
//		printf("i is %d\n", i);
//		i++;
//	}
//	return 0;
//}

// while  continue
//int main()
//{
//	int k = 0;
//	while (k <= 10)
//	{
//		k++;
//		if (k == 5)
//		{
//			printf("k == 5 ,continue ��������ѭ��������---");
//			continue;
//		}
//		printf("k is %d\n", k);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//continue��whileѭ���е����þ��ǣ�
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
//����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������ж�

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//		{
//			printf("continue ��������ѭ��!\n");
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}




