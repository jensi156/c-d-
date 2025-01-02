#include<iostream.h>
#include<conio.h>
class demoA
{
 public:
 int a;
 void inputdata()
 {
  cout<<"\n parent class....";
  cout<<"\n Enter value of a:";
  cin>>a;
 }
 void display()
 {
  cout<<"\n value of a is :"<<a;
 }
};
class demob:public demoA
{
 public:
 int a,b;
 void inputdata()
 {
   demoA::inputdata();
   cout<<"\n child class...";
   cout<<"\n enter value of a:";
   cin>>a;
   cout<<"\n enter value of b:";
   cin>>b;
 }
 void display()
 {
  demoA::display();
  cout<<"\n sum of a and B:"<<(a+b);
 }
};
void main()
{
 clrscr();
 demob db;
 db.inputdata();
 db.display();
 getch();
}