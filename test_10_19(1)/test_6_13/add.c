#define _CRT_SECURE_NO_WARNINGS

//全局变量
//static int g_val = 2022;



static int Add(int x, int y)
{
	return x + y;
}
//函数是具有外部链接属性的
//一个函数本来是有外部链接属性的,但是被static修饰的时候,
//外部属性就变成了内部链接属性,其他源文件(.c)就无法使用了