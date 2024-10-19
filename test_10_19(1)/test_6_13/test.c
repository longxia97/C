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
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
// 
// 
#include <stdio.h>
// 


//修饰全局变量
// 
//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n",g_val);
//
//	return 0;
//}

////3.修饰函数
//
//extern int Add(int x , int y);//声明
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

//register - 寄存器
//电脑上的存储设备

//寄存器(cpu)  空间小,造高 快
//高速缓存(cache)
//内存
//硬盘  空间大,造价低  慢

//cpu 中央处理器
//
//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议3存放在寄存中
//	return 0;
//}

//define定义标识符常量
//#define NUM 100
//
//
////#define 定义宏
////宏是有参数
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

//内存会划分为一个个的内存单元(一个内存单元的大小:1byte)
//每个内存单元都有一个编号
//int main()
//{
//	int a = 10;//向内存申请4个字节,存储10
//	//&a;//取地址操作符
//	printf("%p\n", &a);//000000DDA218FBF4
//	int* p = &a;//*说明p是指针变量,int说明p指向的对象是int类型的
//	//p就是指针变量
//	//内存单元
//	//编号 ->地址 ->地址也被称为指针
//	//存放指针(地址)的变量就是指针变量
//	*p = 20; //解引用操作符,意思就是通过p中存放的地址,找到p所指向的对象,*p就是p指向的对象
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
//	//不管什么类型的指针,都是在创建指针变量
//	//指针是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要多大的空间
//	//32位机器上的地址:32bit位 - 4byte,所以指针变量的大小是4个字节
//	//64位机器上的地址:64bit位 - 8byte,所以指针变量的大小是8个字节
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

//人:名字+年龄+性别+对象+地址+电话
//书:书名+作家+出版社+定价+书号
//
// 
// 
// 复杂对象


//c语言就给了自定义类型的能力
//自定义类型中有一种叫结构体的东西
//struct
//结构体是把一些单一类型组合在一起

//学生
//struct Stu
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
//	//->
//	//结构体指针变量->成员名
//	printf("%s %d %s %s\n",ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{	
//	struct Stu s = {"zhangsan", 20, "nan", "15596668862"};
//	
//	//结构体对象.成员名
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
  

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//
//	//计算
//	/*int m = a / b;
//	int n = a % b;*/
//
//    //输出
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