// 30-10241510431-������

#include <iostream>
#include <iomanip>

using namespace std;

bool is_leap_year(int year);

int main()
{
    int i, k = 0;

    cout << "21���͵�������:\n";
    for (i = 2000; i < 2100; i++)
        if (is_leap_year(i))
        {
            cout << setw(6) << i;
            k++;
            if (k % 10 == 0)
                cout << endl;
        }
    cout << endl;

    return 0;
}

bool is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
