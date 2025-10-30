// ��Բ x^2 + y^2 <= 1  

#include <iostream>
#include <cmath>

using namespace std;

const double r = 1;
const int N = 50; 

int main()
{

	double x, y;
	double h = 2.0*r/N;
	
	for (int i = 0; i <= N ; i++)
	{
		y = r - i*h;
		for (int j = 0; j <= N; j++)
		{
			x = -r + j*h;
			if ( x*x + y*y <= r*r)
				cout << "**"; // �����ַ��ĸ߶ȴ��ڿ�ȣ�����������ַ��Ŀ�Ƚ��Ƹ߶� 
			else 
				cout << "  ";
		}
		cout << endl;
	}	
	
	return 0;
}
