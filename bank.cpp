#include <iostream>
#include <string.h>
using namespace std;
class customer
{
private:
char name[100];
char phn[10];
public:
void accept1(char s[],char p[]){
strcpy(name,s);
strcpy(phn,p);
}
friend class depositor;
friend class borrower;
};
class depositor:public customer
{
private:
char accn[20];
double balance;
public:
void accept2(char s[],double p)
{
strcpy(accn,s);
balance=p;
}
friend class borrower;
};
class borrower:public depositor
{
private:
double lonano;
double loanamt;
public:
void accept3(double ln,double la)
{
lonano=ln;
loanamt=la;
}
void display(){
std::cout<<name<<" "<<phn<<" "<<accn<<" "<<balance<<" "<<lonano<<" "<<loanamt<<"\n";
}
};
main()
{
int i,n;
char name[100],fn[10],accn[20];
double bl,lno,lma;
std::cin>>n;
borrower b[n];
for(i=0;i<n;i++)
{
std::cin>>name>>fn>>accn>>bl>>lno>>lma;
b[i].accept1(name,fn);
b[i].accept2(accn,bl);
b[i].accept3(lno,lma);
}
std::cout<<"Results:\n";
for(i=0;i<n;i++)
{
b[i].display();
}
}
