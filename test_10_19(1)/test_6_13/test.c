#define _CRT_SECURE_NO_WARNINGS
//
//typedef unsigned int uint;
//
//typedef struct Node;
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���
// 
// 
#include <stdio.h>
// 


//����ȫ�ֱ���
// 
//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n",g_val);
//
//	return 0;
//}

////3.���κ���
//
//extern int Add(int x , int y);//����
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a , b);
//	printf("%d\n", z);
//
//	return 0;
//}

//register - �Ĵ���
//�����ϵĴ洢�豸

//�Ĵ���(cpu)  �ռ�С,��� ��
//���ٻ���(cache)
//�ڴ�
//Ӳ��  �ռ��,��۵�  ��

//cpu ���봦����
//
//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//����3����ڼĴ���
//	return 0;
//}

//define�����ʶ������
//#define NUM 100
//
//
////#define �����
////�����в���
//#define ADD(x,y) x+y
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	/*printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = {0};*/
//	
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//�ڴ�Ữ��Ϊһ�������ڴ浥Ԫ(һ���ڴ浥Ԫ�Ĵ�С:1byte)
//ÿ���ڴ浥Ԫ����һ�����
//int main()
//{
//	int a = 10;//���ڴ�����4���ֽ�,�洢10
//	//&a;//ȡ��ַ������
//	printf("%p\n", &a);//000000DDA218FBF4
//	int* p = &a;//*˵��p��ָ�����,int˵��pָ��Ķ�����int���͵�
//	//p����ָ�����
//	//�ڴ浥Ԫ
//	//��� ->��ַ ->��ַҲ����Ϊָ��
//	//���ָ��(��ַ)�ı�������ָ�����
//	*p = 20; //�����ò�����,��˼����ͨ��p�д�ŵĵ�ַ,�ҵ�p��ָ��Ķ���,*p����pָ��Ķ���
//	printf("%d\n", a);
//	char ch = 'w';
//	  
//	char* pc = &ch;
//
//	return 0;
//}



//int main()
//{
//	//int* p;
//	//char* p2;
//	//����ʲô���͵�ָ��,�����ڴ���ָ�����
//	//ָ����������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���Ŀռ�
//	//32λ�����ϵĵ�ַ:32bitλ - 4byte,����ָ������Ĵ�С��4���ֽ�
//	//64λ�����ϵĵ�ַ:64bitλ - 8byte,����ָ������Ĵ�С��8���ֽ�
//
//
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}
//
//int main()
//{	
//   char* pc;
//   int* p;
//
//   int* p1, * p2, * p3;
//   return 0;
//  }

//char
//short
//float
//long
//double

//��:����+����+�Ա�+����+��ַ+�绰
//��:����+����+������+����+���
//
// 
// 
// ���Ӷ���


//c���Ծ͸����Զ������͵�����
//�Զ�����������һ�ֽнṹ��Ķ���
//struct
//�ṹ���ǰ�һЩ��һ���������һ��

//ѧ��
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
//	//->
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s\n",ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{	
//	struct Stu s = {"zhangsan", 20, "nan", "15596668862"};
//	
//	//�ṹ�����.��Ա��
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
  

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//
//	//����
//	/*int m = a / b;
//	int n = a % b;*/
//
//    //���
//	printf("%d %d\n",a/b ,a%b);
//	return 0;
//}

int main()
{
	int a = 10;
	&a;
	/*printf("%p\n", &a);*/
int* p = &a;
*p = 20;
printf("%d\n", a);
//	char ch = 'w';
//char* pc = &ch;
//printf("%p\n", pc);

	return 0;
}