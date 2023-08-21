#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//int main()
//{
//	//char str[] = "hello bit";
//	//printf("%d %d\n", sizeof(str), strlen(str)); // 10 9 
//
//	//char acX[] = "abcdefg";
//	//char acY[] = { 'a','b','c','d','e','f','g' };
//	//char acZ[] = { 'a','b','c','d','e','f','g','\0' };
//	////strlen函数用于计算字符串的长度，而不是数组的长度。strlen函数计算的是字符串中有效字符的个数，不包括字符串末尾的null字符('\0')
//	//printf("acX: %d\n", strlen(acX)); // 7   
//	//printf("acY: %d\n", strlen(acY)); // 43
//	//printf("acZ: %d\n", strlen(acZ)); // 7
//
//	////sizeof和strlen的主要区别在于：
//	////1.sizeof计算的是数组占用的总字节数，包含'\0'，可以用于计算数组的长度，
//	//// 而strlen计算的是字符串中有效字符的个数，不包括字符串末尾的null字符('\0')，不能用于计算数组的长度。
//	////2.sizeof计算的是数组中每个元素占用的字节数，而strlen只适用于字符串类型，无法用于其他类型的数组。
//
//	//printf("sizeof---- acX: %d\n", sizeof(acX)); //8
//	//printf("sizeof---- acY: %d\n", sizeof(acY)); //7
//	//printf("sizeof(acX) / sizeof(acX[0])----: %d\n", sizeof(acX) / sizeof(acX[0]));  //8
//
//	//printf("sizeof(char): %d\n", sizeof(char)); //1
//	//printf("sizeof(int): %d\n", sizeof(int)); //4
//
//	//int arr[] = { 1,2,(3,4),5 };  //对于arr数组，里面有4个元素，(3,4)为逗号表达式，取后者，因此数组中元素分别为：1,2,4,5
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//4
//	//printf("sz: %d\n", sz);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("arr数组每个元素: %d\n", arr[i]);
//	//}
//
//	//char ch1[5] = { 'a','b','c' }; //a b c \0 \0
//	//char ch2[] = { '1','2','3' }; //1 2 3
//	//char ch3[5] = "tuo"; //t u o \0 \0
//	//char ch4[] = "789";  //7 8 9 \0
//	//printf("ch1: %d %d\n", sizeof(ch1), strlen(ch1)); // 5 5
//	//printf("ch2: %d %d\n", sizeof(ch2), strlen(ch2)); // 3 35
//	//printf("ch3: %d %d\n", sizeof(ch3), strlen(ch3)); // 5 3
//	//printf("ch4: %d %d\n", sizeof(ch4), strlen(ch4)); // 4 3
//
//	//int arr[5] = { 6,7,8 };
//	//printf("arr: %d %d\n", sizeof(arr), sizeof(arr) / sizeof(arr[0])); //20 5
//
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz 数组的长度，包含最后的0 : %d\n", sz);
//	printf("arr字符串的长度: %d\n", strlen(arr));
//
//	return 0;
//}


//int main() {
//	//char str[] = "Hello, world!\0This is a test.";
//	//int i = 0;
//
//	//如果需要输出 '\0' 字符，可以使用其他输出函数，例如 putchar() 函数，它可以输出任何字符，包括 '\0' 字符。
//	//while (str[i] != '\0') {
//	//	putchar(str[i]);
//	//	i++;
//	//}
//
//	//putchar('\n');
//	//putchar('\0');
//	
//	//字符串以 '\0' 结尾，表示字符串的结束。当遇到 '\0' 字符时，printf() 函数会认为字符串已经结束，因此无法输出 '\0' 字符后面的内容。
//	//printf("str  strlen: %d\n", strlen(str)); //13
//	//int sz = sizeof(str) / sizeof(str[0]);
//	//printf("sz 字符数组的长度 : %d\n", sz); //30
//	//while (1)
//	//{
//	//	//putchar(str[i]);
//	//	printf("每个字符：%c\n",str[i]);
//	//	i++;
//	//}
//
//	//1.打印字符串str的每个元素：
//	//while (str[i] != '\0')
//	//{
//	//	printf("%c", str[i]);
//	//	i++;
//	//}
//
//	//2.打印字符数组str的每个元素：
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%c", str[i]);
//	//}
//
//	//printf("\n");
//
//	char arr1[] = "abc";
//	char arr2[3] = { 'a','b','c' };
//	printf("arr1 strlen: %d\n", strlen(arr1)); //3
//	printf("arr2 strlen: %d\n", strlen(arr2)); //42
//	printf("arr1 sizeof: %d\n", sizeof(arr1) / sizeof(arr1[0])); //4
//	printf("arr2 sizeof: %d\n", sizeof(arr2) / sizeof(arr2[0])); //3
//
//	printf("int 占用: %d\n", sizeof(int)); //4
//
//	return 0;
//}


//int main()
//{
//	//二维数组的使用
//	int arr1[3][4] = { 1,2,3,4 };
//	int arr2[3][4] = { {1,2},{4,5} };
//	int arr3[][4] = { {2,3},{4,5} }; //二维数组如果有初始化，行可以省略，列不能省略
//	//int i = 0, j = 0;
//	int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		//printf("%d行 %d列 元素为 %d\n", i, j, arr1[i][j]);
//	//		printf("%d行 %d列 元素为 %d\n", i, j, arr2[i][j]);
//	//	}
//	//}
//	
//	printf("arr3 二维数组的元素个数: %d\n", sizeof(arr3) / sizeof(arr3[0][0])); //8
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr3数组 %d行 %d列 元素为 %d\n", i, j, arr3[i][j]);
//		}
//	}
//
//
//	return 0;
//}


//冒泡排序算法的基本思想是通过不断交换相邻两个数的位置，把最大或最小的数冒泡到数列的顶端，
//然后再将剩余的数列中最大或最小的数冒泡到顶端，以此类推，直到整个数列排序完成。
//以升序排序为例
//void bubble_sort(int arr[], int n) {
//    int i, j, temp;
//
//    for (i = 0; i < n - 1; i++) {    //需要有几个数去排序
//        for (j = 0; j < n - i - 1; j++) {   //每个数需要和剩余的几个数进行两两比较
//            if (arr[j] > arr[j + 1]) {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}

//冒泡排序写法2--升序
void bubble_sort(int* arr, int n)
{
	int end = n;
	while (end)
	{
		int flag = 0;
		for (int i = 1; i < end; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				int tem = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = tem;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		end--;
	}
}


//选择排序--升序
//1.在待排序序列中，找到最小的元素，将其存放在序列的起始位置。
//2.从剩余的未排序元素中继续寻找最小的元素，将其存放在已排序序列的末尾。
//3.重复步骤2，直到所有元素都排序完成。
//void selection_sort(int arr[], int n) {
//    int i, j, min_index, temp;
//
//    for (i = 0; i < n - 1; i++) {
//        min_index = i;
//        for (j = i + 1; j < n; j++) {
//            if (arr[j] < arr[min_index]) {
//                min_index = j;
//            }
//        }
//        temp = arr[i];
//        arr[i] = arr[min_index];
//        arr[min_index] = temp;
//    }
//}

//交换两元素位置
void select_swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//选择排序优化--升序
//每次从待排序列中选出一个最小值，然后放在序列的起始位置，直到全部待排数据排完即可。
//实际上，我们可以一趟选出两个值，一个最小值一个最大值，然后将其放在序列开头和末尾，这样可以使选择排序的效率快一倍。
void selection_sort(int* arr, int n)
{
	//保存参与单趟排序的第一个数和最后一个数的下标
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		//保存最大值下标
		int maxi = begin;
		//保存最小值下标
		int mini = begin;
		//找出最大值和最小值的下标
		int i = 0;
		for (i = begin; i <= end; i++)
		{
			if (arr[i] < arr[mini])
			{
				mini = i;
			}
			if (arr[i] > arr[maxi])
			{
				maxi = i;
			}
		}
		//最小值放在序列开头
		select_swap(&arr[begin], &arr[mini]);
		//防止最大的数在begin位置被换走
		if (begin == maxi)
		{
			maxi = mini;
		}
		//最大值放在序列结尾
		select_swap(&arr[end], &arr[maxi]);
		begin++;
		end--;
	}
}


//快速排序（Quick Sort）是一种基于比较的排序算法，它的基本思想是选取一个基准元素，
//将序列分为两部分，一部分比基准元素小，一部分比基准元素大，然后对这两部分分别进行递归排序，最终得到一个有序序列。
// 
// 在函数中，我们选取序列的第一个元素作为基准元素，然后使用双指针 i 和 j 分别从序列的左右两端开始遍历，
// 找到比基准元素小的元素和比基准元素大的元素，然后交换它们的位置。最终，将基准元素放到正确的位置上，并对基准元素的左右两边分别进行递归排序。
// 
//在升序排序的实现中，我们需要将数组中比基准元素小的元素放到基准元素的左边，比基准元素大的元素放到基准元素的右边。
//因此，在比较元素大小时，我们需要使用“大于等于”和“小于”的符号
//void quick_sort(int arr[], int left, int right) {
//	if (left < right) {
//		int i = left, j = right, pivot = arr[left];   //选取序列的第一个元素作为基准元素
//		while (i < j) {
//			while (i < j && arr[j] >= pivot) {
//				j--;
//			}
//			if (i < j) {
//				//arr[i++] = arr[j];
//				arr[i] = arr[j];
//				i++;
//			}
//			while (i < j && arr[i] < pivot) {
//				i++;
//			}
//			if (i < j) {
//				//i-- 表示先使用变量 i 的当前值进行运算，然后再将 i 的值减 1。
//				//--i 表示先将 i 的值减 1，然后再使用减 1 后的值进行运算。
//				//arr[j--] = arr[i];
//				arr[j] = arr[i];
//				j--;
//			}
//		}
//		arr[i] = pivot;
//		quick_sort(arr, left, i - 1);
//		quick_sort(arr, i + 1, right);
//	}
//}


void swap(int arr[], int i, int j)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}


//快排算法实现(左右指针法):
//1.在数组中选一个基准数（通常为数组第一个）。
//2.将数组中小于基准数的数据移到基准数左边，大于基准数的移到右边
//3.对于基准数左、右两边的数组，不断重复以上两个过程，直到每个子集只有一个元素，即为全部有序。

//在数组的头部和尾部分别设置一个哨兵，同时向对方走去。尾部的哨兵如发现有比基准数小的数，停下。
//头部的哨兵如发现有比基准数大的数，停下。交换两个数。
//再重新走重复前面的交换过程。直到两个哨兵相遇，交换基准数和尾哨兵。
void quick_sort(int arr[], int left, int right)
{
	//当 left==right 时表示该序列只有一个元素，不必排序了
	if (left >= right)
	{
		return;
	}
	//若以第一个元素为基准数，在哨兵互走过程需右边的哨兵先走
	int i = left, j = right, pivot = arr[left];  //选取序列的第一个元素作为基准元素
	while (i < j)
	{
		//右边哨兵从后向前找
		//printf("arr[j]: %d\n", arr[j]);
		while (arr[j] >= pivot && i < j)
		{
			j--;
		}
		//左边哨兵从前向后找
		//printf("arr[i]: %d\n", arr[i]);
		while (arr[i] <= pivot && i < j)
		{
			i++;
		}
		swap(arr, i, j); //交换元素
	}
	swap(arr, left, j); //基准元素与右哨兵交换
	quick_sort(arr, left, j - 1); //pivot的左子序列递归调用排序
	quick_sort(arr, j + 1, right);//pivot的右子序列递归调用排序
}


//插入排序
//步骤：
//1.从第一个元素开始，该元素可以认为已经被排序
//2.取下一个元素tem，从已排序的元素序列从后往前扫描
//3.如果该元素大于tem，则将该元素移到下一位
//4.重复步骤3，直到找到已排序元素中小于等于tem的元素
//5.tem插入到该元素的后面，如果已排序所有元素都大于tem，则将tem插入到下标为0的位置
//6.重复步骤2~5
//思路：
//1.在待排序的元素中，假设前n - 1个元素已有序，现将第n个元素插入到前面已经排好的序列中，使得前n个元素有序。
// 按照此法对所有元素进行插入，直到整个序列有序。
//2.但我们并不能确定待排元素中究竟哪一部分是有序的，所以我们一开始只能认为第一个元素是有序的，
//依次将其后面的元素插入到这个有序序列中来，直到整个序列有序为止。
void insert_sort(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		//已排序元素的最后一位元素的下标
		//记录有序序列最后一个元素的下标
		int end = i;
		//待插入的元素
		int tem = arr[end + 1];
		printf("tem: %d\n", tem);
		//单趟排
		while (end >= 0)
		{
			//比插入的数大就向后移
			if (tem < arr[end])
			{
				//arr[end] = arr[end + 1];
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		printf("单趟结束 tem: %d\n", tem);
		printf("单趟结束 end: %d\n", end);
		//tem放到比插入的数小的数的后面
		arr[end + 1] = tem;
		//代码执行到此位置有两种情况:
		//1.待插入元素找到应插入位置（break跳出循环到此）
		//2.待插入元素比当前有序序列中的所有元素都小（while循环结束后到此）
	}
}

//希尔排序（Shell Sort）是一种高效的排序算法，它是插入排序的一种改进版本。
//步骤：
//1.先选定一个小于N的整数gap作为第一增量，然后将所有距离为gap的元素分在同一组，并对每一组的元素进行直接插入排序。
//  然后再取一个比第一增量小的整数作为第二增量，重复上述操作…
//2.当增量的大小减到1时，就相当于整个序列被分到一组，进行一次直接插入排序，排序完成。
//思路：
//希尔排序，先将待排序列进行预排序，使待排序列接近有序，然后再对该序列进行一次插入排序，此时插入排序的时间复杂度为O(N)，
void shell_sort(int* arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		//每次对gap折半操作
		gap = gap / 2;
		//单趟排序
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tem = arr[end + gap];
			while (end >= 0)
			{
				if (tem < arr[end])
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = tem;
		}
	}
}


//int main()
//{
//	int arr[10] = { 1,5,3,2,10,7,8,6,4,9 };
//	//int arr[5] = { 2,5,3,4,1 }; //15342   12345   14325  13425
//	//int arr[5] = { 2,5,3,4,2 };  //2 3 4 2 5   22345
//	//int arr[] = { 3,5,4,2 }; 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz: %d\n", sz);
//	//冒泡排序
//	//bubble_sort(arr, sz); //当数组传参的时候，实际上只是把数组的首元素的地址传递过去了。
//	//selection_sort(arr, sz);//选择排序
//	//quick_sort(arr, 0, sz - 1); //快速排序
//	//insert_sort(arr, sz); //插入排序
//	shell_sort(arr, sz); //希尔排序
//
//	printf("--------排序后-------\n");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n0x12: %p\n", 0x12); //0000000000000012
//	//1个十六进制位可以表示 4 个二进制位, 一个字节是由 8 个二进制位组成的, 因此一个字节可以用 2 个十六进制数表示，即 0x00 到 0xFF
//
//	return 0;
//}


//6 1 2 7 9 13 4 5 10 8
//6 1 2 5 9 13 4 7 10 8
// 
//6 1 2 5 4 13 9 7 10 8
//4 1 2 5 6 13 9 7 10 8

//6 1 2 5 4 3 9 7 10 8



