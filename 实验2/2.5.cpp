#include<iostream>
/*��������2.5
���ܣ�ͳ��һ�仰��Ӣ����ĸ���ֿո�ĸ���*/
using namespace std;
int main() {
	int a = 0, b = 0, d = 0, z = 0;
	char c='c';
	cout << "������һ��Ӣ�Ļ����֣��Իس�����" << endl;
	for (;c!='\n'; ) {
		c = getchar();

		if (48 <= int(c) && int(c) <= 57)
		{
			a++;
		}
		else if ((65 <= int(c) && int(c) <= 90) || (97 <= int(c) && int(c) <= 122))//��ASCII��ͳ����ĸ
		{
			b++;
		}
		else if (c == 32)//�ո�ASCII����32
		{
			d++;
		}
		else {
			z++;
		}//�����ַ�
	}

	cout << "������" << a << "\n" << "��ĸ��" << b << "\n" << "�ո���" << d << "\n" << "�����ַ���(���������з�)" << z-1 << endl;
}