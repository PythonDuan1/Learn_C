#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// switch 常用于多分支
// case 决定入口，break 决定出口,跳出当前所在的switch语句,switch语句可以嵌套使用
//int main()
//{
//	int day = 0;
//	//float day = 0;
//	scanf("%d", &day);
//	// switch 后面跟整型 ， case 后面跟整型常量表达式
//	switch (day)
//	{
//	case 1:
//		printf("周一\n");
//		break;
//	case 2:
//		printf("周二\n");
//		break;
//	case 3:
//		printf("周三\n");
//		break;
//	case 4:
//		printf("周四\n");
//		break;
//	case 5:
//		printf("周五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("周日\n");
//		break;
//	}
//	return 0;
//}


// 1-5 工作日,6-7 休息日
//int main()
//{
//	int day = 0;
//	//float day = 0;
//	scanf("%d", &day);
//	// switch 后面跟整型 ， case 后面跟整型常量表达式
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误！！\n");
//		break;
//	}
//	return 0;
//}
