// 30-10241510431-������

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

	cout << " ��ӭ�μӲ�����Ϸ���㹲�� " << N << " �λ���" << endl;
	cout << " ��²�һ�� 1 �� 100 ֮���һ��������\n"
		 << endl;

	for (int i = 1; i <= N; i++)
	{
		cout << "�� " << i << " ��: ";
		cin >> guess;
		if (guess == x)
		{
			cout << "��ϲ�㣬�¶��ˣ�" << endl;
			flag = 0;
			break;
		}
		else if (guess < x)
		{
			cout << "̫С�ˣ�" << endl;
		}
		else
		{
			cout << "̫���ˣ�" << endl;
		}
	}

	if (flag == 1)
		cout << "\nSorry, you lost!\n"
			 << endl;

	return 0;
}
