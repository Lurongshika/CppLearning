// 30-10241510431-������

#include <iostream>

using namespace std;

int gcd(int x, int y); // ��������
int lcm(int x, int y); // ��������

int main()
{
   int x, y;
   x = 2012;
   y = 1509;

   cout << "\n";
   cout << x << "��" << y << "�����Լ���ǣ�" << gcd(x, y) << endl;
   cout << x << "��" << y << "����С�������ǣ�" << lcm(x, y) << endl;

   return 0;
}

int gcd(int x, int y) // ���Լ��
{
   while (y != 0)
   {
      int temp = x % y;
      x = y;
      y = temp;
   }
   return x;
}

int lcm(int x, int y) // ��С������
{
   return x / gcd(x, y) * y;
}
