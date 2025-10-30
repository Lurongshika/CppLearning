// 30-10241510431-姜吉浩
#include <iostream>
using namespace std;

int prime_num(int n);

int main()
{
    cout << "请输入一个大于1的整数: ";
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << "输入无效！" << endl;
        main();
    }

    for (int i = 1; i <= n; i++)
    {
        if (prime_num(n-i))
        {
            cout << "比" << n << "小的最大素数是: " << n-i << endl;
            break;
        }
    }

    return 0;
}

int prime_num(int n)
{
    bool is_prime = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
        }
    }
    return is_prime;
}