// 30-10241510431-������

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool is_prime(int n);

int main()
{
	int k = 0;

	cout << " ��λ�������е������У�\n";
	for (int n = 100; n < 1000; n++)
		if (is_prime(n))
		{
			cout << setw(5) << n;
			k++;
			if (k % 10 == 0)
				cout << endl;
		}

	return 0;
}

bool is_prime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}
