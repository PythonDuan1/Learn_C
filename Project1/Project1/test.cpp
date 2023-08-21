#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <windows.h> //win头文件

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
//        //scanf("预计循环%d次",&n);	//确定循环n次
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
//            printf("写入等待2s..\n");
//            Sleep(2000);
//            fwrite(str, sizeof(str), 1, fp);
//            fflush(fp);
//        }
//        //循环写入完毕，关闭文件
//        printf("循环写入完毕，关闭文件\n");
//        fclose(fp);
//    }
//    return 0;
//}