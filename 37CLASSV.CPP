#include<iostream.h>
#include<conio.h>
class time
{
  int hrs,min;
  public:
  time (int a,int b)
  {
    cout<<"counstructor called with two parameters.."<<endl;
    hrs=a; min=b;
  }
  operator int();
  ~time()
  {
    cout<<"destructor called..."<<endl;
  }
};
time::operator int()
{
  cout<<"class type tobasic type conversion..."<<endl;
  return(hrs*60+min);
}
void main()
{
 clrscr();
 int h,m,duration;
 cout<<"Enter hours:";
 cin>>h;
 cout<<"Enter minutes";
 cin>>m;
 time t(h,m);
 duration=t;
 cout<<"total mintes operator overloading"<<endl;
 duration=t.operator int();
 cout<<"total minuaes are"<<duration;
 getch();
}
