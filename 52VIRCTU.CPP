#include<iostream.h>
#include<conio.h>
class base
{
  public:
  base()
  {
    cout<<"good morning from praent class....";
  }
  virtual void display()=0;
};
class derived :base
{
 public:
 derived()
 {
  cout<<"\n good morning from child class...";
 }
 void display()
 {
  cout<<"\n good byeee from derived display...";
 }
};
void main()
{
  derived d1;
  d1.display();
  getch();
}
