#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int f;float c;
	std::cout << "�����뻪���¶�" << std::endl;
	std::cin >> f ;
	c = (f - 32) /1.8;
	cout << "�����¶�Ϊ"<<fixed<<setprecision(2)<< c << std::endl;
	return 0;
}