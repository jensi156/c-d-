#include<iostream.h>
#include<conio.h>
class constover
{
  public:
  int grno;
  constover()
  {
   cout<<"\n Hi I Am Default constructor...";
  }
  constover(int grno)
  {
    constover::grno=grno;
    cout<<"\n constructor one parametor:"<<grno;
  }
  constover(int grno,char *nm)
  {
   constover::grno=grno;
   cout<<"\n constructor two parameter";
   cout<<"\n grno is:"<<grno<<"and student name is :"<<nm;
  }
};
void main()
{
 clrscr();
 constover cn1;
 constover cn2(234);
 constover cn3(2234,"nandni");
}


