#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include <stdbool.h>

//392. 判断子序列
//给定字符串 s 和 t ，判断 s 是否为 t 的子序列。
//
//字符串的一个子序列是原始字符串删除一些（也可以不删除）字符而不改变剩余字符相对位置形成的新字符串。
//（例如，"ace"是"abcde"的一个子序列，而"aec"不是）。
//
//进阶：
//
//如果有大量输入的 S，称作 S1, S2, ..., Sk 其中 k >= 10亿，你需要依次检查它们是否为 T 的子序列。在这种情况下，你会怎样改变代码？
//
//输入：s = "abc", t = "ahbgdc"
//输出：true
//
//输入：s = "axc", t = "ahbgdc"
//输出：false
//
//0 <= s.length <= 100
//0 <= t.length <= 10 ^ 4
//两个字符串都只由小写字符组成。


bool isSubsequence(char* s, char* t) {
	int j = 0, count = 0, s_len = strlen(s), t_len = strlen(t);
	for (int i = 0; i < s_len; i++)
	{
		while (j < t_len)
		{
			if (s[i] == t[j])
			{
				count++;
				j++;
				break;
			}
			j++;
		}
	}
	if (count == s_len)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	//char s[] = "abc";
	//char s[] = "";
	char s[] = "df";
	//char s[] = "aac";
	char t[] = "ahbgdc";
	bool res = isSubsequence(s, t);
	printf("res: %d\n", res);

	return 0;
}