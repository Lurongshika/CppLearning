// 30-10241510431-姜吉浩
#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "请输入分数: ";
    cin >> score;

    if (score >= 90 && score <= 100)
    {
        cout << "等级: A" << endl;
    }
    else if (score >= 80)
    {
        cout << "等级: B" << endl;
    }
    else if (score >= 70)
    {
        cout << "等级: C" << endl;
    }
    else if (score >= 60)
    {
        cout << "等级: D" << endl;
    }
    else if (score >= 0)
    {
        cout << "等级: E" << endl;
    }
    else
    {
        cout << "输入分数无效！" << endl;
    }

    return 0;
}
