// if: wrong version

#include <iostream>
using namespace std; 

int main()
{
    int x;
    int sign=0;  // 记录 x 的符号, 缺省值为 0

    cout << "Please input a integer: ";   
	cin >> x;

    if (x<=0)
        if (x<0)
            sign=-1;
    else
        sign=1;
}
 
    return 0; 
}
