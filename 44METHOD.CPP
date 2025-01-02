//method overloading
#include<iostream.h>
#include<conio.h>
class constover
{
 public:
 int grno;
 void display()
 {
   cout<<"\n Hi I AmDefult method";
 }
 void dispgrno(int grno)
 {
   cout<<"\n constructor one parameter:"<<grno;
 }
 void disp(int grno,char *nm)
 {
   cout<<"\n constover two parameter";
   cout<<"\n grno is"<<grno<<"and student name is:"<<nm;
 }
};
void main()
{
  constover c1;
  c1.display();
  c1.dispgrno(234);
  c1.disp(2369,"jeni");
  getch();
}
