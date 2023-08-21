#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// 计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("ret:%d ", ret);
//	return 0;
//}


//int count(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

// 计算 1!+2!+3!+.....+10!
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("i : %d\n", i);
//		int ret = count(i);
//		printf("ret : %d\n", ret);
//		sum += ret;
//	}
//	printf("sum:%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	// 法1：2层for循环
//	//for (n = 1; n <= 10; n++)
//	//{
//	//	ret = 1; // 计算n的阶乘之前，把ret初始化为1；
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret *= i;
//	//	}
//	//	sum += ret;
//	//}
//	//法2：1层for循环   3！= 3 * 2 * 1 = 3 * 2！ ,计算 1!+2!+3!+.....+10!
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("sum:%d", sum);
//	return 0;
//}

// 在一个有序数组中查找某个数字n的下标
// 二分查找，折半查找 -- 二分查找法，用于有序元素列表
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 7;
//	// 在 arr这个有序数组中查找k的下标
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，元素 %d 的下标为 %d \n", k, mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有找到元素下标！\n");
//	}
//
//	return 0;
//}

#include<Windows.h>
// 字符串依次有序变换
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	//char arr1[] = "welcome";
//	//char arr2[] = "#######";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);// 睡眠1s
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请你输入密码:>");
//		// password是数组，数组名本来就是地址，所以不用加取地址符号&
//		scanf("%s", password);
//		//if (password == "123456") // error,两个字符串比较，不能使用'=='，应该使用strcmp(),
//		// 因为'=='是在比较两个字符串首字符的地址，而不是比较内容
//		// strcmp()比较的是两个字符串对应位置上字符的ascii码值
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("恭喜你，登陆成功！！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入：\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("3次密码均错误，退出程序！\n");
//	}
//	return 0;
//}


//猜数字游戏：
//1.自动产生一个1-100的随机数
//2.猜数字：
//	a.猜对了，恭喜你，游戏结束
//	b.猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3.游戏可以一直玩好多轮，除非退出游戏
#include<stdlib.h>
#include<time.h>

void game()
{
	//1.生成随机数
	// rand函数返回一个0-32767之间的数字
	int ret = rand() % 100 + 1;// %100的余数是0-99，然后+1，范围就是1-100
	printf("ret: %d\n", ret);

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了!\n");
		}
		else if (guess > ret)
		{
			printf("猜大了！！\n");
		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
			break;
		}

	}
}


void menu()
{
	printf("************************\n");
	printf("********  1.play  ******\n");
	printf("********  0.exit  ******\n");
	printf("************************\n");
}


//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}