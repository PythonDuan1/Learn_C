#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// P55�����ݹ�ϰ��

//��һ�� 1-100 �����������г��ֶ��ٸ����� 9 
// ��λΪ9��ʮλΪ9
//int main()
//{
//
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			//��λΪ9
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			//ʮλΪ9
//			count++;
//		}
//	}
//
//	printf("count = %d\n", count);
//
//	return 0;
//}


//���� 1/1 - 1/2 + 1/3 - 1/4 + 1/5 ...... + 1/99 - 1/100 ��ֵ������ӡ�����
// ��������ż����
//int main()
//{
//	int i = 0;
//	double count = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			count = count - (1.0 / i);
//		}
//		else
//		{
//			count = count + (1.0 / i);
//		}
//	}
//
//	printf("count = %lf\n",count);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//
//	printf("sum = %lf\n", sum);
//
//	//������������Ľ��Ҳ�����������Ҫ�õ�С����������Խ�����һ������ǿ��ת��Ϊ������
//	//int a = 10;
//	//int b = 3;
//	int a = 1;
//	int b = 2;
//	float c = (float)a / b;
//	printf("%f\n", c);   // ������Ϊ3.333333
//
//	return 0;
//}

// ��10�������е����ֵ
//int main()
//{
//	//int arr[10] = { 1,4,6,8,24,67,876,13,56,0 };
//	int arr[10] = { -9,-10,-5,-3,-7,-2,-1,-8,-4, -89 };
//	//int arr[10] = { -9,-10,-5,-3,-7,-2,-1,-8 };
//	int i = 0;
//	//int max = 0;
//	int max = arr[0]; //max�ĳ�ʼֵҪ�����������ѡһ��������ֱ�Ӹ�Ϊ0
//	//for (i = 0; i < 10; i++)
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵ: %d\n", max);
//
//	return 0;
//}

//���9*9�˷��ھ���
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			if (j <= i)
//			{
//				printf("%d * %d = %d  ", j, i, i * j);
//				//printf("%d * %d = %d\t", j, i, i * j);
//			}
//		}
//		printf("\n");
//	}
//
//	printf("Name\tAge\tCity\n");
//	printf("John\t28\tNew York\n");
//	printf("Alice\t35\tLondon\n");
//
//	return 0;
//}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}

////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//
//	return 0;
//}


//����Ŀ���ơ�
//
//�ַ������򣨵ݹ�ʵ�֣�
//
//����Ŀ���ݡ�
//
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba


//void reverse_string(char* string)
//{
//	while (*string != '\0')
//	{
//		printf("%c\n", *string);
//		string++;
//	}
//}

//int reverse_string(char* str)
//{	
//	printf("ָ�� str: %p\n", str);
//	printf("ָ�� str+1:  %p\n", str + 1);
//	printf("ָ�� str ָ����ַ�: %c\n", *str);
//	printf("ָ�� str+1 ָ����ַ�: %c\n", *(str + 1));
//	//ָ�� str : 000000D269EFFC84
//	//ָ�� str + 1 : 000000D269EFFC85
//	//ָ�� str ָ����ַ� : a
//	//ָ�� str + 1 ָ����ַ� : b
//	printf(" strlen(str): %d\n", strlen(str));
//	printf(" strlen(str + 1): %d\n", strlen(str + 1));
//	//strlen(str) : 6
//	//strlen(str + 1) : 5
//
//
//	//char* right = str + strlen(str) - 1;
//
//	return 0;
//}


///*
//˼·��
//�����ַ�����ѭ���ķ�ʽʵ�ַǳ���
//  1. ������ָ�룬left�����ַ�����࣬right�������һ����Ч�ַ�λ��
//  2. ��������ָ��λ���ϵ��ַ�
//  3. leftָ�������ߣ�rightָ����ǰ�ߣ�ֻҪ����ָ��û������������2������ָ�����������ý���
//*/
//void reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//}


/*
�ݹ鷽ʽ��
�����ַ�����abcdefg�����ݹ�ʵ�ֵĴ��ԭ��
  1. ����a��g��
  2. �Եݹ�ķ�ʽ����Դ�ַ�����ʣ�ಿ�֣�ʣ�ಿ�ֿ��Կ���һ����Ч���ַ������������Ƶķ�ʽ����
*/
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}

//int main()
//{
//	char arr[] = "abcdef";
//	//char arr[] = { 'a','b','c','d','e','f','\0' };
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	//int mid = sz / 2;
//	//printf("arr: %s\n", arr);
//	//printf("sz: %d\n", sz);
//	reverse_string(arr);
//
//	printf("�ı�� arr: %s\n", arr);
//
//	return 0;
//}


//����Ŀ���ơ�
//
//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//
//����Ŀ���ݡ�
//
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19

//int DigitSum(int n)
//{
//	int num = 0;
//	if (n > 9)
//	{
//		num = DigitSum(n / 10);
//	}
//	return num + n % 10;
//}

/*
˼·��
			n    n < 10
DigiSum(n) =
		   DibiSum(n/10)+n%10   // ǰn-1λ֮��+��Nλ
*/

//int DigitSum(int n)//1729
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("ret: %d\n", ret);
//
//	return 0;
//}


//����Ŀ���ơ�
//
//�ݹ�ʵ��n��k�η�
//
//����Ŀ���ݡ�
//
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//int my_exponent(int n, int k)
//{
//	if (k > 1)
//	{
//		return n * my_exponent(n, k - 1);
//	}
//	else if (k == 0)  //������k==0�����
//	{
//		return 1;
//	}
//	else
//	{
//		return n;
//	}
//}
//
///*
//˼·��
//		  1      K==0
//Pow(n,K) =
//		  Pow(n, K-1)*n
//
//*/
//int Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k >= 1)
//	{
//		return n * Pow(n, k - 1);
//	}
//}
//
//
//int main()
//{
//	int  n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = my_exponent(n, k);
//	printf("ret: %d\n", ret);
//
//	return 0;
//}


//����Ŀ���ơ�
//
//����쳲�������
//
//����Ŀ���ݡ�
//
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//
//���磺
//
//���룺5  �����5
//
//���룺10�� �����55
//
//���룺2�� �����1

//1 1 2 3 5 8 13 21 34 55 89 144
//F(0) = 1
//F(1) = 1
//F(n) = F(n - 1) + F(n - 2) (n >= 2)
//Ҳ����˵��쳲��������еĵ�n����ǰ����ĺ͡����磬쳲��������е�ǰ10��ֱ��ǣ�
//1��1��2��3��5��8��13��21��34��55

//�ݹ鷨 ���n��쳲�������
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

//�ǵݹ�  ���n��쳲�������
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//
//	int i = 0;
//	int count = 0;
//	int a = 1, b = 1;
//	for (i = 0; i < n - 2; i++)
//	{
//		count = a + b;
//		a = b;
//		b = count;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("��%d��쳲�������Ϊ: %d\n", n, ret);
//
//	return 0;
//}

