#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// forѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//break��continue��forѭ����
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			printf("--------i is 5 ,break �˳�ѭ��----\n");
//			break;
//		}
//		printf("i is %d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			printf("--------i is 5 ,continue �˳�����ѭ��----\n");
//			continue;
//		}
//		printf("i is %d\n", i);
//	}
//	return 0;
//}

// forѭ��ǰ�պ�����
//int main()
//{
//	printf("this is ǰ�պ� -----\n");
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf("i is %d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	// ��ֵ�������=��������������==���ǲ�ͬ���������
//	// ��ʹ�� k = 0 �����ĸ�ֵ����ʱ���������ʽ��ֵ���Ǳ�����ֵ��
//	// ��ˣ�����������У�������ʽ��ֵ�� 0���� C �����У�0 ����Ϊ�Ǽ٣�false���ġ�
//	// �� k=0����ѭ������������Ϊ�٣�false������ô������ִ��ѭ���壻k=1ʱ��ѭ������Ϊtrue��ʼ�ճ�����������ѭ��ִ��ѭ�������
//	// ��Ҫ�ж� k �Ƿ���� 0��Ӧ��ʹ���������� ==�������Ǹ�ֵ����� =���� k==0 ��Ϊѭ������
//	//for (i = 0, k = 0; k = 0; i++, k++)
//	//for (i = 0, k = 0; k = 1; i++, k++)
//	for (i = 0, k = 0; k == 0; i++, k++)
//	{
//		printf("i : %d , k : %d", i, k);
//		k++;
//	}
//	return 0;
//}
