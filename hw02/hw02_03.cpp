// 22-10241510431-姜吉浩

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    long second, minute, hour;
    second = time(NULL);
    minute = second / 60;
    hour = minute / 60;

    cout << "当前北京时间是： " << endl;
    cout << setfill('0') << setw(2) << (hour + 8) % 24 << ":" << setw(2) << minute % 60 << ":" << setw(2) << second % 60 << endl;

    return 0;
}
