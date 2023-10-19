
#include <iostream>
using namespace std;
 class employee{
     private: int id,day,month,year;
              string name;

      public:employee() {
          cout<<"default constructor"<<endl;
          id=100;
          day=19;
          month=02;
          year=1997;
          name="swapnil";
          cout<<"DOB=  19/02/1997"<<endl;
      }
      employee(int id,int day,int month,int year,string name){
          this->id=id;
          this->day=day;
          this->month=month;
          this->year=year;
          this->name=name;

      }
      void acceptdetails()
      {
          cout<<"  enter the id dob and name  "<<endl;
          cin>>id>>day>>month>>year>>name;
    
      }
       void showdetails()
      {
          cout<<" id= "<<id<<"  DOB=  "<<day<<"/"<<month<<"/"<<year<<"  name=  "<<name<<endl;

         
 }
 };
 int main()
 {
     employee e1;
     e1.showdetails();

     employee e2(201,19,02,1997,"swapnil");
     e2.showdetails();
     e2.acceptdetails();
     e2.showdetails();

     
 }