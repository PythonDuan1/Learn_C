#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//35. 搜索插入位置
// 
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//请必须使用时间复杂度为 O(log n) 的算法。
// 
//例1：
//输入 : nums = [1, 3, 5, 6], target = 5
//输出 : 2
//例2：
//输入 : nums = [1, 3, 5, 6], target = 2
//输出 : 1
//例3：
//输入 : nums = [1, 3, 5, 6], target = 7
//输出 : 4
// 
//提示 :
//	1 <= nums.length <= 104
//	- 104 <= nums[i] <= 104
//	nums 为 无重复元素 的 升序 排列数组
//	- 104 <= target <= 104


//int searchInsert(int* nums, int numsSize, int target) {
//	int mid = 0;
//	int left = 0, right = numsSize - 1;
//	int index = 0;
//	while (left <= right)
//	{
//		mid = (right - left) / 2 + left;
//		printf("mid: %d\n", mid);
//		if (target < nums[mid])
//		{
//			if (right - left == 1 || right == left)
//			{
//				index = left;
//				break;
//			}
//			right = mid - 1;
//		}
//		else if (target > nums[mid])
//		{
//			if (right - left == 1 || right == left)
//			{
//				if (target < nums[right])
//				{
//					index = mid + 1;
//				}
//				else if (target > nums[right])
//				{
//					index = right + 1;
//				}
//				else
//				{
//					index = right;
//				}
//				break;
//			}
//			left = mid + 1;
//		}
//		else
//		{
//			index = mid;
//			break;
//		}
//	}
//
//	return index;
//}


//官方题解的二分查找法
// 情况1：不存在数组中的时候需要返回按顺序插入的位置
//考虑这个插入的位置 pos，它成立的条件为：
//  nums[pos−1] < target ≤ nums[pos]
// 情况2：如果存在这个目标值，我们返回的索引也是 pos
//综上所述：在一个有序数组中找第一个大于等于 target 的下标
//ans 初值设置为数组长度可以省略边界条件的判断，因为存在一种情况是 target 大于数组中的所有数，此时需要插入到数组长度的位置。
int searchInsert(int* nums, int numsSize, int target) {
	int left = 0, right = numsSize - 1, ans = numsSize;
	while (left <= right) {
		//((right - left) >> 1) + left 等价于 left + (right - left) / 2 ，也等价于 (right + left) / 2 
		//但是(right + left) / 2 容易造成整型溢出
		int mid = ((right - left) >> 1) + left;
		if (target <= nums[mid]) {
			ans = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return ans;
}


//int main()
//{
//	//int arr[] = { 1,3,5,6 };
//	int arr[] = { 1,3,5,6,8 };
//	//int arr[] = { 1,3 };
//	//int target = 5;
//	int target = 0;
//	//int target = 2;
//	//int target = 7;
//	//int target = 3;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz: %d\n", sz);
//	int index = searchInsert(arr, sz, target);
//	printf("index-----: %d\n", index);
//	//printf("%d\n", 3 / 2);
//	printf("%d\n", 1 / 2);
//	//printf("%d\n", 5 / 2);
//
//	return 0;
//}