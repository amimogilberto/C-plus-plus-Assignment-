// GILBERTO AMIMO OTIENO
// CT101/G/26584/25
// KIRINYAGA UNIVERSITY
// BACHELOR OF COMPUTER SCIENCE

#include <iostream>
using namespace std;

int main(){
	string studentName, grade;
	float examMark;
	
	
	cout<<"ENTER STUDENT NAME:"<<endl;
	getline(cin,studentName);
	
	cout<<"ENTER STUDENT EXAM MARK:"<<endl;
	cin>>examMark;
	
	while(examMark>100){
		cout<<"invalid! student marks!\n"<<endl;
		cout<<"RE-ENTER STUDENT EXAM MARK:"<<endl;
		cin>>examMark;
	}
	
	
	cout<<"\n \n \n"<<endl;
	cout<<"================================="<<endl;
	cout<<"STUDENT NAME :"<<studentName<<endl;
	cout<<"EXAM MARK :"<<examMark<<endl;
    if (examMark>=70){
		grade= "A";
	}
	else if(examMark>=60){
		grade="B";
	}
	else if(examMark>=50){
		grade="C";
	}
	else if (examMark>=40){
		grade="D";
	}else{
		grade="E";
	}
	cout<<"EXAM GRADE :"<<grade<<endl;
	cout<<"================================="<<endl;
	
return 0;	
}