#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include <stdbool.h>

//392. �ж�������
//�����ַ��� s �� t ���ж� s �Ƿ�Ϊ t �������С�
//
//�ַ�����һ����������ԭʼ�ַ���ɾ��һЩ��Ҳ���Բ�ɾ�����ַ������ı�ʣ���ַ����λ���γɵ����ַ�����
//�����磬"ace"��"abcde"��һ�������У���"aec"���ǣ���
//
//���ף�
//
//����д�������� S������ S1, S2, ..., Sk ���� k >= 10�ڣ�����Ҫ���μ�������Ƿ�Ϊ T �������С�����������£���������ı���룿
//
//���룺s = "abc", t = "ahbgdc"
//�����true
//
//���룺s = "axc", t = "ahbgdc"
//�����false
//
//0 <= s.length <= 100
//0 <= t.length <= 10 ^ 4
//�����ַ�����ֻ��Сд�ַ���ɡ�


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