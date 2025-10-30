// 30-10241510431-姜吉浩

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    short short_max = 0, a = 1, b = 2;
    while (a > 0)
    {
        short_max = a;
        a = b;
        b = a + 1;
        cout << "a = " << a << ", b = " << b << endl;
    }

    float f = 1.0f;
    float f_min = 1.0f;
    while (f > 0.0f)
    {
        f_min = f;
        f = f / 2.0f;
        cout << "f = " << f << endl;
    }
    f = f_min;
    while (f > 0.0f)
    {
        f_min = f;
        f = 1 / (1/f + f);
        cout << "f = " << f << endl;
    }

    cout << "short溢出前最后输出 : " << short_max << endl;

    cout << scientific << setprecision(8);
    cout << "float溢出前最后输出 : " << f_min << endl;

}
