#include<iostream.h>
#include<conio.h>
class time
{
 int hrs,min;
 public:
 time(int t)
 {
   cout<<"Basic type to==>class type conversion.."<<endl;
   hrs=t/60;
   min=t%60;
 }
 void display();
};
void time::display()
{
 cout<<hrs<<":hours(s)"<<endl;
 cout<<min<<"minutes"<<endl;
}
void main()
{
 clrscr();
 int duration;
 cout<<"Enter time duration in minuts:";
 cin>>duration;
 time t1=duration;
 t1.display();
 getch();
}
