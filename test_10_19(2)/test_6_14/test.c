#define _CRT_SECURE_NO_WARNINGS
//C������[�ṹ��]�ĳ����������
// 
// �������鶼�ܲ�ֳ������ֽṹ
// 
//˳��ṹ

//ѡ��ṹif switch

////ѭ���ṹfor while do while
//#include <stdio.h>
//int main()
//{
	/*int a = 10;
	if (a == 3)
		printf("hehe\n");*/

	/*int age = 10;
	if (age >= 18)
		printf("����\n");*/
	//int age = 10;
	//if (age <= 18)
	// �������Ҫ�Ӵ�����
	//{
	//	printf("δ����\n");
	//	printf("��������\n");
	//}
	//else
	//{
	//	printf("����\n");
	//}
	/*int age = 10;
	scanf("%d", &age);
	if (age < 18)
		printf("������\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 40)
		printf("����\n");
	else if (age > 40 && age < 60)
		printf("׳��\n");
	else if (age >= 60 && age <= 100)
		printf("����\n");
	else
		printf("������\n");
	return 0;
}*/
	/*int main()
{
		int age = 20;
		if (age < 18)
			printf("δ����\n");
	
		else
		{
			printf("����\n");
			printf("����Ϸ\n");
		}
		return 0;
	}*/
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else//else�������ifƥ��
//			printf("haha\n");
//	}
//	return 0;
//}
//1.����������(������,�淶)
//2.�ո�,����,����
//int main()
//{
//	char firstname[20] = {0};
//	char first_name[20] = { 0 };
//	char FirstName[20] = { 0 };
//
//	return 0;
//  }



//int test()
//{
//	int a = 4;
//	if (3 == a)
//		return 1;
//	else
//	return 0;
//	}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}
//int main()
//{
//	int num = 1;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	//�ж�һ�����Ƿ�Ϊ����
//	int num = 0;
//
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("numΪ����\n");
//	else
//		printf("No\n");
//	return 0;
//}

//���1-100֮�������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//			printf("%d\n", i);
//		i+=2;
//	}
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
////	if (1 == day)
////		printf("����һ\n");
////	else if (2 == day)
////		printf("���ڶ�\n");
////	else if......
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("ѡ�����");
//		break;
//	}
//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int n = 1;
//    int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	while(1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//whileѭ����
//break���������õ���ֹѭ��
//continue ��������ѭ����ߵĴ���,ֱ��ȥ�жϲ���,������һ��ѭ�����ж�
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//
//int main()
//{
	//int ch = 0;
	//while (getchar());
	//EOF;//end of file
	//int ch = getchar();
	//printf("%c\n", ch);//1
	//putchar(ch);//2
///////*
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//��һ������
//����������һ���ַ���
//char password[20] = { 0 };
//printf("����������:>");
//scanf("%s", password);
////
////getchar();
//int ch = 0;
//while ((ch = getchar()) != '\n')
//{
//	;
//}
//printf("��ȷ������(Y/N):>");
//int ret = getchar();
//if ('Y' == ret)
//{
//	printf("Yes\n");
//}
//else {
//	printf("No\n");
//}
//	return 0;
//
//}


//#include <stdio.h>
//	int main()
//	{
//		int ch = 0;
//		while ((ch = getchar()) != EOF)
//			putchar(ch);
//		return 0;
//	}

#include <stdio.h>
//	int main()
//	{
//		char ch = '\0';
//		while ((ch = getchar()) != EOF)
//		{
//			if (ch < '0' || ch > '9')
//				continue;
//			putchar(ch);
//		}
//		//ֻ��ӡ�����ַ�
//		return 0;
//	}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num%2 == 1)
//	{
//		printf("num������");
//	}
//	else
//	{
//		printf("No");
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 1;
//
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d ", num);
//		}
//		num++;
//	}
//
//	return 0;
//}

int main()
{
	int password[20] = { 0 };
	printf("����������:->");
	scanf("%s", password);
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	//getchar();//��ȡ��\n 
	printf("��ȷ������");
	int ret = getchar();
	
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
 }