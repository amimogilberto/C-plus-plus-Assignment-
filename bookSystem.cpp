#include <iostream> 
#include<string>
using namespace std;

class Book{

    string bookTitle, author;
    int numberOfCopies, remainingCopies, borrowedCopies;
    
    public:
    void inputDetails(){
        cout<<"Enter the Book Title :"<<endl;
        getline(cin,bookTitle);
        cout<<"Enter the Author of the book :"<<endl;
        getline(cin,author);
        cout<<"Enter the Number of copies:"<<endl;
        cin>>numberOfCopies;
    
    }
    
    void borrowBook(){
        cout<<"Enter number of copies being borrowed:"<<endl;
        cin>>borrowedCopies;
        remainingCopies= numberOfCopies - borrowedCopies;
    }
    
    void displayDetail(){
    	cout<<"\n=========================="<<endl;
        cout<<"---- BOOK INFORMATION ----"<<endl;
        cout<<"BOOK TITLE :"<<bookTitle<<endl;
        cout<<"AUTHOR :"<<author<<endl;
        cout <<"BORROWED COPIES :"<<borrowedCopies<<endl;
        cout<<"REMAINING COPIES:"<<remainingCopies<<endl;
        cout<<"--------------------------"<<endl;
  	    cout<<"=========================="<<endl;
    }
};

int main (){
    Book book1;
    
    book1.inputDetails();
    book1.borrowBook();
    book1.displayDetail();
    
    return 0;
    
}