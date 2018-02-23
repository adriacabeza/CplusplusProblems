#include <iostream>
using namespace std;

  string day_of_the_week(int d, int m, int y) {
  int any2, minut2, century,f;
  
  m= m-2;
  if (m <= 0) 
      { e=m+12; a=y-1;}
  

   
   c = a/100;
   a = y%100;
   f = (2,6*e)-0,2;
   f = f+d+a+(a/4)+(c/4)-2*c;
   
   
    while (f<0){
	  f = f+7;
	  f = f%7;
	  if (f=0) return "Sunday";
	  else if (f = 1)  return "Monday";
	  else if (f = 2) return "Tuesday";
	  else if (f = 3) return "Wednesday";
	  else if (f = 4) return "Thursday";
	  else if (f = 5) return "Friday";
	  else if (f = 6) return "Saturday";
    }
  }


 int main (){

 int d,m,y;
cin>>d,m,y;
cout<< day_of_the_week(d,m,y)<<endl;

}