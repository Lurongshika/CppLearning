// 30-10241510431-������

#include <iostream>

using namespace std;

void prime_factor(int n); // ��������

int main()
{
    int n;

    cout << " Input n: ";
    cin >> n;

    cout << n << " �����������У�";
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
