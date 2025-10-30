// for : range 

#include <iostream>
using namespace std;

int main()
{
    int s = 0;
    
    for (auto x: {1,9,3,5})
    {
        s = s + x;        
        cout << "s = " << s << endl; 
    }           
    
    return 0;
}
