//
// bool
// 
#include <iostream>
using namespace std;

int main()
{
    int x1=1, x2=2, x3=3;
    bool b1, b2, b3;
    
    b1 = (x1 < x2) && (x2 < x3);     // ��ȷд��
    cout << "b1=" << b1 << "\n";
    
    b2 = x1 < x2 < x3;                 // ��û�����⣿
    cout << "b2=" << b2 << "\n";
    
    b3 = x3 > x2 > x1;                 // ��û�����⣿
    cout << "b3=" << b3 << "\n";
    
    return 0;
}
