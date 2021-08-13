#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;

//int main()//hello world
//{
//	cout << "hello world" << endl;
//
//	system("pause");
//
//	return 0;
//}

//#define DAY 7//宏常量
//
//int main()//常量，常量不可修改
//{
//	cout << "一周有 " << DAY << " 天" << endl;
//
//	const int month = 12;//const修饰的常变量
//	cout << "一年有 " << month << " 个月" << endl;
//
//	return 0;
//}

//int main()//sizeof关键字
//{
//	cout << "short类型所占内存空间为：" << sizeof(short) << endl;
//	cout << "int类型所占内存空间为：" << sizeof(int) << endl;
//	cout << "long类型所占内存空间为：" << sizeof(long) << endl;
//	cout << "long long类型所占内存空间为：" << sizeof(long long) << endl;
//	//整型所占内存空间：short < int <= long <= long long
//
//	return 0;
//}

//int main()//浮点型
//{
//	float f = 3.1415926f;//在vs2013编译器中float和double的有效位数都是6
//	double d = 3.1415926;
//
//	cout << "f = " << f << endl;
//	cout << "d = " << d << endl;
//
//	//科学记数法
//	float f1 = 3e2;//表示 f1 = 3* 10^2
//	double d1 = 3e-2;//表示 d1 = 3* 0.1^2
//
//	cout << "f1 = " << f1 << endl;
//	cout << "d1 = " << d1 << endl;
//
//	return 0;
//}

//int main()//字符型
//{
//	char ch = 'a';
//	cout << ch << endl;
//	cout << sizeof(char) << endl;
//
//	//ch = "abcde"; //错误，不可以用双引号
//	//ch = 'abcde'; //错误，单引号内只能引用一个字符
//
//	cout << (int)ch << endl;  //查看字符a对应的ASCII码
//	ch = 97; //可以直接用ASCII给字符型变量赋值
//	cout << ch << endl;
//
//	return 0;
//}

//int main()//部分转义字符
//{
//	cout << "\\" << endl;//反斜杠
//	cout << "\tHello" << endl;//水平制表符，可用以整齐排列
//	cout << "\n" << endl;//换行
//
//	return 0;
//}

//int main()
//{
//	cout << "aaaa\tabc" << endl;
//	cout << "aa\tabc" << endl;
//	cout << "aaaaaa\tabc" << endl;
//
//	return 0;
//}

//#include <string>
//
//int main()//字符串
//{
//	//char str[] = "hello world";//C语言风格
//
//	string str = "hello world";//C++风格，要引头文件<string>
//
//	cout << str << endl;
//
//	return 0;
//}

//int main()//布尔类型
//{
//	bool flag = false;
//	cout << flag << endl;//0
//
//	flag = true;
//	cout << flag << endl;//1
//
//	cout << "bool类型所占内存空间为：" << sizeof(bool) << endl;//1
//
//	return 0;
//}

//int main()//数据的输入cin
//{
//	//整型输入
//	int a = 0;
//	cout << "请输入整型：";
//	cin >> a;
//	cout << a << endl;
//
//	//浮点型输入
//	float f = 0.0f;
//	cout << "请输入浮点型：";
//	cin >> f;
//	cout << f << endl;
//
//	//字符型输入
//	char ch = 'a';
//	cout << "请输入字符型：";
//	cin >> ch;
//	cout << ch << endl;
//
//	//字符串输入
//	string str = "abc";
//	cout << "请输入字符串：";
//	cin >> str;
//	cout << str << endl;
//
//	//bool输入
//	bool flag = true;
//	cout << "请输入布尔类型：";
//	cin >> flag;
//	cout << flag << endl;
//
//	return 0;
//}

//#include <ctime>
//
//int main()//猜数字,0~100
//{
//	int num = 0;
//	int input = 0;
//	int i = 5;
//	srand((unsigned int)time(NULL));
//	num = rand() % 100 + 1;//生成随机数
//
//	cout << "猜数字游戏！！！范围0~100，共有五次机会" << endl;
//	
//	while (i)
//	{
//		cout << "请猜数字：";
//		cin >> input;
//		if (input > num)
//		{
//			cout << "猜大了" << endl;
//		}
//		else if (input < num)
//		{
//			cout << "猜小了" << endl;
//		}
//		else if (input == num)
//		{
//			cout << "恭喜你，猜对了！" << endl;
//			break;
//		}
//		i--;
//	}
//	
//	if (num != input)
//	{
//		cout << "Game Over 次数用尽！" << endl;
//	}
//
//	return 0;
//}

//请利用do…while语句，求出所有3位数中的水仙花数
//int main()//水仙花数
//{
//	int num = 100;
//	do
//	{
//		int a = num % 10;//个位
//		int b = num / 10;//十位
//		b %= 10;
//		int c = num / 100;//百位
//
//		if ((a*a*a + b*b*b + c*c*c) == num)
//		{
//			cout << num << endl;
//		}
//
//		num++;
//
//	} while (num < 1000);
//
//	return 0;
//}

//练习案例：敲桌子
//案例描述：从1开始数到数字100，如果数字个位含有7，或者数字十位含有7
//或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i%7==0 || i%10==7 || i/10==7)
//		{
//			cout << "敲桌子" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//
//	return 0;
//}

//练习案例：九九乘法口诀表
//案例描述：利用嵌套循环，实现九九乘法表
int main()
{
	int i = 0;
	int j = 0;
	
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << j << "*" << i << " = " << i*j << "  ";
		}
		cout << "\n";
	}

	return 0;
}