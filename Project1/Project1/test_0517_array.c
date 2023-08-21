#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//int main()
//{
//	//数组名是数组首元素的地址。（有两个例外）
//	//1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数
//	//	组。
//	//2. & 数组名，取出的是数组的地址。 & 数组名，数组名表示整个数组。
//
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);     // 打印数组首元素的地址
//	printf("%p\n", &arr[0]); // 打印数组首元素的地址
//	//*arr表示取数组首元素的值，而不是地址
//	printf("%p\n", *arr);
//	printf("%p\n", &arr);    // 打印数组在内存中的地址
//	return 0;
//}

//0000000D30EFF558
//0000000D30EFF558
//0000000000000001
//0000000D30EFF558