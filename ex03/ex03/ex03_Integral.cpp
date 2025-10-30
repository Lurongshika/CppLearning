//
// 计算定积分 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

const double a = 0.0;
const double b = atan(1)*2;  // b = pi/2

int main()
{
	long n=1;  // 从一等分开始
	double x, h, S;
	
	srand(time(0));	
	cout << fixed << setprecision(10);
	cout << left;
	for(int k=0; k<20; k++)
	{
		h = (b-a)/n;
		S = 0;
		for(int i=0; i<n; i++)
		{	
			x = a + h*(i+double(rand())/RAND_MAX);
			S = S + sin(x);
		}
    	cout << "n=" << setw(8) << n << " S=" << S*h << endl;
    	n = 2*n;  // 不断增大 n 的值
    }

    return 0;
}
