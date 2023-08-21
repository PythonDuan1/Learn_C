#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//字符函数和字符串函数

//求字符串长度
//	strlen
//长度不受限制的字符串函数
//	strcpy
//	strcat
//	strcmp
//长度受限制的字符串函数介绍
//	strncpy
//	strncat
//	strncmp
//字符串查找
//	strstr
//	strtok
//错误信息报告
//	strerror
//字符操作
//内存操作函数
//	memcpy
//	memmove
//	memset
//	memcmp

//C语言中对字符和字符串的处理很是频繁，但是C语言本身是没有字符串类型的，字符串通常放在
//常量字符串 中或者 字符数组 中。
//字符串常量 适用于那些对它不做修改的字符串函数


//strlen  求字符串长度
// size_t strlen(const char *str);   只需要传入要计算长度的字符串指针，它会返回该字符串的长度
//字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。
//参数指向的字符串必须要以 '\0' 结束。
//注意函数的返回值为size_t，是一个无符号整数
//int main()
//{
//	char str1[] = { 1,2,3,'\0'};
//	printf("str1: %s\n", str1);
//	printf("str1 len : %d\n", strlen(str1));
//	char str2[] = { '1','2','3','\0' };
//	printf("str2: %s\n", str2);
//	printf("str2 len : %d\n", strlen(str2));
//	printf("str1和str2的值相等吗？%d\n", strcmp(str1, str2));
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
//将源字符串 的副本附加到目标字符串。destination中的终止空字符被source的第一个字符覆盖，
//并且在destination中将两者连接形成的新字符串的末尾包含一个空字符。
//目的地和来源不得重叠。
//int main()
//{
//	char str[80];
//	strcpy(str, "these ");
//	strcat(str, "strings ");
//	strcat(str, "are ");
//	strcat(str, "concatenated.");
//	puts(str);  //int puts ( const char * str ); 将str指向的C 字符串写入标准输出( stdout ) 并附加一个换行符 ( '\n' )。 
//
//	return 0;
//}


//strcmp
//int strcmp(const char* str1, const char* str2);
// 将 C 字符串str1与 C 字符串str2进行比较。
//此函数开始比较每个字符串的第一个字符。如果它们彼此相等，则继续执行后续对，直到字符不同或到达终止空字符为止。
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字

//int main()
//{
//	char key[] = "apple";
//	char buffer[80];
//	printf("请输入：\n");
//	scanf("%79s", buffer);
//	printf("bufffer: %s\n", buffer);
//	printf("key vs buffer: %d\n", strcmp(key, buffer));
//
//	return 0;
//}


//strncpy
//char* strncpy(char* destination, const char* source, size_t num);
// 将source的 前num个字符复制到destination
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个
//int main()
//{
//	char str1[] = "to be or not to be";
//	char str2[40];
//	char str3[40];
//
//	return 0;
//}
