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

//#define DAY 7//�곣��
//
//int main()//���������������޸�
//{
//	cout << "һ���� " << DAY << " ��" << endl;
//
//	const int month = 12;//const���εĳ�����
//	cout << "һ���� " << month << " ����" << endl;
//
//	return 0;
//}

//int main()//sizeof�ؼ���
//{
//	cout << "short������ռ�ڴ�ռ�Ϊ��" << sizeof(short) << endl;
//	cout << "int������ռ�ڴ�ռ�Ϊ��" << sizeof(int) << endl;
//	cout << "long������ռ�ڴ�ռ�Ϊ��" << sizeof(long) << endl;
//	cout << "long long������ռ�ڴ�ռ�Ϊ��" << sizeof(long long) << endl;
//	//������ռ�ڴ�ռ䣺short < int <= long <= long long
//
//	return 0;
//}

//int main()//������
//{
//	float f = 3.1415926f;//��vs2013��������float��double����Чλ������6
//	double d = 3.1415926;
//
//	cout << "f = " << f << endl;
//	cout << "d = " << d << endl;
//
//	//��ѧ������
//	float f1 = 3e2;//��ʾ f1 = 3* 10^2
//	double d1 = 3e-2;//��ʾ d1 = 3* 0.1^2
//
//	cout << "f1 = " << f1 << endl;
//	cout << "d1 = " << d1 << endl;
//
//	return 0;
//}

//int main()//�ַ���
//{
//	char ch = 'a';
//	cout << ch << endl;
//	cout << sizeof(char) << endl;
//
//	//ch = "abcde"; //���󣬲�������˫����
//	//ch = 'abcde'; //���󣬵�������ֻ������һ���ַ�
//
//	cout << (int)ch << endl;  //�鿴�ַ�a��Ӧ��ASCII��
//	ch = 97; //����ֱ����ASCII���ַ��ͱ�����ֵ
//	cout << ch << endl;
//
//	return 0;
//}

//int main()//����ת���ַ�
//{
//	cout << "\\" << endl;//��б��
//	cout << "\tHello" << endl;//ˮƽ�Ʊ������������������
//	cout << "\n" << endl;//����
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
//int main()//�ַ���
//{
//	//char str[] = "hello world";//C���Է��
//
//	string str = "hello world";//C++���Ҫ��ͷ�ļ�<string>
//
//	cout << str << endl;
//
//	return 0;
//}

//int main()//��������
//{
//	bool flag = false;
//	cout << flag << endl;//0
//
//	flag = true;
//	cout << flag << endl;//1
//
//	cout << "bool������ռ�ڴ�ռ�Ϊ��" << sizeof(bool) << endl;//1
//
//	return 0;
//}

//int main()//���ݵ�����cin
//{
//	//��������
//	int a = 0;
//	cout << "���������ͣ�";
//	cin >> a;
//	cout << a << endl;
//
//	//����������
//	float f = 0.0f;
//	cout << "�����븡���ͣ�";
//	cin >> f;
//	cout << f << endl;
//
//	//�ַ�������
//	char ch = 'a';
//	cout << "�������ַ��ͣ�";
//	cin >> ch;
//	cout << ch << endl;
//
//	//�ַ�������
//	string str = "abc";
//	cout << "�������ַ�����";
//	cin >> str;
//	cout << str << endl;
//
//	//bool����
//	bool flag = true;
//	cout << "�����벼�����ͣ�";
//	cin >> flag;
//	cout << flag << endl;
//
//	return 0;
//}

//#include <ctime>
//
//int main()//������,0~100
//{
//	int num = 0;
//	int input = 0;
//	int i = 5;
//	srand((unsigned int)time(NULL));
//	num = rand() % 100 + 1;//���������
//
//	cout << "��������Ϸ��������Χ0~100��������λ���" << endl;
//	
//	while (i)
//	{
//		cout << "������֣�";
//		cin >> input;
//		if (input > num)
//		{
//			cout << "�´���" << endl;
//		}
//		else if (input < num)
//		{
//			cout << "��С��" << endl;
//		}
//		else if (input == num)
//		{
//			cout << "��ϲ�㣬�¶��ˣ�" << endl;
//			break;
//		}
//		i--;
//	}
//	
//	if (num != input)
//	{
//		cout << "Game Over �����þ���" << endl;
//	}
//
//	return 0;
//}

//������do��while��䣬�������3λ���е�ˮ�ɻ���
//int main()//ˮ�ɻ���
//{
//	int num = 100;
//	do
//	{
//		int a = num % 10;//��λ
//		int b = num / 10;//ʮλ
//		b %= 10;
//		int c = num / 100;//��λ
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

//��ϰ������������
//������������1��ʼ��������100��������ָ�λ����7����������ʮλ����7
//���߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i%7==0 || i%10==7 || i/10==7)
//		{
//			cout << "������" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//
//	return 0;
//}

//��ϰ�������žų˷��ھ���
//��������������Ƕ��ѭ����ʵ�־žų˷���
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