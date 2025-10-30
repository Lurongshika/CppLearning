// 30-10241510431-姜吉浩

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//梯形
double inf_o1(double (*f)(double), double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++)
        sum += f(a + i * h);
    return h * sum;
}

//抛物线
double inf_o2(double (*f)(double), double a, double b, int n)
{
    if (n % 2 != 0)
        n++;
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        if (i % 2 == 0)
            sum += 2 * f(x);
        else
            sum += 4 * f(x);
    }
    return h / 3 * sum;
}

int main()
{
    const double a = 0.0;
    const double b = atan(1.0) * 2.0;
    const int n = 20;

    double I1 = inf_o1(sin, a, b, n);
    double I2 = inf_o2(sin, a, b, n);

    cout << "n = " << n << endl;
    cout << "梯形近似积分: " << I1 << endl;
    cout << "抛物线近似积分: " << I2 << endl;

    return 0;
}
