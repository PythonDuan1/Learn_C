#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//28. �ҳ��ַ����е�һ��ƥ������±�
//
//���������ַ��� haystack �� needle �������� haystack �ַ������ҳ� needle �ַ����ĵ�һ��ƥ������±꣨�±�� 0 ��ʼ����
// ��� needle ���� haystack ��һ���֣��򷵻� - 1 ��
//
//���룺haystack = "sadbutsad", needle = "sad"
//�����0
//���ͣ�"sad" ���±� 0 �� 6 ��ƥ�䡣
//��һ��ƥ������±��� 0 �����Է��� 0 ��
//
//���룺haystack = "leetcode", needle = "leeto"
//����� - 1
//���ͣ�"leeto" û���� "leetcode" �г��֣����Է��� - 1 ��
//
//��ʾ��
//1 <= haystack.length, needle.length <= 104
//haystack �� needle ����СдӢ���ַ����


//int strStr(char* haystack, char* needle) {
//	int len_h = strlen(haystack);
//	int len_n = strlen(needle);
//	printf("len_h: %d\n", len_h);
//	printf("len_n: %d\n", len_n);
//	int i = 0, j = 0, index = -1;
//	for (i = 0; i < len_h; i++)
//	{
//		if (haystack[i] == needle[0])
//		{
//			int count = 0;
//			for (j = i; j < i + len_n && j < len_h; j++)
//			{
//				if (haystack[j] == needle[j - i])
//				{
//					count++;
//				}
//			}
//			printf("count: %d\n", count);
//			if (count == len_n)
//			{
//				//index = j - len_n;
//				index = i;
//				break;
//			}
//		}
//	}
//	return index;
//}


//leetcode�� ���ؽⷨ
int strStr(char* haystack, char* needle)
{
	int len_h = strlen(haystack);
	int len_n = strlen(needle);
	for (int i = 0; i <= len_h - len_n; i++)
	{
		int ori = i, sub = 0;
		//while (ori < len_h && haystack[ori] == needle[sub])
		while (sub < len_n && haystack[ori] == needle[sub])
		{
			ori++;
			sub++;
		}
		if (sub == len_n)
		{
			return i;
		}
	}
	return -1;
}

//int main()
//{
//	//char haystack[] = "leetcode"; //�ַ������ַ������ʾ����
//	//char needle[] = "leeto";
//	char haystack[] = "sadbutsad"; //�ַ������ַ������ʾ����
//	//char haystack[] = "aaa"; //�ַ������ַ������ʾ����
//	char needle[] = "sad";
//	//char needle[] = "dbu";
//	//char needle[] = "aaaa";
//	printf("haystack strlen : %d\n", strlen(haystack));
//	printf("needle strlen : %d\n", strlen(needle));
//	int index = strStr(haystack, needle);
//	printf("index-------------: %d\n", index);
//
//	return 0;
//}




