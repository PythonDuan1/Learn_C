#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

// ָ�� +- ����
//int main()
//{
//	int n = 10;
//	int* pi = &n;
//	char* pc = (char*)&n;
//	printf("&n: %p\n", &n);
//	printf("&n+1: %p\n", &n + 1);
//	printf("**************************\n");
//	printf("int ָ�� pi: %p\n", pi);
//	printf("int ָ�� pi+1: %p\n", pi + 1);
//	printf("**************************\n");
//	printf("char ָ�� pc: %p\n", pc);
//	printf("char ָ�� pc+1: %p\n", pc + 1);
//
//	return 0;
//}


//27.�Ƴ�Ԫ��
//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
//
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ��
//˵��:
//
//Ϊʲô������ֵ��������������Ĵ��������� ?
//
//��ע�⣬�����������ԡ����á���ʽ���ݵģ�����ζ���ں������޸�����������ڵ������ǿɼ��ġ�
//
//����������ڲ��������� :
	// nums ���ԡ����á���ʽ���ݵġ�Ҳ����˵������ʵ�����κο���
	//int len = removeElement(nums, val);

	// �ں������޸�����������ڵ������ǿɼ��ġ�
	// ������ĺ������صĳ���, �����ӡ�������� �ó��ȷ�Χ�� ������Ԫ�ء�
	//for (int i = 0; i < len; i++) {
	//	print(nums[i]);
	//}
	// 
//ʾ��1.
//���룺nums = [3, 2, 2, 3], val = 3
//�����2, nums = [2, 2]
//���ͣ�����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2���㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//���磬�������ص��³���Ϊ 2 ���� nums = [2, 2, 3, 3] �� nums = [2, 2, 0, 0]��Ҳ�ᱻ������ȷ�𰸡�

//ʾ��2.
//���룺nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2
//�����5, nums = [0, 1, 4, 0, 3]
//���ͣ�����Ӧ�÷����µĳ��� 5, ���� nums �е�ǰ���Ԫ��Ϊ 0, 1, 3, 0, 4��ע�������Ԫ�ؿ�Ϊ����˳���㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

//����Ԫ��
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


//����һ��˫ָ��
//˼·���㷨
//������ĿҪ��ɾ�������е��� val ��Ԫ�أ�����������ĳ���һ��С�ڵ�����������ĳ��ȣ����ǿ��԰����������ֱ��д�����������ϡ�
// ����ʹ��˫ָ�룺��ָ�� right ָ��ǰ��Ҫ�����Ԫ�أ���ָ�� left ָ����һ����Ҫ��ֵ��λ�á�
//
//�����ָ��ָ���Ԫ�ز����� val����һ������������һ��Ԫ�أ����Ǿͽ���ָ��ָ���Ԫ�ظ��Ƶ���ָ��λ�ã�Ȼ������ָ��ͬʱ���ƣ�
//
//�����ָ��ָ���Ԫ�ص��� val��������������������ʱ��ָ�벻������ָ������һλ��
//
//�������̱��ֲ���������ǣ�����[0, left) �е�Ԫ�ض�������val��������ָ����������������Ժ�left ��ֵ�����������ĳ��ȡ�
//
//�������㷨�������£�����������û��Ԫ�ص��� val)������ָ�������������һ�Ρ�
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


//��������˫ָ���Ż�
//˼·��
//ʵ�ַ��棬������Ȼʹ��˫ָ�룬����ָ���ʼʱ�ֱ�λ���������β�����м��ƶ����������С�
//�㷨:
//�����ָ�� left ָ���Ԫ�ص��� val����ʱ����ָ�� right ָ���Ԫ�ظ��Ƶ���ָ�� left ��λ�ã�Ȼ����ָ�� right ����һλ��
// �����ֵ������Ԫ��ǡ��Ҳ���� val�����Լ�������ָ�� right ָ���Ԫ�ص�ֵ��ֵ��������ָ�� left ָ��ĵ��� val ��Ԫ�ص�λ�ü��������ǣ���
// ֱ����ָ��ָ���Ԫ�ص�ֵ������ val Ϊֹ��
//
//����ָ�� left ����ָ�� right �غϵ�ʱ������ָ����������������е�Ԫ�ء�
//
//�����ķ�������ָ�����������º�����ֻ����������һ�Ρ��뷽��һ��ͬ���ǣ���������������Ҫ������Ԫ�ص��ظ���ֵ������
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

