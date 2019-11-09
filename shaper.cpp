#include <iostream>
using namespace std;

class poly
{
protected:
int width,height,radius;
public:
void setvalue(int a,int b)
{
width=a;
height=b;
}
void setvalue(int r)
{
radius=r;
}
virtual void area()=0;
virtual void displayshape()=0;
virtual  void essent()=0;
};

class circle:public poly
{
public:
void area()
{
cout<<3.14*radius*radius<<"\n";
}
void displayshape()
{
cout<<"Circle\n";
}
void essent()
{
cout<<radius<<"\n";
}
};

class rectangle:public poly
{
public:
void area()
{
cout<<width*height<<"\n";
}
void displayshape()
{
cout<<"Rectangle\n";
}
void essent()
{
cout<<width<<height<<"\n";
}
};
class trapezoid:public poly
{
public:
void area()
{
cout<<width*height<<"\n";
}
void displayshape()
{
cout<<"trapezoid\n";
}
void essent()
{
cout<<width<<height<<"\n";
}
};

main()
{
poly* p;
circle c;
rectangle r;
trapezoid t;
p=&c;
p->setvalue(7);
p=&r;
p->setvalue(5,3);
p=&t;
p->setvalue(2,9);
c.area();
c.displayshape();
c.essent();
r.area();
r.displayshape();
r.essent();
t.area();
t.displayshape();
t.essent();
}
