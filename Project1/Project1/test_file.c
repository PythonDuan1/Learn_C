#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

// fgetc和fputc 按字符读取和写入

//int main()
//{
//	FILE* pf = fopen("test1.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen error ");
//		return 1;
//	}
//
//	//写文件
//	fputc('b',pf);
//	fputc('i',pf);
//	fputc('t',pf);
//
//	//输出到屏幕
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//
//}



//int main()
//{
//	FILE* pf = fopen("test1.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen error ");
//		return 1;
//	}
//
//	//读文件
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//从标准输入流读取
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//	return 0;
//}


// 按行写入  字符串
//int main()
//{
//	FILE* fp = fopen("test1.dat", "w");
//	if (fp == NULL)
//	{
//		perror("fopen error");
//		return 1;
//	}
//	// \n换行
//	fputs("dhakfb\n", fp);
//	fputs("hahaha\n", fp);
//
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}

// 按行读取
//int main()
//{
//	char arr[10] = { 0 };
//	FILE* fp = fopen("test1.dat", "r");
//	if (fp == NULL)
//	{
//		perror("fopen error");
//		return 1;
//	}
//	// 一次最多读取4个字符，其实只读取3个，最后一个是\0
//	fgets(arr,4,fp);
//	printf("%s\n", arr);
//	fgets(arr, 4, fp);
//	printf("%s\n", arr);
//
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}

