#define _CRT_SECURE_NO_WARNINGS
//C语言是[结构化]的程序设计语言
// 
// 所有事情都能拆分成这三种结构
// 
//顺序结构

//选择结构if switch

////循环结构for while do while
//#include <stdio.h>
//int main()
//{
	/*int a = 10;
	if (a == 3)
		printf("hehe\n");*/

	/*int age = 10;
	if (age >= 18)
		printf("成年\n");*/
	//int age = 10;
	//if (age <= 18)
	// 多条语句要加大括号
	//{
	//	printf("未成年\n");
	//	printf("不能饮酒\n");
	//}
	//else
	//{
	//	printf("成年\n");
	//}
	/*int age = 10;
	scanf("%d", &age);
	if (age < 18)
		printf("青少年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 40)
		printf("中年\n");
	else if (age > 40 && age < 60)
		printf("壮年\n");
	else if (age >= 60 && age <= 100)
		printf("老年\n");
	else
		printf("老寿星\n");
	return 0;
}*/
	/*int main()
{
		int age = 20;
		if (age < 18)
			printf("未成年\n");
	
		else
		{
			printf("成年\n");
			printf("打游戏\n");
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
//		else//else跟最近的if匹配
//			printf("haha\n");
//	}
//	return 0;
//}
//1.变量的命名(有意义,规范)
//2.空格,空行,换行
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
//	//判断一个数是否为奇数
//	int num = 0;
//
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("num为奇数\n");
//	else
//		printf("No\n");
//	return 0;
//}

//输出1-100之间的奇数
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
////		printf("星期一\n");
////	else if (2 == day)
////		printf("星期二\n");
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
//		printf("选择错误");
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
//		{//switch允许嵌套使用
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

//while循环中
//break是用于永久的终止循环
//continue 跳过本次循环后边的代码,直接去判断部分,进行下一次循环的判断
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
//举一个例子
//假设密码是一个字符串
//char password[20] = { 0 };
//printf("请输入密码:>");
//scanf("%s", password);
////
////getchar();
//int ch = 0;
//while ((ch = getchar()) != '\n')
//{
//	;
//}
//printf("请确认密码(Y/N):>");
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
//		//只打印数字字符
//		return 0;
//	}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num%2 == 1)
//	{
//		printf("num是奇数");
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
	printf("请输入密码:->");
	scanf("%s", password);
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	//getchar();//读取了\n 
	printf("请确认密码");
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