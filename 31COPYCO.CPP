#include<iostream.h>
#include<conio.h>
class demoa
{
  public:
  demoa()
  {
    cout<<"\n from demoa constructer...";
  }
  void message()
  {
    cout<<" good morning";
  }
};
class demob
{
 public:
 demob(demoa b)
 {
   b.message();
 }
};
void main()
{
  demoa da;
  demob db(da);
  getch();
}

