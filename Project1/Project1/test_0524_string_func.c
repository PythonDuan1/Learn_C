#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//�ַ��������ַ�������

//���ַ�������
//	strlen
//���Ȳ������Ƶ��ַ�������
//	strcpy
//	strcat
//	strcmp
//���������Ƶ��ַ�����������
//	strncpy
//	strncat
//	strncmp
//�ַ�������
//	strstr
//	strtok
//������Ϣ����
//	strerror
//�ַ�����
//�ڴ��������
//	memcpy
//	memmove
//	memset
//	memcmp

//C�����ж��ַ����ַ����Ĵ������Ƶ��������C���Ա�����û���ַ������͵ģ��ַ���ͨ������
//�����ַ��� �л��� �ַ����� �С�
//�ַ������� ��������Щ���������޸ĵ��ַ�������


//strlen  ���ַ�������
// size_t strlen(const char *str);   ֻ��Ҫ����Ҫ���㳤�ȵ��ַ���ָ�룬���᷵�ظ��ַ����ĳ���
//�ַ����Ѿ� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ������������� '\0' )��
//����ָ����ַ�������Ҫ�� '\0' ������
//ע�⺯���ķ���ֵΪsize_t����һ���޷�������
//int main()
//{
//	char str1[] = { 1,2,3,'\0'};
//	printf("str1: %s\n", str1);
//	printf("str1 len : %d\n", strlen(str1));
//	char str2[] = { '1','2','3','\0' };
//	printf("str2: %s\n", str2);
//	printf("str2 len : %d\n", strlen(str2));
//	printf("str1��str2��ֵ�����%d\n", strcmp(str1, str2));
//	//char* str1 = "abcdef";
//	//char* str2 = "bbb";
//	//printf("str1 len : %d\n", strlen(str1));
//	//printf("str2 len : %d\n", strlen(str2));
//	//if (strlen(str1) > strlen(str2))
//	//{
//	//	printf("str1 > str2\n");
//	//}
//	//else
//	//{
//	//	printf("str1 < str2\n");
//	//}
//
//	return 0;
//}

//strcpy
//char* strcpy(char* destination, const char* source);
//int main()
//{
//	char str1[] = "hello world";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "heiheihei!!");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//
//	return 0;
//}

//strcat
//char * strcat ( char * destination, const char * source );
//��Դ�ַ��� �ĸ������ӵ�Ŀ���ַ�����destination�е���ֹ���ַ���source�ĵ�һ���ַ����ǣ�
//������destination�н����������γɵ����ַ�����ĩβ����һ�����ַ���
//Ŀ�ĵغ���Դ�����ص���
//int main()
//{
//	char str[80];
//	strcpy(str, "these ");
//	strcat(str, "strings ");
//	strcat(str, "are ");
//	strcat(str, "concatenated.");
//	puts(str);  //int puts ( const char * str ); ��strָ���C �ַ���д���׼���( stdout ) ������һ�����з� ( '\n' )�� 
//
//	return 0;
//}


//strcmp
//int strcmp(const char* str1, const char* str2);
// �� C �ַ���str1�� C �ַ���str2���бȽϡ�
//�˺�����ʼ�Ƚ�ÿ���ַ����ĵ�һ���ַ���������Ǳ˴���ȣ������ִ�к����ԣ�ֱ���ַ���ͬ�򵽴���ֹ���ַ�Ϊֹ��
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������

//int main()
//{
//	char key[] = "apple";
//	char buffer[80];
//	printf("�����룺\n");
//	scanf("%79s", buffer);
//	printf("bufffer: %s\n", buffer);
//	printf("key vs buffer: %d\n", strcmp(key, buffer));
//
//	return 0;
//}


//strncpy
//char* strncpy(char* destination, const char* source, size_t num);
// ��source�� ǰnum���ַ����Ƶ�destination
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num��
//int main()
//{
//	char str1[] = "to be or not to be";
//	char str2[40];
//	char str3[40];
//
//	return 0;
//}
