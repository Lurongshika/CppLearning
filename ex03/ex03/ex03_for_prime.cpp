//
// �ж�һ�����Ƿ�Ϊ���� 

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    
    cout << "������һ��������: ";
    cin >> n;
        
    for (k = 2; k < n; k++)
        if ( n % k == 0 )  break;   
    
    if (k < n)
        cout << "n=" << n 
             << " ��������." << endl;
    else
        cout << "n=" << n << " ������." << endl;        
    
    return 0;
}
