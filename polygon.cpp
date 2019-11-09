#include <iostream>
using namespace std;

class polygon
{
    protected:
      int width,height;
    public:
      void setvalue(int a,int b)
      {
          width=a;
          height=b;
      }
      //friend class triangle;
      //friend class rectangle;
};
class triangle:public polygon
{
    public:
       void calculate_area()
       {
          cout<<0.5*width*height<<"\n";
       }
};
class rectangle:public polygon
{
public:
    void calculate_area()
{
cout<<width*height<<"\n";
}
};
main()
{
triangle t1;
rectangle r1;
polygon* p;
p=&t1;
p->setvalue(5,7);
t1.calculate_area();
p=&r1;
p->setvalue(6,8);
r1.calculate_area();
}
