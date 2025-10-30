// 22-10241510431-姜吉浩

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int principal = 100;
    double rate_1 = 0.1;
    double rate_2 = 0.11;

    for (int year = 1; year <= 5; year++)
    {
        principal = principal * (1 + rate_1);
    }

    cout << "PlanA final amount:" << principal << endl;

    principal = 100;

    principal = principal + principal * rate_2 * 5;

    cout << "PlanB final amount:" << principal << endl;

    return 0;
}
