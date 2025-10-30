// 30-10241510431-姜吉浩
#include <iostream>
using namespace std;

int main()
{
    char score;
    cout << "请输入等级: ";
    cin >> score;

    if (score == 'A')
    {
        cout << "90-100" << endl;
    }
    else if (score == 'B')
    {
        cout << "80-89" << endl;
    }
    else if (score == 'C')
    {
        cout << "70-79" << endl;
    }
    else if (score == 'D')
    {
        cout << "60-69" << endl;
    }
    else if (score == 'E')
    {
        cout << "0-59" << endl;
    }
    else
    {
        cout << "输入等级无效！" << endl;
    }

    return 0;
}
