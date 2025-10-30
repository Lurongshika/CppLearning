// for
// 输入一个正整数，输出它的所有因子 

#include <iostream>
using namespace std;

int main()
{
	int n, k;
	
	cout << "Please input a positive integer: ";
	cin >> n;
	cout << "n = " << n << endl << endl;
	
    cout << "Its factors: " << endl;	
	for (k = 1; k <= n; k++)
		if (n % k == 0)
			cout << k << "  ";

    cout << endl;
	
	return 0;
}
