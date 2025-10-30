// 30-10241510431-姜吉浩

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int count = 0;
    for (int year = 2000; year <= 2099; year++)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            cout << year;
            count++;
            if (count % 6 == 0)
                cout << endl;
            else
                cout << "  "; 
        }
    }
    return 0;
}
