#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[] = {73, 32 , 99 , 97, 110, 32, 100, 111, 32, 105, 116, 33};
//	int i = 0;
//	//sizeof(arr) - 计算的是数组的总大小,单位是字节
//	//sizeof(arr[0]) - 计算的是数组元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//     
//	return 0;
//}

//int main()
//{
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//		//输出
//		printf("year=%d\n", year);
//	printf("month=%02d\n", month);//01不够的话拿0来补充
//	printf("date=%02d\n", date);//01
//	return 0;
//}

//int main()
//{
//	int id = 0;
//	float c = 0.0f;	
//	float math = 0.0f;
//	float eng = 0.0f;
//
//	//输入
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//输出
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
//
//
//	return 0;
//} 
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//	return 0;
//}
//
//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断
//	{
//		printf("%d", i);
//		i++;//调整
//		}
//	return 0;
//}
//打印1-10
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//
//		if (i == 5)
//			continue;//跳过本次循环后边的代码
//		printf("%d ", i);
//	}
//	return 0;
//}
  

////采用前闭后开的写法
//int main()
//{
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	////0~9
	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//for循环的判断部分省略意味着这判断会恒成立
	/*for (;;)
	{
		printf("hehe\n");
	}*/
	//int i = 0;
	//int j = 0;
	//for ( i = 0; i < 3; i++)
	//{
	//	for(j = 0; j < 3; j++)
	//	{
	//		printf("hehe\n");//打印9次

	//	}
	//}
	   

//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//计算n的阶乘
//1*2*3.....*n
//

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for ( i = 1;i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for ( i = 1;i <= 3; i++)
//	{
//		ret = ret * i;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//    在一个有序数组中查找具体的某个数组n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了,下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//鞋
//不超过300,你猜
//1,2,3,4,5 ..... err
//1- 150 225 ...



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 71;
	//在一个有序数组中查找具体的某个数组n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	int left = 0;
	int right = sz - 1;

	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}