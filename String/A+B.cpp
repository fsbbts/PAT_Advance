#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	c = a + b;
	string num = to_string(c);
	string res;
	for(int i = num.size() - 1, j = 0; i >= 0; i--)
	{
		res += num[i]; 
		++j;
		if(j % 3 == 0 && j && num[j - 1] != '-') res = ',' + res;
	}
	cout << res <<endl;
	return 0;
}
