#include<iostream>
using namespace std;
int main() {
	float a, b;
	float l;
	int x, y;
	char c, d;
	cout << "����������һ�����͵ڶ���������˳��" << endl;
	cin >> a >> b;
	x = static_cast<int>(a);
	y = static_cast<int>(b);
	cout << "�����������" << endl;
	d = getchar();c = getchar();
	if ((b != 0 || (b == 0 && c != '/'))&&c!='%')//�ж��Ƿ�����������
	{
		switch (c)
		{
		case '+': l = a + b;break;
		case '-':l = a - b;break;
		case '*':l = a * b;break;
		case'/':l = a / b;break;	
		}
		cout << "����ǣ�" << l << endl;
	}
	else if (c == '%')//������������
	{
		if (a == x && b == y)
		{
			l = x % y;
			cout << "�����" << l << endl;
		}
		else cout << "�����ϼ������" << endl;
		return 0;
	}
}