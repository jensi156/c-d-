#include<iostream.h>
#include<conio.h>
class base
{
 public:
 void display(int x=10)
 {
  cout<<"\n hellowwww good byeeeee...";
  cout<<"\n base value of x is :"<<x;
  }
};
class derived: public base
{
 public:
 void display(int x=100)
 {
  cout<<"\n Thank you for calling the...";
  cout<<"\n derive value of x is:"<<x;
 }
};
void main()
{
  clrscr();
  base *b=new derived();
  b->display();
  b->display(1000);
  getch();
}
