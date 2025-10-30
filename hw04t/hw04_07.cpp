// 30-10241510431-������

#include <iostream>

using namespace std;

int num_chain(int n); // ��������

int main()
{
   int n = 90, max_chain, m, k;

   max_chain = num_chain(n);
   m = n; // �ٶ���һ�������������, �����ٲ��ϸ���

   for (n = 91; n <= 100; n++)
   {
      k = num_chain(n);
      if (k > max_chain)
      {
         max_chain = k;
         m = n;
      }
   }

   cout << "[90,100] ���������������ǣ�" << m;
   cout << ", ������Ϊ��" << max_chain;

   cout << endl;
   return 0;
}

int num_chain(int n) // ���� n ��������ѭ������
{
   int count = 1;
   while (n != 1)
   {
      if (n % 2 == 0)
         n /= 2;
      else
         n = 3 * n + 1;
      count++;
   }
   return count;
}
