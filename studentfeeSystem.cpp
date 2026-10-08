//Gilberto Amimo Otieno 
// CT101/G/26584/25
//Bachelor of Computer science 
//Group B

#include <iostream>
#include <string>

using namespace std;

class Student{
    
    string studentName, admissionNumber;
    float feeBalance, feePaid,newfeeBalance;
    
    public:
    void  inputDetails(){
        cout<<"---- INPUT STUDENT DETAILS ----"<<endl;
        cout<<"Enter Student Name:"<<endl;
        getline (cin,studentName);
        
        cout <<"Enter Student Admission Number: "<<endl;
        getline (cin, admissionNumber);
        
        cout<<"Enter Student Fee Balance(Ksh):"<<endl;
        cin>>feeBalance;
    }
    
    void makePayment(){
        cout<<"\n---- REDUCE FEE BALANCE ----"<<endl;
        cout<<"Enter Fee being Paid(Ksh):"<<endl;
        cin>>feePaid;
        newfeeBalance= feeBalance - feePaid;
        cout<<"\n----- REMAINING FEE BALANCE -----"<<endl;
        cout<<"Remaining Fee Balance(Ksh):"<<newfeeBalance<<endl;
    }
    
    void displayStatus(){
        cout<<"\n=============================="<<endl;
        cout<<"------ STUDENT DETAILS ------\n"<<endl;
        cout<<"STUDENT NAME:"<<studentName<<endl;
        cout<<"ADMISSION NUMBER:"<<admissionNumber<<endl;
        cout<<"PREVIOUS FEE BALANCE(KSH):"<<feeBalance<<endl;
        cout<<"FEE PAIDED(KSH):"<<feePaid<<endl;
        cout<<"NEW FEE BALANCE (KSH):"<<newfeeBalance<<endl;
        cout<<"\n---- THANKS FOR PAYING ----"<<endl;
        cout<<"================================="<<endl;
        
    }
};

int main(){
    Student student1;
    
    student1.inputDetails();
    student1.makePayment();
    student1.displayStatus();
    
    return 0;
}