// 30-10241510431-???

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

bool is_prime(long n); // ????????

int main()
{
	long p, n;

	cout << "p < 32 ???????" << endl;
	for (p = 2; p < 32; p++)
	{
		if (is_prime(p))
		{
			n = pow(2, p) - 1;
			if (is_prime(n))
			{
				cout << "p = " << setw(2) << p
					 << " ?, M_p = " << n << " ?????" << endl;
			}
		}
	}

	cout << endl;

	return 0;
}

bool is_prime(long n)
{
	if (n < 2)
		return false;
	for (long i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}
