#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

//int main()
//{
//	int input = 0;
//	printf("Ҫ�ú������<1/0>\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("�ã�\n");
//	}
//	else
//	{
//		printf("����---\n");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	int num = 30;
//	while (line < num)
//	{
//		printf("write code:%d....\n", line);
//		line++;
//	}
//	if (line == num)
//	{
//		printf("good offer!!\n");
//	}
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//
//	int sum = Add(num1, num2);
//	printf("sum:%d", sum);
//
//	return 0;
//}


//int main()
//{
//	//���� -- 1����ͬ���͵�Ԫ�صļ���
//	// 10������ 1-10 ������
//	// ����Ĵ����ͳ�ʼ��,�������±�������
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("i:%d\n", arr[i]);
//		i++;
//	}
//	//�ַ�����
//	// ����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//	char ch[5] = { 'a','b','c' };
//
//	return 0;
//}


//int main()
//{
//	//sizeof ��һ�������������Ǻ���
//	//�����������ͻ��߱����Ĵ�С
//	int arr[10] = { 0 };
//	//���������ܴ�С����λ���ֽ�
//	printf("arr��С:%d\n", sizeof(arr));
//	printf("arr[0]��С:%d\n", sizeof(arr[0]));
//	printf("arr[1]��ֵ:%d\n", arr[1]);
//	printf("int��С:%d\n", sizeof(int));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("���鳤��:%d\n", sz);
//
//	//��λȡ��(������ȡ��)
//	int a = 0;
//	printf("a��λȡ����%d\n", ~a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = ++a;  //ǰ��++ ,��ʾ��++,��ʹ��
//
//	//printf("b:%d\n", b); // 11
//	//printf("a:%d\n", a); // 11
//
//	int b = a++;  //����++ ,��ʾ��ʹ��(b=a),��++ (a++)
//
//	printf("b:%d\n", b); // 10
//	printf("a:%d\n", a); // 11
//
//
//	return 0;
//}


//ǿ������ת��
//int main()
//{
//	//int a = 3.14;
//	int a = (int)3.14;  // double����ǿ��ת��Ϊint
//
//	printf("a:%d\n", a);
//
//	return 0;
//}

//// �߼�������  &&��  ||��
//int main()
//{
//	int a = 0;
//	int b = 6;
//
//	int c = a && b;
//	int d = a || b;
//
//	printf("��--- c:%d\n", c);
//	printf("��--- d:%d\n", d);
//
//	return 0;
//}



//��������������Ŀ��������
// exp1 ? exp2 : exp3
// exp1 ��������� exp2���㣬�������ʽ����ǣ�exp2�Ľ��
// exp1 ����������� exp3���㣬�������ʽ����ǣ�exp3�Ľ��
//int main()
//{
//	int a = 12;
//	int b = 9;
//	int max = 0;
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//
//	max = a > b ? a : b;
//
//	printf("max:%d\n", max);
//
//	return 0;
//}


// ���ű��ʽ
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	// ���ű��ʽ���Ǵ����������μ����
//	// �������ʽ�Ľ�������һ�����ʽ�Ľ��(�� b = c + 2 �Ľ��)
//	printf("d:%d\n", d);
//
//	return 0;
//}


//int main()
//{
//	// ����Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	register int num = 100; //����num��ֵ����ڼĴ�����
//	return 0;
//}


// typedef �����ض��壬����������
typedef unsigned int u_int;

//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 50;
//
//	return 0;
//}

//static --��̬��
// 1.static���ξֲ�����
// 2.static����ȫ�ֱ���
// 3.static���κ���

//void test()
//{
//	//int a = 1; //�ֲ��������������ý���������  ����� a:2 a:2 a:2 a:2 a:2 a:2 a:2 a:2 a:2 a:2
//	static int a = 1; //��̬����,static���ξֲ��������ı��˾ֲ��������������ڣ����������̬�����Ż����٣������ϸı��˱����Ĵ洢���ͣ�,��� a:2 a:3 a:4 a:5 a:6 a:7 a:8 a:9 a:10 a:11
//	a++;
//	printf("a:%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}


//��������  extern�����ⲿ����
extern int g_val;
//int g_val;

//int main()
//{
//	printf("g_val:%d\n",g_val);
//	return 0;
//}

// ��������
//extern int Add(int x, int y);
//int main()
//{
//	int a = 25;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum= %d\n", sum);
//
//	return 0;
//}


//define ��һ��Ԥ����ָ��,	���峣���ͺ�
// 
// 1.define �������
//#define MAX 1000
//int main()
//{
//	printf("max=%d\n", MAX);
//	return 0;
//}

//2.define�����
#define ADD(x,y) x+y                 //4*2+3=11
//#define ADD(x,y) ((x)+(y))             //4*(2+3)=20
//int main()
//{
//	printf("��:%d\n", 4 * ADD(2, 3));
//	return 0;
//}


//ָ�� ���ǵ�ַ   &ȡ��ַ������
//int main()
//{
//	int a = 30;  // int �������ڴ��з���ռ� - 4���ֽ�
//	printf("a�ĵ�ַ:%p\n", &a); //  %p ר��������ӡ��ַ��
//	int* pa = &a; //pa������ŵ�ַ�ģ���c������pa��ָ�����
//	// * ˵��pa��ָ�����
//	// int ˵��paָ��Ķ�����int���ͣ�paָ���a��int���ͣ�
//	printf("a�ĵ�ַ:%p\n", pa);
//
//	char ch = "w";
//	char* pc = &ch;
//	printf("ch�ĵ�ַ:%p\n", pc);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 45; // *�����ò�������*pa����ͨ��pa����ĵ�ַ���ҵ�a
//	printf("a��Ϊ:%d\n", a);
//
//	return 0;
//}


//ָ������Ĵ�С
//int main()
//{
//	printf("ָ�������С:%d\n",sizeof(char*));
//	printf("ָ�������С:%d\n",sizeof(short*));
//	printf("ָ�������С:%d\n",sizeof(int*));
//	printf("ָ�������С:%d\n",sizeof(long*));
//	printf("ָ�������С:%d\n",sizeof(long long*));
//	printf("ָ�������С:%d\n",sizeof(float*));
//	printf("ָ�������С:%d\n",sizeof(double*));
//
//	return 0;
//}



//�ṹ��
//�ṹ�������c���Դ����µ�����

//����ѧ������
struct Stu
{
	char name[20];
	int age;
	double score;
};

//�����������
struct Book
{
	char name[20];
	float price;
	char id[30];
};


//int main()
//{
//	struct Stu s = { "����", 18, 85.6 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1: ����:%s,����:%d,����:%lf\n", s.name, s.age, s.score); //�ṹ���Ԫ�ط���: �ṹ�����.��Ա����
//	//�ṹ��ָ��
//	struct Stu* ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);  // �ṹ��ָ��->��Ա������
//
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age >= 18)
//	{
//		printf("�����ˣ�\n");
//	}
//	else
//	{
//		printf("��û�г��꣡\n");
//		printf("����̸������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age >= 18)
//		printf("�����ˣ�\n");
//	else
//		// if else �������������{}����ôĬ��ֻ�ܿ���һ����䣻
//		printf("��û�г��꣡\n");
//		printf("����̸������\n");
//	return 0;
//}

