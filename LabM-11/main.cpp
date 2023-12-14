#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
using namespace std;
class timeStamp {
 public :
     int sec, min ,hr;
     int currentPos;
     timeStamp(){
     sec=min=hr=0;
     }
     timeStamp(int s, int m, int h){
     sec=s;
     min=m ;
     hr=h;

     }
     timeStamp(timeStamp &o){
     sec=o.sec;
     min=o.min ;
     hr=o.hr;
     }

   void ResetList(){
    currentPos = NULL;
}
    bool  operator==(timeStamp &o){
    return sec==o.sec && min==o.min && hr==o.hr;

    }
     bool  operator!=(timeStamp &o){
    return sec!=o.sec || min!=o.min || hr!=o.hr;

    }
     bool  operator<(timeStamp& o){
    return  sec<o.sec || (sec==o.sec  && min< o.min)||( sec==o.sec && min==o.min && hr< o.hr);

    }

      bool  operator>(timeStamp& o){
    return  sec>o.sec || (sec==o.sec  && min> o.min)||( sec==o.sec && min==o.min && hr> o.hr);

    }
    friend ostream &operator << (ostream &o, const timeStamp &t);
    };
    ostream& operator << (ostream& o, const timeStamp& t) {
    return o << (t.sec<10?"0":"") << t.sec <<":"<< (t.min<10?"0" :"" )<< t.min <<":" << (t.hr<10?"0" :"") << t.hr <<endl ;

    }


int main(){
   SortedType <timeStamp> times;
   timeStamp t1(15, 34,23);
  timeStamp t2(13, 13,02);
  timeStamp t3(43, 45,12);
  timeStamp t4(25, 36,17);
  timeStamp t5(52, 02,20);

  times.InsertItem(t1);
  times.InsertItem(t2);
  times.InsertItem(t3);
  times.InsertItem(t4);
  times.InsertItem(t5);

  times.DeleteItem(t4);

  timeStamp t;
  t.ResetList();
  for(int i=0; i< times.LengthIs(); i++){
    times.GetNextItem(t);
    cout << t;
  }
  cout<< endl ;
    return 0;
}
