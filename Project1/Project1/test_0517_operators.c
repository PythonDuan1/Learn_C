#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

// ������
//int main()
//{
//	//2.����������      +    -   *   /   %
//	//1. ���� % ������֮�⣬�����ļ������������������������͸�������
//	//2. ���� / ���������������������Ϊ������ִ��������������ֻҪ�и�����ִ�еľ��Ǹ�����������
//	//3. % ����������������������Ϊ���������ص�������֮���������
//	printf("%d\n",10%3); //%d�����ڴ�ӡ�з���ʮ������������int�ĸ�ʽ���ַ���
//	printf("%d\n",10/3);
//	//printf("%d\n",10/3.2);
//	//printf("������: %f\n",10/3.2);
//	//printf("%d\n",10.5/3.2);
//	//printf("˫����: %lf\n",10.5/3.2);
//
//	// %f�����ڴ�ӡ�����ȸ���������float��˫���ȸ���������double�ĸ�ʽ���ַ�������%lf��ֻ���ڴ�ӡ˫���ȸ���������double��
//	double d = 3.1415926;
//	//printf("%lf\n", d); // ��ӡ3.141593
//	//printf("%f\n", d);  // ��ӡ3.141593
//	//float f = 3.14;
//	float f = 3.14f;
//	//printf("%f\n", (double)f); // ��ӡ3.140000
//	//printf("%lf\n", (double)f); // ��ӡ3.140000
//	//printf("%f\n", f); // ��ӡ3.140000
//	//printf("%lf\n", f); // ��ӡ3.140000
//
//	//3.��λ������
//	//<< ���Ʋ�����
//	//>> ���Ʋ�����
//	//ע����λ�������Ĳ�����ֻ����������
//	//int num = 10;
//	//printf("ԭnum: %d\n", num);
//	//num << 1;
//	//printf("���ƺ�δ��ֵ��num: %d\n", num);
//	//num = num << 1;
//	//printf("���ƺ�ֵ�˵�num: %d\n", num);
//	//int right = 10;
//	//printf("ԭright: %d\n", right);
//	//right >> 1;
//	//printf("���ƺ�δ��ֵ��right: %d\n", right);
//	//right = right >> 1;
//	//printf("���ƺ�ֵ�˵�right: %d\n", right);
//
//	//4.λ������
//	//& ��λ��
//	//| ��λ��
//	//^ ��λ���
//	//ע�����ǵĲ�����������������
//	//int num1 = 1;
//	//int num2 = 2;
//	//printf("��λ��: %d\n", num1 & num2);
//	//printf("��λ��: %d\n", num1 | num2);
//	//printf("��λ���: %d\n", num1 ^ num2);
//	//��C�����У�λ������������λ��(&)����λ��(| )����λ���(^)����λȡ��(~)�ȣ��������ڶԶ���������ÿһλ���в�����
//	//��λ��(&)���������ڽ��������Ķ���������ÿһλ���������㣬����Ӧλ�ϵ�����Ϊ1ʱ�����Ϊ1������Ϊ0��
//	//��λ��(| )���������ڽ��������Ķ���������ÿһλ���л����㣬����Ӧλ�ϵ�����һ��Ϊ1ʱ�����Ϊ1������Ϊ0��
//	//��λ���(^)���������ڽ��������Ķ���������ÿһλ����������㣬����Ӧλ�ϵ�����ͬʱ�����Ϊ0����ͬʱ�����Ϊ1�����磺
//	//int a = 0x3; // �����Ʊ�ʾΪ0011
//	//int b = 0x5; // �����Ʊ�ʾΪ0101
//	//int c = a ^ b; // �����Ʊ�ʾΪ0110����6
//	//printf("c: %d\n", c);
//	//��λȡ��(~)���������ڽ�һ�����Ķ���������ÿһλ����ȡ����������0��Ϊ1��1��Ϊ0��
//	
//	return 0;
//}

//������;
//���ܴ�����ʱ��������������������ʵ���������Ľ���
//��λ���(^)���������ڽ��������Ķ���������ÿһλ����������㣬����Ӧλ�ϵ�����ͬʱ�����Ϊ0����ͬʱ�����Ϊ1��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);  // a = 20 b = 10
//	return 0;
//}

//5.��ֵ�����
//int main()
//{
//	int a = 10;
//	printf("ԭa: %d\n", a);
//	a = 500;
//	printf("���¸�ֵ�� a: %d\n", a);
//	double weight = 100.268;
//	printf("ԭweight��%lf\n", weight);
//	weight = 894.56;
//	printf("weight���¸�ֵ��%lf\n", weight);
//	
//	int x = 10;
//	int y = 20;
//	int z = 50;
//	x = y = z + 1;
//	printf("x: %d\n", x);
//	printf("y: %d\n", y);
//	printf("z: %d\n", z);
//	y = z + 20;
//	x = y;
//	printf("\n");
//	printf("x: %d\n", x);
//	printf("y: %d\n", y);
//	printf("z: %d\n", z);
//	return 0;
//}


//���������
// +=
// -=
// *=
// /=
// %=
// >>=
// <<=
// &=
// |=
// ^=
//int main()
//{
//	int num = 10;
//	num += 30; // num = mun + 30
//	printf("num: %d\n", num);
//	num %= 9;
//	printf("num %= : %d\n", num);
//	return 0;
//}

// 6.��Ŀ������
//!�߼�������
//- ��ֵ
//+ ��ֵ
//& ȡ��ַ
//sizeof    �����������ͳ��ȣ����ֽ�Ϊ��λ�� ,����������ͣ���ռ�ռ�Ĵ�С��
//~��һ�����Ķ����ư�λȡ��
//--          ǰ�á�����--
//++ǰ�á�����++
//* ��ӷ��ʲ�����(�����ò�����)
//(����)ǿ������ת��
//int main()
//{
//	int a = -10;
//	int* p = NULL;
//	printf("!2  %d\n", !2);
//	printf("!0  %d\n", !0);
//	a = -a;
//	printf("a: %d\n", a);
//	p = &a;
//	printf("p: %d\n", p);
//	printf("sizeof(a)  %d\n", sizeof(a));
//	printf("sizeof(int)  %d\n", sizeof(int));
//	printf("sizeof a  %d\n", sizeof a);//����д�в��У�
//
//	return 0;
//}

// sizeof �� ����
//void test1(int arr[])
//{
//	// ָ�����Ͳ���int���͡�ָ��������һ��������������ͣ����ڴ洢�ڴ��ַ
//	// int *p��ʾָ��int���͵�ָ�룬char *p��ʾָ��char���͵�ָ��
//	// sizeof(arr)�õ��Ľ����ָ�����͵Ĵ�С
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	// sizeof(ch)�õ��Ľ����ָ�����͵Ĵ�С
//	printf("%d\n", sizeof(ch));//(4)
//}
//// ��������Ϊ������������ʱ���ᱻת����ָ��������Ԫ�ص�ָ�룬
////����ں�����ʹ��sizeof��������������Сʱ���õ��Ľ����ָ�����͵Ĵ�С���������������͵Ĵ�С
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//++��--�����
//int main()
//{
//	// ǰ��++��--
//	// ��+-����ֵ
//	//int a = 10;
//	//int x = ++a;
//	//printf("a : %d\n", a); //11
//	//printf("x: %d\n", x); //11
//	//int y = --a;
//	//printf("a : %d\n", a); //10
//	//printf("y: %d\n", y); //10
//	// ����++��--
//	//�ȸ�ֵ����+-
//	int a = 10;
//	int x = a++;
//	printf("a : %d\n", a); //11
//	printf("x: %d\n", x);  //10
//	int y = a--;
//	printf("a : %d\n", a); //10
//	printf("y: %d\n", y); //11
//	return 0;
//}

//7.��ϵ������
//  >
//  >=
//  <
//	<=
//	!=   ���ڲ��ԡ�����ȡ�
//	== ���ڲ��ԡ����

//8.�߼�������
//&& �߼���
//|| �߼���
//�����߼���Ͱ�λ��
//�����߼���Ͱ�λ��
//int main()
//{
//	printf("��λ�룺%d\n", 1 & 2); //��λ��
//	printf("�߼��룺%d\n", 1 && 2); //�߼���
//	printf("��λ��%d\n", 1 | 2); //��λ��
//	printf("�߼���%d\n", 1 || 2); //�߼���
//	return 0;
//}

//������
//int main()
//{
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	int i = 3, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n ,i = %d\n", a, b, c, d, i); 
//	//a = 1
//	//	b = 2
//	//	c = 3
//	//	d = 4
//	//	, i = 0
//	return 0;
//}


//9.����������
//exp1 ? exp2 : exp3
//int main()
//{
//	int a = 0, b = 0;
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	b = (a > 5) ? 3 : -3;
//	//b = a > 5 ? 3 : -3;
//	printf("b: %d\n", b);
//	return 0;
//}


//10.���ű���ʽ
//exp1, exp2, exp3, ��expN     --���ű���ʽ��������������ִ�С���������ʽ�Ľ�������һ������ʽ�Ľ����
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//���ű���ʽ
//	printf("c:%d\n", c); // 13
//	//int d = 10;
//	int d = -2;
//	if (a = b + 1, c = a / 2, d > 0)
//	{
//		printf("hahaha-----\n");
//	}
//	return 0;
//}

//11.3. ����һ���ṹ�ĳ�Ա 
//  . �ṹ��.��Ա��
//  ->�ṹ��ָ��->��Ա��

struct Stu
{
	char name[10];
	int age;
	char sex[5];
	double score;
};

void set_age1(struct Stu stu)
{
	stu.age = 90;
	printf("haha------------1-------------- %d\n", stu.age);
}

//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;
//}

void set_age2(struct Stu* pStu, struct Stu stu)
{
	pStu->age = 18;
	printf("haha------------2-------------- %d\n", stu.age);
}

//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu; //�ṹ��Ա����
//	stu.age = 30;
//	printf("stu.age 20: %d\n", stu.age);
//	//�� C �����У��������������ǰ�ֵ���ݵģ�
//	//�����Ҫ�ں����ڲ��޸ı�����ֵ������ʹ��ָ�봫�ݵķ�ʽ�����ݱ����ĵ�ַ��Ȼ��ͨ��ָ�����޸ı�����ֵ
//	//������ں����ڲ��޸Ľṹ���Ա���������봫�ݽṹ��ָ����Ϊ����������
//	//���ֻ���ݽṹ�����֣������ǽṹ��ָ�룬��ô�����ڲ��޷�ͨ���ṹ�����������ʺ��޸Ľṹ���Ա������
//	//��Ϊ�ں����ڲ����ṹ������ֻ��һ���ֲ�������ֻ�нṹ��ָ�����ָ��ṹ��ĵ�ַ���Ӷ����ʺ��޸Ľṹ���Ա������
//	set_age1(stu);
//	printf("stu.age 18: %d\n", stu.age);
//	pStu->age = 20;
//	printf("pStu->age 20: %d\n", stu.age);
//	//set_age2(pStu);
//	set_age2(pStu, stu);
//	printf("pStu->age 18: %d\n", stu.age);
//	float f = 3.14;
//	int num = f;//��ʽת�������о��ȶ�ʧ
//	printf("num: %d\n", num);
//	return 0;
//}
//stu.age 20: 30
//stu.age 18 : 30
//pStu->age 20 : 20
//pStu->age 18 : 18