// GILBEERTO AMIIMO OTIENO
// CT101/G/26584/25
// BACHELOR OF COMPUTER SCIENCE
// KIRINYAGA UNIVERSITY


#include <iostream>
using namespace std;

int main(){
	// rockyy driving school
	
	string studentName, grade;
	float theoryMarks, practicalMarks, averageScore;
	
    //prompt user to enter student name
	cout<<"Enter student name:" <<endl;
	getline(cin,studentName);
    //prompt user to enter student theory  marks
	cout<<"Enter student theory test marks:"<<endl;
	cin>>theoryMarks;
    //loop so that the person enter correct value
	while(theoryMarks>60){
		cout<<"INVALID! MARKS CANNOT BE ABOVE 60,RE-ENTER:"<<endl;
		cin>>theoryMarks;
	}
	//prompt user to enter student practical marks
	cout<<"Enter student practical test marks:"<<endl;
	cin>>practicalMarks;
	//loop so that the person enter correct value
    while(practicalMarks>40){
		cout<<"INVALID! MARKS CANNOT BE ABOVE 40,RE-ENTER:"<<endl;
		cin>>practicalMarks;
	}
	
	//calculation of average scores 
	averageScore = (practicalMarks + theoryMarks)/2;
	if(averageScore<50){
		grade="FAILED";
	} else{
		grade="PASS";	}
		
	// outcome to be display
	cout<<"\n \n"<<endl;
	cout<<"====================="<<endl;
	cout<<"ROCKY DRIVING SCHOOL"<<endl; 
	cout<<"STUDENT NAME:"<<studentName<<endl;
	cout<<"THEORY TEST MARKS:"<<theoryMarks<<endl;
	cout<<"PRACTICAL TEST MARKS:"<<practicalMarks<<endl;
	cout<<"AVERAGE SCORE MARKS:"<<averageScore<<endl;
	cout<<"STUDENT GRADE:"<<grade<<endl;
	cout<<"====================="<<endl;
	
	
return 0;	
}