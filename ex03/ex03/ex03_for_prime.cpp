//
// 判断一个数是否为素数 

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    
    cout << "请输入一个正整数: ";
    cin >> n;
        
    for (k = 2; k < n; k++)
        if ( n % k == 0 )  break;   
    
    if (k < n)
        cout << "n=" << n 
             << " 不是素数." << endl;
    else
        cout << "n=" << n << " 是素数." << endl;        
    
    return 0;
}
