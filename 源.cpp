//��¥������
//�ݹ齫����ֽ�Ϊ��ģ��С������
//n��̨�׵��߷�=����һ����N-1��̨�׵��߷�+���������� n-2��̨�׵��߷�
//f(n)=f(n-1)+f(n-2);
#include<iostream>
using namespace std;
int N;
int main() {
	while (cin>>N)
	{
		cout << stairs(N) << endl;
	}
	return 0;
}

int stairs(int n) {
	if (n < 0)return 0;
	if (n == 0)return 1;
	return stairs(n - 1) + stairs(n - 2);
}