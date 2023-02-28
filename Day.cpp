#include "Day.h"
using namespace std;

string Day::weekdays[7]={"Sunday","Monday","Tuesday",
                        "Wednesday","Thursday","Friday","Saturday"};




string Day::nextDay(){
  if (weekdays[6]==day)
    return weekdays[0];
  for(int i=0;i<6;i++){
    if(weekdays[i]==day){
      return weekdays[i+1];
    }
  }
}
string Day::prevDay(){
  if (weekdays[0]==day)
    return weekdays[6];

  for(int i=1;i<7;i++){
    if(weekdays[i]==day){
      return weekdays[i-1];
    }
  }
} 
void Day::addDay(int x){
  for(int i=0;i<7;i++){
    if (weekdays[i]==day){
      day=weekdays[(i+x)%7];
      break;
    }
  }
}

void Day::setDay(string d){
  day=d;
}
string Day::getDay(){
  return day;
}
Day::Day(){
  day="Sunday";
}
Day::Day(string d){
  day=d;
}