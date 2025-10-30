// 30-10241510431-姜吉浩

#include <iostream>

using namespace std;

int gcd(int x, int y); // 函数声明
int lcm(int x, int y); // 函数声明

int main()
{
   int x, y;
   x = 2012;
   y = 1509;

   cout << "\n";
   cout << x << "与" << y << "的最大公约数是：" << gcd(x, y) << endl;
   cout << x << "与" << y << "的最小公倍数是：" << lcm(x, y) << endl;

   return 0;
}

int gcd(int x, int y) // 最大公约数
{
   while (y != 0)
   {
      int temp = x % y;
      x = y;
      y = temp;
   }
   return x;
}

int lcm(int x, int y) // 最小公倍数
{
   return x / gcd(x, y) * y;
}
