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
//	////strlen�������ڼ����ַ����ĳ��ȣ�����������ĳ��ȡ�strlen������������ַ�������Ч�ַ��ĸ������������ַ���ĩβ��null�ַ�('\0')
//	//printf("acX: %d\n", strlen(acX)); // 7   
//	//printf("acY: %d\n", strlen(acY)); // 43
//	//printf("acZ: %d\n", strlen(acZ)); // 7
//
//	////sizeof��strlen����Ҫ�������ڣ�
//	////1.sizeof�����������ռ�õ����ֽ���������'\0'���������ڼ�������ĳ��ȣ�
//	//// ��strlen��������ַ�������Ч�ַ��ĸ������������ַ���ĩβ��null�ַ�('\0')���������ڼ�������ĳ��ȡ�
//	////2.sizeof�������������ÿ��Ԫ��ռ�õ��ֽ�������strlenֻ�������ַ������ͣ��޷������������͵����顣
//
//	//printf("sizeof---- acX: %d\n", sizeof(acX)); //8
//	//printf("sizeof---- acY: %d\n", sizeof(acY)); //7
//	//printf("sizeof(acX) / sizeof(acX[0])----: %d\n", sizeof(acX) / sizeof(acX[0]));  //8
//
//	//printf("sizeof(char): %d\n", sizeof(char)); //1
//	//printf("sizeof(int): %d\n", sizeof(int)); //4
//
//	//int arr[] = { 1,2,(3,4),5 };  //����arr���飬������4��Ԫ�أ�(3,4)Ϊ���ű��ʽ��ȡ���ߣ����������Ԫ�طֱ�Ϊ��1,2,4,5
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//4
//	//printf("sz: %d\n", sz);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("arr����ÿ��Ԫ��: %d\n", arr[i]);
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
//	printf("sz ����ĳ��ȣ���������0 : %d\n", sz);
//	printf("arr�ַ����ĳ���: %d\n", strlen(arr));
//
//	return 0;
//}


//int main() {
//	//char str[] = "Hello, world!\0This is a test.";
//	//int i = 0;
//
//	//�����Ҫ��� '\0' �ַ�������ʹ������������������� putchar() ����������������κ��ַ������� '\0' �ַ���
//	//while (str[i] != '\0') {
//	//	putchar(str[i]);
//	//	i++;
//	//}
//
//	//putchar('\n');
//	//putchar('\0');
//	
//	//�ַ����� '\0' ��β����ʾ�ַ����Ľ����������� '\0' �ַ�ʱ��printf() ��������Ϊ�ַ����Ѿ�����������޷���� '\0' �ַ���������ݡ�
//	//printf("str  strlen: %d\n", strlen(str)); //13
//	//int sz = sizeof(str) / sizeof(str[0]);
//	//printf("sz �ַ�����ĳ��� : %d\n", sz); //30
//	//while (1)
//	//{
//	//	//putchar(str[i]);
//	//	printf("ÿ���ַ���%c\n",str[i]);
//	//	i++;
//	//}
//
//	//1.��ӡ�ַ���str��ÿ��Ԫ�أ�
//	//while (str[i] != '\0')
//	//{
//	//	printf("%c", str[i]);
//	//	i++;
//	//}
//
//	//2.��ӡ�ַ�����str��ÿ��Ԫ�أ�
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
//	printf("int ռ��: %d\n", sizeof(int)); //4
//
//	return 0;
//}


//int main()
//{
//	//��ά�����ʹ��
//	int arr1[3][4] = { 1,2,3,4 };
//	int arr2[3][4] = { {1,2},{4,5} };
//	int arr3[][4] = { {2,3},{4,5} }; //��ά��������г�ʼ�����п���ʡ�ԣ��в���ʡ��
//	//int i = 0, j = 0;
//	int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		//printf("%d�� %d�� Ԫ��Ϊ %d\n", i, j, arr1[i][j]);
//	//		printf("%d�� %d�� Ԫ��Ϊ %d\n", i, j, arr2[i][j]);
//	//	}
//	//}
//	
//	printf("arr3 ��ά�����Ԫ�ظ���: %d\n", sizeof(arr3) / sizeof(arr3[0][0])); //8
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr3���� %d�� %d�� Ԫ��Ϊ %d\n", i, j, arr3[i][j]);
//		}
//	}
//
//
//	return 0;
//}


//ð�������㷨�Ļ���˼����ͨ�����Ͻ���������������λ�ã���������С����ð�ݵ����еĶ��ˣ�
//Ȼ���ٽ�ʣ���������������С����ð�ݵ����ˣ��Դ����ƣ�ֱ����������������ɡ�
//����������Ϊ��
//void bubble_sort(int arr[], int n) {
//    int i, j, temp;
//
//    for (i = 0; i < n - 1; i++) {    //��Ҫ�м�����ȥ����
//        for (j = 0; j < n - i - 1; j++) {   //ÿ������Ҫ��ʣ��ļ��������������Ƚ�
//            if (arr[j] > arr[j + 1]) {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}

//ð������д��2--����
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


//ѡ������--����
//1.�ڴ����������У��ҵ���С��Ԫ�أ������������е���ʼλ�á�
//2.��ʣ���δ����Ԫ���м���Ѱ����С��Ԫ�أ������������������е�ĩβ��
//3.�ظ�����2��ֱ������Ԫ�ض�������ɡ�
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

//������Ԫ��λ��
void select_swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//ѡ�������Ż�--����
//ÿ�δӴ���������ѡ��һ����Сֵ��Ȼ��������е���ʼλ�ã�ֱ��ȫ�������������꼴�ɡ�
//ʵ���ϣ����ǿ���һ��ѡ������ֵ��һ����Сֵһ�����ֵ��Ȼ����������п�ͷ��ĩβ����������ʹѡ�������Ч�ʿ�һ����
void selection_sort(int* arr, int n)
{
	//������뵥������ĵ�һ���������һ�������±�
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		//�������ֵ�±�
		int maxi = begin;
		//������Сֵ�±�
		int mini = begin;
		//�ҳ����ֵ����Сֵ���±�
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
		//��Сֵ�������п�ͷ
		select_swap(&arr[begin], &arr[mini]);
		//��ֹ��������beginλ�ñ�����
		if (begin == maxi)
		{
			maxi = mini;
		}
		//���ֵ�������н�β
		select_swap(&arr[end], &arr[maxi]);
		begin++;
		end--;
	}
}


//��������Quick Sort����һ�ֻ��ڱȽϵ������㷨�����Ļ���˼����ѡȡһ����׼Ԫ�أ�
//�����з�Ϊ�����֣�һ���ֱȻ�׼Ԫ��С��һ���ֱȻ�׼Ԫ�ش�Ȼ����������ֱַ���еݹ��������յõ�һ���������С�
// 
// �ں����У�����ѡȡ���еĵ�һ��Ԫ����Ϊ��׼Ԫ�أ�Ȼ��ʹ��˫ָ�� i �� j �ֱ�����е��������˿�ʼ������
// �ҵ��Ȼ�׼Ԫ��С��Ԫ�غͱȻ�׼Ԫ�ش��Ԫ�أ�Ȼ�󽻻����ǵ�λ�á����գ�����׼Ԫ�طŵ���ȷ��λ���ϣ����Ի�׼Ԫ�ص��������߷ֱ���еݹ�����
// 
//�����������ʵ���У�������Ҫ�������бȻ�׼Ԫ��С��Ԫ�طŵ���׼Ԫ�ص���ߣ��Ȼ�׼Ԫ�ش��Ԫ�طŵ���׼Ԫ�ص��ұߡ�
//��ˣ��ڱȽ�Ԫ�ش�Сʱ��������Ҫʹ�á����ڵ��ڡ��͡�С�ڡ��ķ���
//void quick_sort(int arr[], int left, int right) {
//	if (left < right) {
//		int i = left, j = right, pivot = arr[left];   //ѡȡ���еĵ�һ��Ԫ����Ϊ��׼Ԫ��
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
//				//i-- ��ʾ��ʹ�ñ��� i �ĵ�ǰֵ�������㣬Ȼ���ٽ� i ��ֵ�� 1��
//				//--i ��ʾ�Ƚ� i ��ֵ�� 1��Ȼ����ʹ�ü� 1 ���ֵ�������㡣
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


//�����㷨ʵ��(����ָ�뷨):
//1.��������ѡһ����׼����ͨ��Ϊ�����һ������
//2.��������С�ڻ�׼���������Ƶ���׼����ߣ����ڻ�׼�����Ƶ��ұ�
//3.���ڻ�׼���������ߵ����飬�����ظ������������̣�ֱ��ÿ���Ӽ�ֻ��һ��Ԫ�أ���Ϊȫ������

//�������ͷ����β���ֱ�����һ���ڱ���ͬʱ��Է���ȥ��β�����ڱ��緢���бȻ�׼��С������ͣ�¡�
//ͷ�����ڱ��緢���бȻ�׼���������ͣ�¡�������������
//���������ظ�ǰ��Ľ������̡�ֱ�������ڱ�������������׼����β�ڱ���
void quick_sort(int arr[], int left, int right)
{
	//�� left==right ʱ��ʾ������ֻ��һ��Ԫ�أ�����������
	if (left >= right)
	{
		return;
	}
	//���Ե�һ��Ԫ��Ϊ��׼�������ڱ����߹������ұߵ��ڱ�����
	int i = left, j = right, pivot = arr[left];  //ѡȡ���еĵ�һ��Ԫ����Ϊ��׼Ԫ��
	while (i < j)
	{
		//�ұ��ڱ��Ӻ���ǰ��
		//printf("arr[j]: %d\n", arr[j]);
		while (arr[j] >= pivot && i < j)
		{
			j--;
		}
		//����ڱ���ǰ�����
		//printf("arr[i]: %d\n", arr[i]);
		while (arr[i] <= pivot && i < j)
		{
			i++;
		}
		swap(arr, i, j); //����Ԫ��
	}
	swap(arr, left, j); //��׼Ԫ�������ڱ�����
	quick_sort(arr, left, j - 1); //pivot���������еݹ��������
	quick_sort(arr, j + 1, right);//pivot���������еݹ��������
}


//��������
//���裺
//1.�ӵ�һ��Ԫ�ؿ�ʼ����Ԫ�ؿ�����Ϊ�Ѿ�������
//2.ȡ��һ��Ԫ��tem�����������Ԫ�����дӺ���ǰɨ��
//3.�����Ԫ�ش���tem���򽫸�Ԫ���Ƶ���һλ
//4.�ظ�����3��ֱ���ҵ�������Ԫ����С�ڵ���tem��Ԫ��
//5.tem���뵽��Ԫ�صĺ��棬�������������Ԫ�ض�����tem����tem���뵽�±�Ϊ0��λ��
//6.�ظ�����2~5
//˼·��
//1.�ڴ������Ԫ���У�����ǰn - 1��Ԫ���������ֽ���n��Ԫ�ز��뵽ǰ���Ѿ��źõ������У�ʹ��ǰn��Ԫ������
// ���մ˷�������Ԫ�ؽ��в��룬ֱ��������������
//2.�����ǲ�����ȷ������Ԫ���о�����һ����������ģ���������һ��ʼֻ����Ϊ��һ��Ԫ��������ģ�
//���ν�������Ԫ�ز��뵽�����������������ֱ��������������Ϊֹ��
void insert_sort(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		//������Ԫ�ص����һλԪ�ص��±�
		//��¼�����������һ��Ԫ�ص��±�
		int end = i;
		//�������Ԫ��
		int tem = arr[end + 1];
		printf("tem: %d\n", tem);
		//������
		while (end >= 0)
		{
			//�Ȳ��������������
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
		printf("���˽��� tem: %d\n", tem);
		printf("���˽��� end: %d\n", end);
		//tem�ŵ��Ȳ������С�����ĺ���
		arr[end + 1] = tem;
		//����ִ�е���λ�����������:
		//1.������Ԫ���ҵ�Ӧ����λ�ã�break����ѭ�����ˣ�
		//2.������Ԫ�رȵ�ǰ���������е�����Ԫ�ض�С��whileѭ�������󵽴ˣ�
	}
}

//ϣ������Shell Sort����һ�ָ�Ч�������㷨�����ǲ��������һ�ָĽ��汾��
//���裺
//1.��ѡ��һ��С��N������gap��Ϊ��һ������Ȼ�����о���Ϊgap��Ԫ�ط���ͬһ�飬����ÿһ���Ԫ�ؽ���ֱ�Ӳ�������
//  Ȼ����ȡһ���ȵ�һ����С��������Ϊ�ڶ��������ظ�����������
//2.�������Ĵ�С����1ʱ�����൱���������б��ֵ�һ�飬����һ��ֱ�Ӳ�������������ɡ�
//˼·��
//ϣ�������Ƚ��������н���Ԥ����ʹ�������нӽ�����Ȼ���ٶԸ����н���һ�β������򣬴�ʱ���������ʱ�临�Ӷ�ΪO(N)��
void shell_sort(int* arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		//ÿ�ζ�gap�۰����
		gap = gap / 2;
		//��������
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
//	//ð������
//	//bubble_sort(arr, sz); //�����鴫�ε�ʱ��ʵ����ֻ�ǰ��������Ԫ�صĵ�ַ���ݹ�ȥ�ˡ�
//	//selection_sort(arr, sz);//ѡ������
//	//quick_sort(arr, 0, sz - 1); //��������
//	//insert_sort(arr, sz); //��������
//	shell_sort(arr, sz); //ϣ������
//
//	printf("--------�����-------\n");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n0x12: %p\n", 0x12); //0000000000000012
//	//1��ʮ������λ���Ա�ʾ 4 ��������λ, һ���ֽ����� 8 ��������λ��ɵ�, ���һ���ֽڿ����� 2 ��ʮ����������ʾ���� 0x00 �� 0xFF
//
//	return 0;
//}


//6 1 2 7 9 13 4 5 10 8
//6 1 2 5 9 13 4 7 10 8
// 
//6 1 2 5 4 13 9 7 10 8
//4 1 2 5 6 13 9 7 10 8

//6 1 2 5 4 3 9 7 10 8



