// 30-10241510431-������

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool is_prime(int n); // ��������
int reverse(int n);   // ��������

int main()
{
   int k = 0, n;

   cout << " ǰ100�� emirp ��Ϊ��\n";

   for (n = 2; k < 100; n++)
   {
      if (is_prime(n))
      {
         int r = reverse(n);
         if (r != n && is_prime(r))
         {
            cout << setw(6) << n;
            k++;
            if (k % 10 == 0)
               cout << endl;
         }
      }
   }

   cout << endl;

   return 0;
}

bool is_prime(int n)
{
   if (n < 2)
      return false;
   for (int i = 2; i <= sqrt(n); i++)
      if (n % i == 0)
         return false;
   return true;
}

int reverse(int n) // ���㷴ת��
{
   int rev = 0;
   while (n > 0)
   {
      rev = rev * 10 + n % 10;
      n /= 10;
   }
   return rev;
}
