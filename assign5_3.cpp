#include<iostream>
using namespace std;
class employee {
    private:
   int EmployeeId;
   string EmployeeName;
   double BasicSalary,HRA,Medical,PF,PT,NetSalary,GrossSalary;
    public:
    employee(){
        EmployeeId=0;
        EmployeeName="default";
        BasicSalary=2000;
        HRA=2000;
        Medical=1000;
        PF=1000;
        PT=1000;
    }
    employee(int EmployeeId,string EmployeeName, int BasicSalary, double HRA, double Medical,double PF,double PT){
        this->EmployeeId=EmployeeId;
        this->EmployeeName=EmployeeName;
        this->BasicSalary=BasicSalary;
        this->HRA=HRA;
        this->Medical=Medical;
        this->PF=PF;
        this->PT=PT;
    }
    void grossSalary(){
        GrossSalary = BasicSalary + HRA + Medical;
        cout<<"Grosssalary::"<<GrossSalary<<endl;
    }
    void netSalary(){
        NetSalary = GrossSalary-(PT + PF);
        cout<<"Netsalary::"<<NetSalary<<endl;
    }
   
};
int main(){
    int EmployeeId;
   string EmployeeName;
   double BasicSalary,HRA,Medical,PF,PT,NetSalary,GrossSalary;
    employee e1;
    e1.grossSalary();
    

     cout<<"Enter the basic salary::";
    cin>>BasicSalary;
   
    cout<<"Enter the id";
    cin>>EmployeeId;
    cout<<"Enter the EmployeeName::";
    cin>>EmployeeName;
    cout<<"Enter the medical allowance::";
    cin>>Medical;
     HRA=0.5*BasicSalary;
     PF=0.12*BasicSalary;

     employee e2(EmployeeId,EmployeeName,BasicSalary,HRA,Medical,PF,PT=200);
     e2.grossSalary();
     e2.netSalary();
    
   

    

    return 0;
}