
#include <string>
#include <iostream>
using namespace std;

class Day{

  private:
    string day;

  public:

    //constructors
    Day();
    Day(string d);

    static string weekdays[7];
    //destructor
    ~Day(){}

    //functions
    void setDay(string d);
    string getDay();

    void addDay(int x);
    string nextDay();
    string prevDay();
    


};