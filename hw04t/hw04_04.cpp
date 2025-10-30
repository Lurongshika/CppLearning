// 30-10241510431-姜吉浩

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int x, guess, flag = 1;
	int N = 7;

	srand(time(NULL));
	x = rand() % 100 + 1;

	cout << " 欢迎参加猜数游戏！你共有 " << N << " 次机会" << endl;
	cout << " 请猜测一个 1 到 100 之间的一个整数。\n"
		 << endl;

	for (int i = 1; i <= N; i++)
	{
		cout << "第 " << i << " 次: ";
		cin >> guess;
		if (guess == x)
		{
			cout << "恭喜你，猜对了！" << endl;
			flag = 0;
			break;
		}
		else if (guess < x)
		{
			cout << "太小了！" << endl;
		}
		else
		{
			cout << "太大了！" << endl;
		}
	}

	if (flag == 1)
		cout << "\nSorry, you lost!\n"
			 << endl;

	return 0;
}
