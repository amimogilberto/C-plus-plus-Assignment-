// GILBERTO AMIMO OTIENO
// CT101/G/26584/25
// KIRINYAGA UNIVERSITY
// BACHELOR OF COMPUTER SCIENCE

#include <iostream>
using namespace std;

int main(){
	string studentName ;
	int age ;
	float examScore;
	
	cout<<"Enter Student name:"<<endl;
	getline(cin,studentName);
	
	cout<<"Enter Student age:"<<endl;
	cin>>age;
	
	cout<<"Enter Student exam scores:"<<endl;
	cin>>examScore;
	
		
	cout<<" \n \n "<<endl;
	cout<<"==========================="<<endl;
	cout<<"ADMISSION DECISION CLEEARLY"<<endl;
	cout<<"STUDENT NAME :"<<studentName<<endl;
	cout<<"STUDENT AGE :"<<age<<endl;
	cout<<"STUDENT EXAM SCORES :"<<examScore<<endl;
	if (age>=18){
      if (examScore>=50){
		cout<<"STATUS: Admitted"<<endl;
      }
      else{
		cout<<"STATUS: Not Admitted"<<endl;
	}
	
	} else {
        cout<<"STATUS: Not Admitted : Underage "<<endl;
	}
	cout<<"==========================="<<endl;
	
	
	return 0;
	
}