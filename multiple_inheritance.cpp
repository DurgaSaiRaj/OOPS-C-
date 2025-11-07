//mutible inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"showA() of class of  class A"<<endl;
		}
};
class B
{
	public:
		void show()
		{
			cout<<"showB() of class of  class B"<<endl;
		}
};
class C:public A,public B
{
	public:
		void showC()
		{
			cout<<"showC() of class of  class C"<<endl;
		}
};
int main()
{
	C c;
	c.showC();
	c.A::show();
	c.B::show();
}
