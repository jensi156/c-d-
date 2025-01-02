#include<iostream.h>
#include<conio.h>
class A
{
 public:
 A()
 {
  cout<<"\n good morning from default constructor";
 }
 A(char *a)
 {
   cout<<"\n  from parameter constructor good bye"<<a;
 }
};
void main()
{
 clrscr();
 A a1;
 A a2("xyz");
 getch();
}
