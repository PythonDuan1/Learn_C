#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//int main()
//{
//	/*if (1)
//	{
//		printf("�Ǻǣ�\n");
//	}*/
//	//while (1)
//	//{
//	//	printf("�Ǻǣ�\n");
//	//}
//	int i = 1;
//	//whileѭ����,break����������ֹѭ��
//	// 
//	//whileѭ����,continue����������������ѭ��continue��ߵĴ��룬
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		break;
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	// getchar() �Ӽ����϶�ȡ�ַ�, putchar() �����ȡ���ַ�����Ļ��
//	// EOF ���ļ�������־
//	// ctrl+z  getchar �Ͷ�ȡ������
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	// %c��ʽռλ����Ӧ���ǵ����ַ�����%s��ʽռλ����Ӧ�����ַ���
//	printf("%c\n", ch);
//	putchar(ch); //���һ���ַ�
//	return 0;
//}


//int main()
//{
//	// ����س���Ҳ����������'\n'������'\n'�ᴥ��scanf���뺯��ȥ��ȡ
//	// scanf() �� getchar() �����뺯������ֱ�ӴӼ����϶�ȡ�ַ������Ǵӻ��������ȡ�ַ���
//	// ��������password,������'\n'�س��󣬴���scanf()��ȡpassword���������л���'\n'��ֱ�ӱ�getchar()��ȡ��
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password); //123456
//	printf("��ȷ������(Y/N):>");
//	//����������
//	//getchar(); //��'\n'��ȡ����,���ֻ��һ��'\n'ʱ
//	//
//	// ���������еĶ���ַ�
//	// ��Գ���'\n',���пո�����
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}