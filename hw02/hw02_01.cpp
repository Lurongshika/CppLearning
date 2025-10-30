// 22-10241510431-姜吉浩

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.1415926;
    double radius;
    double height;
    double volume;

    cout << "Enter height of cylinder: ";
    cin >> height;
    cout << "Enter radius of cylinder: ";
    cin >> radius;
    volume = pi * radius * radius * height;
    cout << "Volume: " << volume << endl;

    system("pause");

    return 0;
}
