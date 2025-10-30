// 30-10241510431-姜吉浩
#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "请输入等级： ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "输入等级无效！" << endl;
        return 0;
    }

    switch (score / 10)
    {
    case 'A':
        cout << "90-100" << endl;
        break;
    case 'B':
        cout << "80-89" << endl;
        break;
    case 'C':
        cout << "70-79" << endl;
        break;
    case 'D':
        cout << "60-69" << endl;
        break;
    case 'E':
        cout << "0-59" << endl;
        break;
    default:
        cout << "输入等级无效！" << endl;
        break;
    }

    return 0;

}
