#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[] = {73, 32 , 99 , 97, 110, 32, 100, 111, 32, 105, 116, 33};
//	int i = 0;
//	//sizeof(arr) - �������������ܴ�С,��λ���ֽ�
//	//sizeof(arr[0]) - �����������Ԫ�صĴ�С
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
//	//��������
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//		//���
//		printf("year=%d\n", year);
//	printf("month=%02d\n", month);//01�����Ļ���0������
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
//	//����
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//���
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
//	int i = 1;//��ʼ��
//	while (i <= 10)//�ж�
//	{
//		printf("%d", i);
//		i++;//����
//		}
//	return 0;
//}
//��ӡ1-10
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//
//		if (i == 5)
//			continue;//��������ѭ����ߵĴ���
//		printf("%d ", i);
//	}
//	return 0;
//}
  

////����ǰ�պ󿪵�д��
//int main()
//{
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	////0~9
	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//forѭ�����жϲ���ʡ����ζ�����жϻ�����
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
	//		printf("hehe\n");//��ӡ9��

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


//����n�Ľ׳�
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
//    ��һ�����������в��Ҿ����ĳ������n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ���,�±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//Ь
//������300,���
//1,2,3,4,5 ..... err
//1- 150 225 ...



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 71;
	//��һ�����������в��Ҿ����ĳ������n
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
			printf("�ҵ���,�±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}