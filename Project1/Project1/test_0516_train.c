#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// ����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("ret:%d ", ret);
//	return 0;
//}


//int count(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

// ���� 1!+2!+3!+.....+10!
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("i : %d\n", i);
//		int ret = count(i);
//		printf("ret : %d\n", ret);
//		sum += ret;
//	}
//	printf("sum:%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	// ��1��2��forѭ��
//	//for (n = 1; n <= 10; n++)
//	//{
//	//	ret = 1; // ����n�Ľ׳�֮ǰ����ret��ʼ��Ϊ1��
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret *= i;
//	//	}
//	//	sum += ret;
//	//}
//	//��2��1��forѭ��   3��= 3 * 2 * 1 = 3 * 2�� ,���� 1!+2!+3!+.....+10!
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("sum:%d", sum);
//	return 0;
//}

// ��һ�����������в���ĳ������n���±�
// ���ֲ��ң��۰���� -- ���ֲ��ҷ�����������Ԫ���б�
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 7;
//	// �� arr������������в���k���±�
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ�Ԫ�� %d ���±�Ϊ %d \n", k, mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û���ҵ�Ԫ���±꣡\n");
//	}
//
//	return 0;
//}

#include<Windows.h>
// �ַ�����������任
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	//char arr1[] = "welcome";
//	//char arr2[] = "#######";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);// ˯��1s
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("������������:>");
//		// password�����飬�������������ǵ�ַ�����Բ��ü�ȡ��ַ����&
//		scanf("%s", password);
//		//if (password == "123456") // error,�����ַ����Ƚϣ�����ʹ��'=='��Ӧ��ʹ��strcmp(),
//		// ��Ϊ'=='���ڱȽ������ַ������ַ��ĵ�ַ�������ǱȽ�����
//		// strcmp()�Ƚϵ��������ַ�����Ӧλ�����ַ���ascii��ֵ
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��ϲ�㣬��½�ɹ�����\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룺\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("3������������˳�����\n");
//	}
//	return 0;
//}


//��������Ϸ��
//1.�Զ�����һ��1-100�������
//2.�����֣�
//	a.�¶��ˣ���ϲ�㣬��Ϸ����
//	b.�´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸ����һֱ��ö��֣������˳���Ϸ
#include<stdlib.h>
#include<time.h>

void game()
{
	//1.���������
	// rand��������һ��0-32767֮�������
	int ret = rand() % 100 + 1;// %100��������0-99��Ȼ��+1����Χ����1-100
	printf("ret: %d\n", ret);

	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��!\n");
		}
		else if (guess > ret)
		{
			printf("�´��ˣ���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
			break;
		}

	}
}


void menu()
{
	printf("************************\n");
	printf("********  1.play  ******\n");
	printf("********  0.exit  ******\n");
	printf("************************\n");
}


//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}