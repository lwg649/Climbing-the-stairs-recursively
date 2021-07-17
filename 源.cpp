//爬楼梯问题
//递归将问题分解为规模更小的问题
//n级台阶的走法=先走一级后，N-1级台阶的走法+先走两级后 n-2级台阶的走法
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