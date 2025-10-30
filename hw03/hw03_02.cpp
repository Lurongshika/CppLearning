// 30-10241510431-姜吉浩
// goto
// 一个自然数，值等于其各个数位上的数的和的 4 倍。
// 求满足这个条件的最小的二位数。

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    bool found = 0;

    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (10 * i + j == 4 * (i + j))
            {
                found = 1;
                break;         
            }
        }    
        if (found)
            break;
    }
    
    cout << "满足要求的数是: " << 10 * i + j << endl;

    return 0;
}
