// 30-10241510431-姜吉浩

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int n = 50000;
    const double base = 1e14;

    float sum_left_f = (float)base;
    float sum_right_f = 0.0f;
    double sum_left_d = base;
    double sum_right_d = 0.0;

    for (int i = 1; i <= n; i++)
        sum_left_f += 1.0f / i;

    for (int i = n; i >= 1; i--)
        sum_right_f += 1.0f / i;
    sum_right_f += (float)base;

    for (int i = 1; i <= n; i++)
        sum_left_d += 1.0 / i;

    for (int i = n; i >= 1; i--)
        sum_right_d += 1.0 / i;
    sum_right_d += base;

    cout << fixed << setprecision(6);
    cout << "float 左到右: " << sum_left_f << endl;
    cout << "float 右到左: " << sum_right_f << endl;
    cout << "double 左到右: " << sum_left_d << endl;
    cout << "double 右到左: " << sum_right_d << endl;

    return 0;
}
