#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

// 指针 +- 整数
//int main()
//{
//	int n = 10;
//	int* pi = &n;
//	char* pc = (char*)&n;
//	printf("&n: %p\n", &n);
//	printf("&n+1: %p\n", &n + 1);
//	printf("**************************\n");
//	printf("int 指针 pi: %p\n", pi);
//	printf("int 指针 pi+1: %p\n", pi + 1);
//	printf("**************************\n");
//	printf("char 指针 pc: %p\n", pc);
//	printf("char 指针 pc+1: %p\n", pc + 1);
//
//	return 0;
//}


//27.移除元素
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素
//说明:
//
//为什么返回数值是整数，但输出的答案是数组呢 ?
//
//请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。
//
//你可以想象内部操作如下 :
	// nums 是以“引用”方式传递的。也就是说，不对实参作任何拷贝
	//int len = removeElement(nums, val);

	// 在函数里修改输入数组对于调用者是可见的。
	// 根据你的函数返回的长度, 它会打印出数组中 该长度范围内 的所有元素。
	//for (int i = 0; i < len; i++) {
	//	print(nums[i]);
	//}
	// 
//示例1.
//输入：nums = [3, 2, 2, 3], val = 3
//输出：2, nums = [2, 2]
//解释：函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。你不需要考虑数组中超出新长度后面的元素。
//例如，函数返回的新长度为 2 ，而 nums = [2, 2, 3, 3] 或 nums = [2, 2, 0, 0]，也会被视作正确答案。

//示例2.
//输入：nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2
//输出：5, nums = [0, 1, 4, 0, 3]
//解释：函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。注意这五个元素可为任意顺序。你不需要考虑数组中超出新长度后面的元素。

//交换元素
void swap_ele(int arr[], int i, int j)
{
	int tem = arr[i];
	arr[i] = arr[j];
	arr[j] = tem;
}


//int removeElement(int* nums, int numsSize, int val)
//{
//	int left = 0, right = numsSize - 1;
//	int length = 0;
//	if (numsSize == 1)
//	{
//		if (nums[0] == val)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	while (left <= right)
//	{
//		while (nums[left] != val && left < right)
//		{
//			left++;
//		}
//
//		while (nums[right] == val && left < right)
//		{
//			right--;
//			length++;
//		}
//		if (nums[left] == val || nums[right] == val)
//		{
//			swap_ele(nums, left, right);
//			length++;
//		}
//		left++;
//		right--;
//	}
//	return numsSize - length;
//}


//方法一：双指针
//思路及算法
//由于题目要求删除数组中等于 val 的元素，因此输出数组的长度一定小于等于输入数组的长度，我们可以把输出的数组直接写在输入数组上。
// 可以使用双指针：右指针 right 指向当前将要处理的元素，左指针 left 指向下一个将要赋值的位置。
//
//如果右指针指向的元素不等于 val，它一定是输出数组的一个元素，我们就将右指针指向的元素复制到左指针位置，然后将左右指针同时右移；
//
//如果右指针指向的元素等于 val，它不能在输出数组里，此时左指针不动，右指针右移一位。
//
//整个过程保持不变的性质是：区间[0, left) 中的元素都不等于val。当左右指针遍历完输入数组以后，left 的值就是输出数组的长度。
//
//这样的算法在最坏情况下（输入数组中没有元素等于 val)，左右指针各遍历了数组一次。
//int removeElement(int* nums, int numsSize, int val) {
//	int left = 0;
//	for (int right = 0; right < numsSize; right++) {
//		if (nums[right] != val) {
//			nums[left] = nums[right];
//			left++;
//		}
//	}
//	return left;
//}


//方法二：双指针优化
//思路：
//实现方面，我们依然使用双指针，两个指针初始时分别位于数组的首尾，向中间移动遍历该序列。
//算法:
//如果左指针 left 指向的元素等于 val，此时将右指针 right 指向的元素复制到左指针 left 的位置，然后右指针 right 左移一位。
// 如果赋值过来的元素恰好也等于 val，可以继续把右指针 right 指向的元素的值赋值过来（左指针 left 指向的等于 val 的元素的位置继续被覆盖），
// 直到左指针指向的元素的值不等于 val 为止。
//
//当左指针 left 和右指针 right 重合的时候，左右指针遍历完数组中所有的元素。
//
//这样的方法两个指针在最坏的情况下合起来只遍历了数组一次。与方法一不同的是，方法二避免了需要保留的元素的重复赋值操作。
int removeElement(int* nums, int numsSize, int val) {
	int left = 0, right = numsSize;
	while (left < right) {
		if (nums[left] == val) {
			nums[left] = nums[right - 1];
			right--;
		}
		else {
			left++;
		}
	}
	return left;
}


//int main()
//{
//	//int arr[5] = { 5,2,3,2,4 };
//	int arr[] = { 5,2,3,2,4,2 };
//	//int arr[] = { 5,2,2,2,4,2 };
//	//int arr[] = { 1 };
//	//int arr[] = { 2,2 };
//	//int arr[] = { 1,1,2 };
//	//int arr[] = { 1,2,1 };
//	//int arr[] = { 2,1,2 };
//	//int arr[] = { 3,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz: %d\n", sz);
//	//int val = 1;
//	int val = 2;
//	//int val = 5;
//	int len = removeElement(arr, sz, val);
//	printf("len: %d\n", len);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	//for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

