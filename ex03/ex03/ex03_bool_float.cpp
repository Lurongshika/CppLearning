//
// bool
//
#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
	bool x, y;
	
    x = true; y = false;
    cout << "x = " << x << ", y = " << y << endl;
    
    cout << endl;
    bool x1 = 1.5, x2 = 0, x3 = -11;
    cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << endl;
    
    cout << endl;
    x = pow(sqrt(2.0),2) == 2;
    cout << "pow(sqrt(2.0),2) == 2 : " << x << endl; 

    return 0; 
}
