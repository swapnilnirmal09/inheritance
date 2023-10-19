/*Create Date class with members day,month ,year.
Write no argument and parameterised constructor .Create two object s and initialize them using no argument and parameterised constructor
respectively.Print date using display function.*/


#include<iostream>
using namespace std;
class Date{
    private:
    int day,month,year;
    public:
    Date(){
        cout<<"default...";
        day=1;
        month=1;
        year=2001;

    }
    Date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void displayDate(){
        cout<<"   "<<day<<"  "<<month<<"  "<<year<<endl;
    }
};

int main(){
    Date d1;
    d1.displayDate();
    int day,month,year;
    cout<<"Enter the date::";
    cin>>day>>month>>year;
    Date d2(day,month,year);
    d2.displayDate();
}