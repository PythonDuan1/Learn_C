#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//ָ��
// 
//ָ����ǵ�ַ��������˵��ָ��ͨ��ָ����ָ�����
//ָ�������������ŵ�ַ�ı������������ָ���е�ֵ�������ɵ�ַ������
//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽڡ�
//int main()
//{
//	int a = 10;
//	int* p = &a; //�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&��������
//				//a����ռ��4���ֽڵĿռ䣬�����ǽ�a��4���ֽڵĵ�һ���ֽڵĵ�ַ�����p�����У�p����һ��ָ�������
//	printf("a���ڴ��еĵ�ַ��ָ�룩: %p\n", p);  // %p ��һ����ʽ��������Ʒ����������ָ������ĵ�ֵַ��
//	
//	//ָ�������
//	char* pc = NULL;  // char* ���͵�ָ����Ϊ�˴�� char ���ͱ����ĵ�ַ��
//	int* pi = NULL;   // int* ���͵�ָ����Ϊ�˴�� int ���ͱ����ĵ�ַ
//	short* ps = NULL; // short* ���͵�ָ����Ϊ�˴�� short ���ͱ����ĵ�ַ��
//	long* pl = NULL;
//	float* pf = NULL;
//	double* pd = NULL;
//
//	return 0;
//}


//  ָ��+-����
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", &n);           //0000005DD2B9F804
//	printf("%p\n", pc);           //0000005DD2B9F804
//	printf("%p\n", pc + 1);       //0000005DD2B9F805
//	printf("%p\n", pi);           //0000005DD2B9F804
//	printf("%p\n", pi + 1);       //0000005DD2B9F808
//	printf("\n");
//	printf("int: %d\n", sizeof(int));	 // 4
//	printf("char: %d\n", sizeof(char));  // 1
//
//	// ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩
//
//	return 0;
//}


// ָ��Ľ�����
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	*pi = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯
//	//�ܽ᣺
//	//ָ������;����ˣ���ָ������õ�ʱ���ж���Ȩ�ޣ��ܲ��������ֽڣ���
//	//���磺 char* ��ָ������þ�ֻ�ܷ���һ���ֽڣ��� int* ��ָ��Ľ����þ��ܷ����ĸ��ֽڡ� |  ???û��������û�����ڴ�ı仯!!
//
//	return 0;
//}


//Ұָ��
//Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//int main()
//{
//	// Ұָ�����:
//	//1.ָ��δ��ʼ��
//	//int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	//*p = 20;
//	//printf("ָ��δ��ʼ��: %p", p);  // ����ʧ��
//
//	//2.ָ��Խ�����
//	//int arr[10] = { 0 };
//	//int* p = arr;   // ��������������Ԫ�صĵ�ַ������ȡ����ĵ�ַ���� &arr
//	//int i = 0;
//	//for (i = 0; i <= 11; i++)
//	//{
//	//	//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//	//	*(p++) = i;
//	//}
//
//	//3. ָ��ָ��Ŀռ��ͷ�
//
//	return 0;
//}

//��ι��Ұָ��
//1. ָ���ʼ��
//2. С��ָ��Խ��
//3. ָ��ָ��ռ��ͷż�ʹ��NULL
//4. ���ⷵ�ؾֲ������ĵ�ַ
//5. ָ��ʹ��֮ǰ�����Ч��
//int main()
//{
//	int* p = NULL;
//	//....
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		printf("p: %p\n", p);  //0000002245D1F734
//		printf("a: %d\n", a);  //10
//		*p = 20;
//		printf("***** p: %p\n", p);  //0000002245D1F734
//		printf("���¸�ֵ�� a: %d\n", a); //20
//	}
//
//	return 0;
//}
#include<windows.h>
#define N_VALUES 5
////ָ������
//int main()
//{
//	//  4.1ָ�� + -����
//	//float values[N_VALUES];
//	//float* vp;
//
//	//int i = 0;
//	//for (i = 0; i < N_VALUES; i++)
//	//{
//	//	printf("values[i]: %f\n", values[i]);
//	//}
//
//	////ָ��+-������ָ��Ĺ�ϵ����
//	//for (vp = &values[0]; vp < &values[N_VALUES];)
//	//{
//	//	//��ֵ����� = �����ȼ��Ⱥ�׺��������� ++ �����ȼ��ߣ������ִ�и�ֵ(=)������Ȼ����ִ�е���(++)������
//	//	//���ȣ�vp ָ��ĵ�ַ���洢�� float ֵ������Ϊ 0��
//	//	//Ȼ��ָ�� vp ��������ָ����һ�� float ���͵ĵ�ַ��
//	//	*vp++ = 0;
//	//}
//
//	//int j = 0;
//	//for (j = 0; j < N_VALUES; j++)
//	//{
//	//	printf("values[i]---------: %f\n", values[j]);
//	//}
//	//printf("******************************************************\n");
//	//char s[20] = "*";
//	//printf("%s\n", s);
//
//	//char str[21];  // ����һ������Ϊ 21 ���ַ����飬�����洢�ַ�����������β�� '\0'��
//
//	//for (int i = 0; i < 20; i++) {
//	//	str[i] = '*';  // ��ÿ���ַ�����Ϊ '*'
//	//}
//
//	//str[20] = '\0';  // ���ַ����Ľ�β����һ�� '\0'����ʾ�ַ����Ľ���
//
//	//printf("str: %s\n", str);  // ����ַ���
//	//printf("str : %d\n",strlen(str));   //20
//
//	////δ��ʼ���������ֵ�ǲ�ȷ���ģ���� arr �����д洢�������ǲ�ȷ���ģ�����������ֵ��
//	//int arr[N_VALUES];
//	//int k = 0;
//	//for (k = 0; k < N_VALUES; k++)
//	//{
//	//	printf("int  arr[k]: %d\n", arr[k]);
//	//}
//
//	//	4.2ָ�� - ָ��
//	//char str[5] = "abcde";
//	//char* p = str;   //�ַ����� C �����������ַ��������ʽ�洢�ģ���˿������ַ�ָ��ָ���ַ������׵�ַ��
//	//char* s = str;
//	//printf("p: %p\n", p);
//	//printf("s: %p\n", s);
//	//while (*p != '\0')
//	//{
//	//	p++;   //str��ַp������ָ����һ����ַ����Ϊ��char�������ݣ����Ե�ַÿ����1���ֽ�
//	//	printf("p---------: %p\n", p);
//	//	Sleep(1000);
//	//}	
//	//printf("p-s : %p\n", p - s);
//
//	//printf("int ռ�� %d �ֽ�\n", sizeof(int));  // 4
//
//	//int a = 10;
//	//int* pa = &a;
//	//printf("pa: %p\n", pa);
//	//while (1)
//	//{
//	//	pa++;  // paָ�����ָ��int�������ݣ���ַÿ�ε���4�ֽ�
//	//	printf("pa-----: %p\n", pa);
//	//	Sleep(1000);
//	//}
//
//	//	4.3ָ��Ĺ�ϵ����
//	//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
//	// ���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
//
//	return 0;
//}

//5.ָ��������
//int main()
//{
//	// ��������ʾ����������Ԫ�صĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("arr: %p\n", arr);  //000000C5AABFF858
//	printf("arr[0]: %p\n", arr[0]);  //0000000000000001    ��ӡ�������׸�Ԫ��
//	printf("&arr[0]: %p\n", &arr[0]); //000000C5AABFF858    ������Ԫ�صĵ�ַ
//	
//	int* p = arr;
//	printf("p: %p\n", p); //p��ŵ���������Ԫ�صĵ�ַ
//
//	return 0;
//}

//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int* p = arr; //ָ����������Ԫ�صĵ�ַ
//	//printf("p: %p\n", p);
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("sz: %d\n", sz);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	//}
//
//	//p: 0000009AE00FF958
//	//sz : 10
//	//& arr[0] = 0000009AE00FF958   <=== = > p + 0 = 0000009AE00FF958
//	//& arr[1] = 0000009AE00FF95C   <=== = > p + 1 = 0000009AE00FF95C
//	//& arr[2] = 0000009AE00FF960   <=== = > p + 2 = 0000009AE00FF960
//	//& arr[3] = 0000009AE00FF964   <=== = > p + 3 = 0000009AE00FF964
//	//& arr[4] = 0000009AE00FF968   <=== = > p + 4 = 0000009AE00FF968
//	//& arr[5] = 0000009AE00FF96C   <=== = > p + 5 = 0000009AE00FF96C
//	//& arr[6] = 0000009AE00FF970   <=== = > p + 6 = 0000009AE00FF970
//	//& arr[7] = 0000009AE00FF974   <=== = > p + 7 = 0000009AE00FF974
//	//& arr[8] = 0000009AE00FF978   <=== = > p + 8 = 0000009AE00FF978
//	//& arr[9] = 0000009AE00FF97C   <=== = > p + 9 = 0000009AE00FF97C
//
//	//���� p+i ��ʵ����������� arr �±�Ϊi�ĵ�ַ��
//	//�����ǾͿ���ֱ��ͨ��ָ�����������顣
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;  //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}


//6.����ָ��
//ָ�����Ҳ�Ǳ������Ǳ������е�ַ����ָ������ĵ�ַ������������� ����ָ�� ��
//ָ������洢����ĳ���ڴ��ַ��ֵ��������ָ����ָ��ָ�������ָ�롣Ҳ����˵������ָ��洢����ĳ��ָ������ĵ�ַ��
//����һ������ָ��ķ�������ָ�����ǰ�����* ���� int** p������� p ��һ������ָ�룬���洢����ĳ��ָ������ĵ�ַ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;  //pa��һ��ָ��
//	int** ppa = &pa; // ppa�Ƕ���ָ��
//	//pa ��һ��ָ�� a ��ָ����������洢�� a �ĵ�ַ��
//	//ͨ��* pa ���Է��� a ��ֵ������������������ã�dereferencing��������ȡָ����ָ����ڴ��ַ�ϴ洢��ֵ��
//	//��ˣ�* pa �ʹ����� a ��ֵ��
//	printf("pa: %p\n", pa);
//	printf("ppa: %p\n", ppa);
//	printf("&a: %p\n", &a);
//
//	// ����ָ�������
//	//*ppa ͨ����ppa�еĵ�ַ���н����ã������ҵ����� pa ��* ppa ��ʵ���ʵľ��� pa .
//	int b = 20;
//	//*ppa = &b;//�ȼ��� pa = &b
//	//printf("*ppa: %d\n", *ppa);
//	//printf("ppa---: %p\n", ppa);
//
//	printf("******************************\n");
//	//**ppa ��ͨ�� *ppa �ҵ� pa ,Ȼ��� pa ���н����ò����� *pa �����ҵ����� a
//	**ppa = 30;
//	//�ȼ���*pa = 30;
//	//�ȼ���a = 30
//	printf("**ppa------: %d\n", **ppa); // **ppa���� a��ֵ
//	printf("*ppa------: %d\n", *ppa); // *ppa���� pa��ֵ
//	printf("ppa------: %p\n", ppa);  // ppa����pa�ĵ�ַ
//	printf("******************************\n");
//	printf("*pa--------: %d\n", *pa);
//	printf("pa---------: %p\n", pa);
//	printf("a: %d\n", a);
//
//	return 0;
//}


//7.ָ������
//int main()
//{
//	//ָ�����������顣�Ǵ��ָ�������
//	int* arr3[5];
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr3[i]: %p\n", arr3[i]);
//	}
//	return 0;
//}
