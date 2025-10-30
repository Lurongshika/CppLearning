// 30-10241510431-姜吉浩

#include <iostream>

using namespace std;

void prime_factor(int n); // 函数声明

int main()
{
    int n;

    cout << " Input n: ";
    cin >> n;

    cout << n << " 的素数因子有：";
    prime_factor(n);

    cout << endl
         << endl;

    return 0;
}

void prime_factor(int n)
{
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
}
