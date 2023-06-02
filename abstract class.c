#include<iostream>
using namespace std;
class Abstract
{
public:
virtual void show()=0;
};
class child:public Abstract
{
public:
void show()
{
cout<<"Hello World"<<endl;
}
};
int main()
{
child c;
c.show();
return 0;
}
