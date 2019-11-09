#include <iostream>
using namespace std;
class base
{
private:
int a,b;
public:
void accept(int a,int b)
{
this->a=a;
this->b=b;
}
friend class derived;
};
class derived:public base
{
public:
void display()
{

std::cout<<"Sum: "<<a+b<<"\n";
}
};
main()
{
int a,b;
std::cin>>a>>b;
derived d;
d.accept(a,b);
d.display();
}
