#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// goto���
//������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̡�
//���磺һ�������������ѭ����
//���ѭ���������ʹ��break�Ǵﲻ��Ŀ�ĵġ���ֻ�ܴ����ڲ�ѭ���˳�����һ���ѭ��

//goto���������ʺϵĳ������£�
//for (...)
//    for (...)
//    {
//        for (...)
//        {
//            if (disaster)
//                goto error;
//        }
//    }
//��
//error :
	//if (disaster)
	//	����������

// һ���ػ�����
//int main()
//{
//	char input[10] = { 0 };
//	//system("shutdown -s -t 60");
//	printf("�ػ����");
//again:
//	printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		//system("shutdown -a");
//		printf("ȡ���ػ��ˣ���");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}