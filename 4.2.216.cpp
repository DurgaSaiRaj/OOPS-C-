#include<iostream>       // Header file for input and output
using namespace std;
// Template class definition with one generic type T
template<class T>
class sample
{
    private:
        T n;  // Variable of type T (can hold int, char, float, etc.)
    public:
        // Function to get input from user
        void get()
        {
            cout << "Enter n value: ";
            cin >> n;
        }
        // Function to display the value of n
        void show()
        {
            cout << "n = " << n << endl;
        }
};
int main()
{
    // Creating object s1 with int type
    sample<int> s1;
    

      
     s1.get();   // Taking integer input
    s1.show();  // Displaying integer value
    // Creating object s2 with char type
    sample<char> s2;
    s2.get();   // Taking character input
    s2.show();  // Displaying character value
    // Creating object s3 with float type
    sample<float> s3;
    s3.get();   // Taking float input
    s3.show();  // Displaying float value
    return 0;   // End of program
}
