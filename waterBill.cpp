//Gilberto Amimo Otieno 
// CT101/G/26584/25
//Bachelor of Computer science 
//Group B

#include <iostream>
#include <string>

using namespace std;

string customerName;
float unitConsumed, waterBill, ratePerUnit,  discountReceived, totalBill;

void getCustomerDetails(){
    cout<<"--- Customer Details Entry---"<<endl;
    cout<<"Enter Customer Name:";
    getline(cin, customerName);
    
    cout<<"Enter number of unit consumed:";
    cin>>unitConsumed;
}

void calculateBill(){
	cout<<"\n--- Company Rate Per Unit --- "<<endl;
    cout<<"Enter the Rate per Unit:";
    cin>>ratePerUnit;
    waterBill= unitConsumed * ratePerUnit ;
    
    cout<<"\nWater Bill (Ksh):"<<waterBill<<endl;
}

void applyDiscount(){
	cout<<"\n--- Applied Discount ---"<<endl;
    if (unitConsumed>=100){
        discountReceived=10*unitConsumed;
        cout<<"Discount Received (Ksh):"<<discountReceived<<endl;
    }
    else {
	  cout<<"Discount Received (Ksh): 0"<<endl;	
	}
    

}

void displayBill(){
    cout<<"\n\n----- DISPLAY BILL-----"<<endl;
    cout<<"CUSTOMER NAME:"<<customerName<<endl;
    cout<<"UNIT CONSUMED:"<<unitConsumed<<endl;
    cout <<"WATER BILL BEFORE DISCOUNT (KSH):"<<waterBill<<endl;
    cout<<"DISCOUNT (KSH):"<<discountReceived<<endl;
     
     if ( discountReceived<=0){
         totalBill= waterBill - 0;
         cout<<"TOTAL BILL (KSH):"<<totalBill<<endl;
     }
     else{
         totalBill=waterBill - discountReceived;
         cout<<"TOTAL BILL(KSH):"<<totalBill<<endl;
     }
     
     cout<<"--------------------------"<<endl;
}

int main(){
    
     getCustomerDetails();
     calculateBill();
     applyDiscount();
     displayBill();
     
     return 0;
     
}