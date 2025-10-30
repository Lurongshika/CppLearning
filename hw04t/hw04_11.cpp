// 30-10241510431-姜吉浩

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

const int N = 100000;
const double a = 0.0;
const double b = atan(1) * 2; // b = pi/2
const double length = b - a;  // 区间长度

double f(double x);

int main()
{
	long double S = 0.0;
	double x, y;
	int M = 0;

	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		x = a + (b - a) * rand() / double(RAND_MAX);
		y = rand() / double(RAND_MAX); 
		if (y <= f(x))
			M++;
	}

	cout << "M=" << M << ", N=" << N << endl;
	cout << "S=" << (double(M) / N) * (length * 1) << endl;

	return 0;
}

double f(double x)
{
	return sin(x);
}
