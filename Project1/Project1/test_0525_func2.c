#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>


int is_prime(int n)
{
	// 2 -> n-1 ֮�������
	int j = 0;
	//for (j = 2; j < n; j++)
	for (j = 2; j <= sqrt(n); j++)  //�����㵽n-1��ֻ���㵽 n�Ŀ�ƽ���� �Ϳ��ԣ����������������ظ���
	{
		if (n % j == 0)
		{
			return 0;
		}
	}

	return 1;
}

//����һ��ָ������������ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ��
// ��ӡ100-200֮ǰ������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount= %d\n", count);
//
//	return 0;
//}

//int is_leap_year(int year)
//{
//	// ����1�����꣬����0��������
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//��һ�ָ����д��
int is_leap_year(int n)
{
	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
	//return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}

//дһ�������ж�һ���ǲ�������
// ����2�ַ�������һ�ּ�Ϊ����
//�ܱ�400�����������ܱ�4���������ܱ�100����
//int main()
//{
//	//��ӡ1000-2000��֮�������
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int binary_search(int arr[], int len, int goal)
//{
//	printf("len: %d\n", len);
//	//���ֲ���
//	//for (int i = 0; i < len; i++) {
//	//	printf("%d ", arr[i]);
//	//}
//	int left = 0;
//	int right = len - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > goal)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < goal)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//			
//		}
//	}
//	return mid;	
//}


////дһ��������ʵ��һ��������������Ķ��ֲ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int goal = 3;
//	int index = binary_search(arr, sz, goal);
//	printf("%d �������е��±�Ϊ %d\n", goal, index);
//
//	return 0;
//}


int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//�Ҳ�����
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 23;
//	//�ҵ��˷���Ԫ���±꣬�Ҳ�������-1
//	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı������ǽ�������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}

//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
//int main()
//{
//	int num = 0;
//	//�����ڲ���ı�num��ֵ
//	Add(&num); //��ַ����
//	printf("num: %d\n", num);
//
//	Add(&num);
//	printf("num: %d\n", num);
//
//	Add(&num);
//	printf("num: %d\n", num);
//
//	return 0;
//}

