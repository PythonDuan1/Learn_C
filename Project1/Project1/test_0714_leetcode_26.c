#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//26. ɾ�����������е��ظ���
//����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�
// Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��Ȼ�󷵻� nums ��ΨһԪ�صĸ�����
//
//���� nums ��ΨһԪ�ص�����Ϊ k ������Ҫ����������ȷ����������Ա�ͨ����
//
//�������� nums ��ʹ nums ��ǰ k ��Ԫ�ذ���ΨһԪ�أ���������������� nums �г��ֵ�˳�����С�nums ������Ԫ���� nums �Ĵ�С����Ҫ��
//���� k ��
// 
//��ʾ��
//1 <= nums.length <= 3 * 104
//- 104 <= nums[i] <= 104
//nums �Ѱ� ���� ����


int removeDuplicates(int* nums, int numsSize) {
	int left = 0, right = 0;
	for (right = 0; right < numsSize; right++)
	{
		if (nums[left] != nums[right])
		{
			nums[left + 1] = nums[right];
			left++;
		}
	}
	return left + 1;
}


//int main()
//{
//	//int arr[] = { 0,0,1,1,1,2,2,3,3,4 };  //�����5, nums = [0,1,2,3,4]
//	//int arr[] = { 1,1,2 };  //�����2, nums = [1,2,_]
//	int arr[] = { 1 }; 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz: %d\n", sz);
//
//	int k = removeDuplicates(arr, sz);
//	printf("k: %d\n", k);
//
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//58. ���һ�����ʵĳ���
//����һ���ַ��� s�������ɵ�����ɣ�����ǰ����һЩ�ո��ַ������������ַ����� ���һ�� ���ʵĳ��ȡ�
//
//���� ��ָ������ĸ��ɡ��������κοո��ַ���������ַ�����
// 
//1 <= s.length <= 104
//s ����Ӣ����ĸ�Ϳո� ' ' ���
//s �����ٴ���һ������

int lengthOfLastWord(char* s) {
	//strlen() ��һ������ʱ�⺯������������ַ����е�ÿ���ַ���ֱ�������ַ��������� '\0' Ϊֹ��
	//Ȼ�󷵻��ַ����ĳ��ȡ��ں�����ʹ�� strlen() ����������ȷ�����ַ����ĳ��ȣ������������ͺͱ�������Ӱ�졣
	//printf("%d\n", strlen(s));

	//sizeof �����������������������͵ı������᷵������������ռ�õ��ֽ�����
	//��������ָ�����͵ı������᷵��ָ�뱾����ռ�õ��ֽ�����������ָ��ָ����ڴ�ռ�Ĵ�С��
	//printf("%d\n", sizeof(s) / sizeof(s[0]));// s���ַ�����ch��Ԫ�صĵ�ַ��ָ���������sizeof()������ָ����������ܷ���ָ��ָ������Ĵ�С

	//for (i = 0; i < strlen(s); i++)
	//{
	//	printf("%c\n", s[i]);
	//}

	int left = strlen(s) - 1;
	printf("left: %d\n", left);

	int end = 0, start = 0;
	int flag = 0; //�ж��Ƿ��ǵ�һ�������ո�
	// �Ӻ���ǰ����,Ȼ���ҵ����һ�����ʵ���ʼ�±�ͽ����±�
	while (left >= 0)
	{
		if (s[left] != ' ' && flag == 0)
		{
			end = left;
			flag++;
		}
		if (s[left] == ' ' && flag != 0)
		{
			start = left + 1;
			break;
		}
		left--;
	}
	printf("start: %d\n", start);
	printf("end: %d\n", end);

	return end - start + 1;
}

//int main()
//{
//	// �ַ������ַ������ʾ
//	// �� C �����У��ַ��������ַ��������ʽ�洢�ģ��ַ����Ľ�β��Ҫ���һ�������ַ� '\0'�����ַ�������ʾ�ַ����Ľ�����
//	//char ch[] = "   fly me   to   the moon  "; //�����4
//	//char ch[] = "moon  "; //�����4
//	char ch[] = "Hello World"; //�����5
//	printf("ch����: %d\n", strlen(ch));
//	int len = lengthOfLastWord(ch);
//	printf("len: %d\n", len);
//
//	return 0;
//}