#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//int main()
//{
//	/*if (1)
//	{
//		printf("呵呵！\n");
//	}*/
//	//while (1)
//	//{
//	//	printf("呵呵！\n");
//	//}
//	int i = 1;
//	//while循环中,break用于永久终止循环
//	// 
//	//while循环中,continue的作用是跳过本次循环continue后边的代码，
//	//直接去判断部分，看是否进行下一次循环
//
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		break;
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	// getchar() 从键盘上读取字符, putchar() 输出读取的字符到屏幕上
//	// EOF 是文件结束标志
//	// ctrl+z  getchar 就读取结束了
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	// %c格式占位符对应的是单个字符，而%s格式占位符对应的是字符串
//	printf("%c\n", ch);
//	putchar(ch); //输出一个字符
//	return 0;
//}


//int main()
//{
//	// 输入回车，也就是输入了'\n'，输入'\n'会触发scanf输入函数去读取
//	// scanf() 和 getchar() 等输入函数不是直接从键盘上读取字符，而是从缓冲区里读取字符；
//	// 输入密码password,在输入'\n'回车后，触发scanf()读取password，缓冲区中还有'\n'，直接被getchar()读取了
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password); //123456
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区，
//	//getchar(); //把'\n'读取出来,针对只有一个'\n'时
//	//
//	// 清理缓冲区中的多个字符
//	// 针对除了'\n',还有空格的情况
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}