#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

// fgetc��fputc ���ַ���ȡ��д��

//int main()
//{
//	FILE* pf = fopen("test1.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen error ");
//		return 1;
//	}
//
//	//д�ļ�
//	fputc('b',pf);
//	fputc('i',pf);
//	fputc('t',pf);
//
//	//�������Ļ
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//
//	//�ر��ļ�
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
//	//���ļ�
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//�ӱ�׼��������ȡ
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//	return 0;
//}


// ����д��  �ַ���
//int main()
//{
//	FILE* fp = fopen("test1.dat", "w");
//	if (fp == NULL)
//	{
//		perror("fopen error");
//		return 1;
//	}
//	// \n����
//	fputs("dhakfb\n", fp);
//	fputs("hahaha\n", fp);
//
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}

// ���ж�ȡ
//int main()
//{
//	char arr[10] = { 0 };
//	FILE* fp = fopen("test1.dat", "r");
//	if (fp == NULL)
//	{
//		perror("fopen error");
//		return 1;
//	}
//	// һ������ȡ4���ַ�����ʵֻ��ȡ3�������һ����\0
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

