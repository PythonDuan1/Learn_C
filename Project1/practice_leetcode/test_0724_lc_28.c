#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//28. 找出字符串中第一个匹配项的下标
//
//给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串的第一个匹配项的下标（下标从 0 开始）。
// 如果 needle 不是 haystack 的一部分，则返回 - 1 。
//
//输入：haystack = "sadbutsad", needle = "sad"
//输出：0
//解释："sad" 在下标 0 和 6 处匹配。
//第一个匹配项的下标是 0 ，所以返回 0 。
//
//输入：haystack = "leetcode", needle = "leeto"
//输出： - 1
//解释："leeto" 没有在 "leetcode" 中出现，所以返回 - 1 。
//
//提示：
//1 <= haystack.length, needle.length <= 104
//haystack 和 needle 仅由小写英文字符组成


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


//leetcode上 朴素解法
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
//	//char haystack[] = "leetcode"; //字符串用字符数组表示出来
//	//char needle[] = "leeto";
//	char haystack[] = "sadbutsad"; //字符串用字符数组表示出来
//	//char haystack[] = "aaa"; //字符串用字符数组表示出来
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




