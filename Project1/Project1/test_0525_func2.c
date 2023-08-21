#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>


int is_prime(int n)
{
	// 2 -> n-1 之间的数字
	int j = 0;
	//for (j = 2; j < n; j++)
	for (j = 2; j <= sqrt(n); j++)  //不用算到n-1，只需算到 n的开平方根 就可以，再往后算因数就重复了
	{
		if (n % j == 0)
		{
			return 0;
		}
	}

	return 1;
}

//素数一般指质数。质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数
// 打印100-200之前的素数
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
//	// 返回1是闰年，返回0不是闰年
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//另一种更简洁写法
int is_leap_year(int n)
{
	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
	//return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}

//写一个函数判断一年是不是闰年
// 以下2种方法满足一种即为闰年
//能被400整除。或者能被4整除但不能被100整除
//int main()
//{
//	//打印1000-2000年之间的闰年
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
//	//二分查找
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


////写一个函数，实现一个整形有序数组的二分查找
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int goal = 3;
//	int index = binary_search(arr, sz, goal);
//	printf("%d 在数组中的下标为 %d\n", goal, index);
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
	return -1;//找不到了
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 23;
//	//找到了返回元素下标，找不到返回-1
//	//数组arr传参，实际传递的不是数组的本身，而是仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}

//写一个函数，每调用一次这个函数，就会将 num 的值增加1。
//int main()
//{
//	int num = 0;
//	//函数内部会改变num的值
//	Add(&num); //传址调用
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

