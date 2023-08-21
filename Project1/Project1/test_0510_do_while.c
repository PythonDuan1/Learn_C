#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//  do...while()循环   循环至少执行一次，使用的场景有限，所以不是经常使用。
//do
//循环语句;
//while (表达式);

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("i is %d\n", i);
//		i++;
//	} while (i < 10);
//
//	return 0;
//}

// do while循环中的break和continue
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//		{
//			printf("5 == i, i is %d    beak!---\n",i);
//			break;
//		}
//		printf("i is %d\n", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (5 == i)
//		{
//			printf("---5 == i, i is %d    continue 退出本轮循环!---\n", i);
//			continue;
//		}
//		printf("i is %d\n", i);
//		//i++;
//		
//	} while (i < 10);
//	return 0;
//}