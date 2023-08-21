#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//26. 删除有序数组中的重复项
//给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
// 元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。
//
//考虑 nums 的唯一元素的数量为 k ，你需要做以下事情确保你的题解可以被通过：
//
//更改数组 nums ，使 nums 的前 k 个元素包含唯一元素，并按照它们最初在 nums 中出现的顺序排列。nums 的其余元素与 nums 的大小不重要。
//返回 k 。
// 
//提示：
//1 <= nums.length <= 3 * 104
//- 104 <= nums[i] <= 104
//nums 已按 升序 排列


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
//	//int arr[] = { 0,0,1,1,1,2,2,3,3,4 };  //输出：5, nums = [0,1,2,3,4]
//	//int arr[] = { 1,1,2 };  //输出：2, nums = [1,2,_]
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



//58. 最后一个单词的长度
//给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。
//
//单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。
// 
//1 <= s.length <= 104
//s 仅有英文字母和空格 ' ' 组成
//s 中至少存在一个单词

int lengthOfLastWord(char* s) {
	//strlen() 是一个运行时库函数，它会遍历字符串中的每个字符，直到遇到字符串结束符 '\0' 为止，
	//然后返回字符串的长度。在函数中使用 strlen() 函数可以正确计算字符串的长度，不受数据类型和编译器的影响。
	//printf("%d\n", strlen(s));

	//sizeof 运算符，如果作用于数组类型的变量，会返回整个数组所占用的字节数，
	//而作用于指针类型的变量，会返回指针本身所占用的字节数，而不是指针指向的内存空间的大小。
	//printf("%d\n", sizeof(s) / sizeof(s[0]));// s是字符数组ch首元素的地址（指针变量），sizeof()作用域指针变量，不能返回指针指向数组的大小

	//for (i = 0; i < strlen(s); i++)
	//{
	//	printf("%c\n", s[i]);
	//}

	int left = strlen(s) - 1;
	printf("left: %d\n", left);

	int end = 0, start = 0;
	int flag = 0; //判断是否是第一次遇到空格
	// 从后往前遍历,然后找到最后一个单词的起始下标和结束下标
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
//	// 字符串用字符数组表示
//	// 在 C 语言中，字符串是以字符数组的形式存储的，字符串的结尾需要添加一个特殊字符 '\0'（空字符）来表示字符串的结束。
//	//char ch[] = "   fly me   to   the moon  "; //输出：4
//	//char ch[] = "moon  "; //输出：4
//	char ch[] = "Hello World"; //输出：5
//	printf("ch长度: %d\n", strlen(ch));
//	int len = lengthOfLastWord(ch);
//	printf("len: %d\n", len);
//
//	return 0;
//}