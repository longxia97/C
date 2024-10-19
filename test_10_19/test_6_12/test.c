#define _CRT_SECURE_NO_WARNINGS
//
//int Add(int x, int y)
//{
//	int z = 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a,b);
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int sum = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n" ,sum);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[4] = { 'b', 'i', 't' };
//	//不完全初始化,剩余的部分默认初始化为0
//	// 
//	//[b i t][           ?           ]
//	printf("%d\n", strlen(arr));//随机值
//	return 0;
//}
// 

//int Max(int x,int y) 
//{
//	if (x > y)
//		return x;
//	else 
//		return y;
//	}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//求两个整数的较大值
//	int r = Max(a , b);
//	printf("%d\n", r);
//	return 0;
//}


//
//int main()
//{
//	//输入
//	
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	//输出
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//	return 0;
//}

//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//
//	a = a + 3;//a=23
//	a += 3;
//	a -= 3;
//	a = a - 3;
//
//
//	return 0;
//
//}


//c语言中
//0表示假
//非0表示真
//

//int main()
//{
	//	int flag = 2;
	//	if (!flag)
	//	{
	//		printf("hehe\n");
	//	}
	//	return 0;
	//}

	//sizeof是操作符,是单目操作符
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));// 40 计算的整个数组的大小,单位是字节
//
//	printf("%d\n", sizeof(arr[0]));// 4
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));// 10 -数组的元素个数
//
	//return 0;
 // }

	//exp1 ? exp2 : exp3
//	int a = 100;
//	int b = 20;
//	int r = (a > b ? a : b);
//	printf("%d\n", r);
//
//	return 0;
//}
	 

//
//#include <stdio.h>
// int Add(int x, int y)
// {
//	 return x + y;
//}
//int main()
//{
//	int sum = Add(2 , 4);
//	printf("%d\n", sum);//()就是函数操作符,Add,2,3都是()的操作数
//	return 0;
//}

 