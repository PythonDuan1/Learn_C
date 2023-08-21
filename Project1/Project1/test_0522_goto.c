#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// goto语句
//int main()
//{
//	flag:
//		printf("hehe\n");
//		printf("heihei---\n");
//		goto flag;
//	return 0;
//}


// 一个关机程序
//int main()
//{
//	char input[10] = { 0 };
//	//system("shutdown -s -t 60");
//	printf("关机命令！");
//again:
//	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		//system("shutdown -a");
//		printf("取消关机了！！");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//goto语句只能在一个函数范围内跳转，不能跨函数
