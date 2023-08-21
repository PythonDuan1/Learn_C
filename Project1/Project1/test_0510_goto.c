#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// goto语句
//最常见的用法就是终止程序在某些深度嵌套的结构的处理过程。
//例如：一次跳出两层或多层循环。
//多层循环这种情况使用break是达不到目的的。它只能从最内层循环退出到上一层的循环

//goto语言真正适合的场景如下：
//for (...)
//    for (...)
//    {
//        for (...)
//        {
//            if (disaster)
//                goto error;
//        }
//    }
//…
//error :
	//if (disaster)
	//	处理错误情况

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