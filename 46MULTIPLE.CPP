#include<iostream.h>
#include<conio.h>
class demoA
{
  public:
  int a;
  demoA()
  {
    cout<<"\n good morning from class A:";
  }
  void displayA()
  {
    cout<<"\n value of A is:"<<a;
  }
};
class demoB
{
 public:
 int b;
 demoB()
 {
  cout<<"\n good morning from DemoB construvtor...";
 }
 void displayB()
 {
  cout<<"\n value of B is:"<<b;
 }
};
class democ:public demoA,public demoB
{
 public:
 int c;
 democ()
 {
  cout<<"\n good morning from democ constuctor...";
 }
 void displayc()
 {
  cout<<"\n value of c is:"<<c;
 }
};
void main()
{
 clrscr();
 democ c1;
 c1.a=10;
 c1.b=20;
 c1.c=30;
 c1.displayA();
 c1.displayB();
 c1.displayc();
 getch();
}



