// 30-10241510431-姜吉浩

#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n);

int main()
{
    const int n = 30;
    double e = 0.0;

    for (int i = 0; i <= n; i++)
        e += 1.0 / factorial(i);

    cout << "e的30阶泰勒展开近似值为:" << e << endl;

    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}