#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <windows.h> //winͷ�ļ�

//int main()
//{
//    //printf("%ld\n", strlen("quit"));
//    FILE* fp = NULL;
//    //char file[200];
//    //char cc = '\n';
//    //int n = 12;
//    int i;
//    fp = fopen("writefile.txt", "a+");
//    if (fp == NULL) {
//        printf("Open file failed\n");
//    }
//    else
//    {
//        printf("Open file successfully\n");
//        //scanf("Ԥ��ѭ��%d��",&n);	//ȷ��ѭ��n��
//
//        for (i = 1; i <= 10; i++)
//        {
//            //scanf("%s", file);
//            //fputs(file, fp);
//            //printf("--->>>%s %ld %ld\n", file, sizeof(file), strlen(file));
//            //fputc(cc, fp);
//            //int m;
//            //m = strcmp(file, "quit");
//            //printf("Is equal %d\n", m);
//            //if (m == 0) {
//            //    printf("equal\n");
//            //    break;
//            //}
//            //else
//            //{
//            //    printf("not equal\n");
//            //}
//            //fflush(fp);
//
//            //fp = fopen("file.txt", "w");
//            char str[] = "This is runoob.com\0";
//            printf("д��ȴ�2s..\n");
//            Sleep(2000);
//            fwrite(str, sizeof(str), 1, fp);
//            fflush(fp);
//        }
//        //ѭ��д����ϣ��ر��ļ�
//        printf("ѭ��д����ϣ��ر��ļ�\n");
//        fclose(fp);
//    }
//    return 0;
//}