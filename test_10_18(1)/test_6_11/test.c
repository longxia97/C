#define _CRT_SECURE_NO_WARNINGS

//1.���泣��
//2.const���εĳ�����
//3.define ����ı�ʶ������
//4,ö�ٳ���


#include<string.h>
#include <stdio.h>

//int main()
//{
//	//30;
//	//3.14;
//	//'w';//�ַ�
//	//"abc";//�ַ�������
//	//const int a = 10;//��C������,const���ε�a,�����Ǳ���,���ǲ���ֱ���޸�,�г���������
//	//a = 20;
//	//printf("%d\n", a);//20
//
//	const int n = 10;
//	int arr[10] = {0};
//
//	return 0;
//}

//#define MAX 100
//#define STR "abcdef"

//
//int main()
//{
//	//printf("%d\n",MAX);
//	//int a = MAX;
//	//printf("%d\n", a);
//	//printf("%s\n", STR);
//	//MAX = 200;//err
//
//
//	return 0;
//}

//ö�ٳ���
//enum Color
//{ 
//	//ö�ٳ���
//	RED,
//    GREEN,
//    BLUE,
//};
//int main()
//{
//	//��ԭɫ
//	//Red Green Blue
//
//	return 0;
//}



//int main()
//{
//	printf("\a");
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰô(1/0)?");//0  
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}


//20000����Ч����
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//���������������ĺ�

//����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int Add(int x, int y)
//{ 
//	return (x + y);
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	int t1 = 100;
//	int t2 = 300;
//	int ret = Add(t1,t2);
//
//
//	//��ӡ
//	printf("%d\n", sum);
//
//	return 0;
//}
//int main()
//////����
//{
////	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
////	/*printf("%d\n",arr[8]);*/
////	int i = 0;
////	while (i < 10)
////	{
////		printf("%d",arr[i]);
////		i++;
////	}
//   printf("abc\0def");
//
//	return 0;
//}
//int main()
//{
//
//	//printf("\a");//����һ������
//	//printf("%c\n",'\x60');
//	//printf("%d\n",strlen("abcd e"));
//	//printf("%d\n",strlen("c:\test\628\test.c")); 
//	int input = 0;
//	printf( "�������\n");
//    printf("Ҫ�ú�ѧϰô(1/0)?");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("�ؼ�������\n");
//	}
//
//	return 0;
//	
//}
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else {
//		printf("��������\n");
//	}
//	return 0;

//int Add(int x, int y) 
//{
//	/*int z = 0;
//	z = x + y;
//	return z;*/
//	return x + y;
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	printf("����n1,n2��ֵ--->");
//	scanf("%d %d",&n1, &n2);
//	//���
//	int sum = Add(n1,n2);
//
//	//��ӡ
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//int	arr[10] = {10,11,12,13,14,15,16,17,18,19};
//char ch[5];
//double d[6];
//int i = 0;
//while (i < 10)
//{
//	printf("%d ", arr[i]);
//		i = i + 1;
//}
//	return 0;
//	
//}
//int main()
//{
//	printf("    **     \n");
//	printf("    **     \n");
//	printf("    **     \n");
//	printf("********** \n");
//	printf("   *  *     \n");
//	printf("   *  *     \n");
//	printf("   *  *     \n");
//
//
//	return 0;
//}

//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c/2;
//	printf("%d\n", r);
//
//
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int r = MAX(a,b);
//	printf("%d\n", r);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("����һ��Xֵ-->");
//	scanf("%d", &x);
//	if (x < 0)
//	{
//	y = 1;
//	}
//	else if (x == 0) {
//		y = 0;
//	}
//	else
//	{
//		y = -1;
//	}
//	printf("%d\n", y);
//
//	return 0;
//}

int main()
{
	float a = 7 / 2.0;
	printf("%.2f\n", a);

	return 0;
}