#include <iostream>
using namespace std;
// Template class with two type parameters (T1, T2)
template <class T1, class T2>
class sample
{
private:
T1 x; 
 T2 y; 
public:
     void get()
    {
        cin >> x >> y;
    }
    // display 
    void show()
    {
        cout << "x=" << x << " " << "y=" << y << endl;
    }
};
int main()
{
    // Object with int and float types
    sample<int, float> s1;
    


   cout << "Enter int, float value: ";
s1.get();  
s1.show();  // display
    // Object with char and int types
    sample<char, int> s2;
    cout << "Enter char, int value: ";
s2.get();   
 s2.show(); 
    // Object with float and char types
    sample<float, char> s3;
    cout << "Enter float, char value: ";
    s3.get();   
    s3.show();  
return 0; 
}
