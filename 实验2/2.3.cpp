#include<iostream>
using namespace std;
int main() {
	cout << "�����������������߳�" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	int s;
	if (((a + b) > c)&&((a+c)>b)&&((b+c)>a)) {
		if ((a = b)||(a=c)||(b=c)) { cout << "���������ǵ���������"; }
		else { cout << "�������β��ǵȱ�������"; }
	}
	else { cout << "���ܹ���������!"; }
}