// 30-10241510431-姜吉浩
#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "请输入成绩（百分制）： ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "输入分数无效！" << endl;
        return 0;
    }

    switch (score / 10)
    {
    case 10:
    case 9:
        cout << "等级: A" << endl;
        break;
    case 8:
        cout << "等级: B" << endl;
        break;
    case 7:
        cout << "等级: C" << endl;
        break;
    case 6:
        cout << "等级: D" << endl;
        break;
    default:
        cout << "等级: E" << endl;
        break;
    }

    return 0;

}
