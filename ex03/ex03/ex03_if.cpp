// if: wrong version

#include <iostream>
using namespace std; 

int main()
{
    int x;
    int sign=0;  // ��¼ x �ķ���, ȱʡֵΪ 0

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
