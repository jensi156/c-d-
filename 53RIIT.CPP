#include<iostream.h>
#include<conio.h>
class B{};
class D:public B {};
{
   clrscr();
   B*b=newD;
   D*d=dynamic.cast<D*>(b);
   if(d!=null)
      cout<<"works";
   else
      cout<<"cannot cast B* to D*";
   getchar();
   return 0;
}