// GILBERTO AMIMO OTIENO 
// CT101/G/26584/25 
// KIRINYANGA UNIVERISITY 


#include <iostream>
using namespace std;

int main(){
	string customername , phonemodel , cashierName ;
	int quantity ;
	float price ,totalSales;
	
	
	cout<< "ENTER YOUR  NAME (SERVED BY): "<<endl;
	cin>>cashierName ;
	cout<< "ENTER CUSTOMER NAME: " <<endl;
	cin>>customername;
	cout<<"ENTER  PHONE MODEL THE CUSTOMER IS BUYING:" <<endl;
	cin>>phonemodel;
	cout<< "ENTER THE PRICE PER PHONE:" <<endl;
	cin>> price;
	cout<< "ENTER THE QUANITY OF PHONES:" <<endl;
	cin>>quantity ;
	
	totalSales = price * quantity;
	
	cout<< "SAFARICOM SHOP OF PHONES" <<endl;
	cout<<"=============================" <<endl;
	cout<<"SERVED BY:" <<cashierName<<endl;
	cout<< "CUSTOMER NAME :" <<customername<<endl;
	cout<<"=============================" <<endl;
	cout<< "PHONE MODEL :"<<phonemodel<<endl;
	cout<<"QUANTITY :"<<quantity<<endl;
	cout<<"PRICE PER PHONE:"<<price<<endl;
	cout<<"=============================" <<endl;
	cout<<"TOTALSALES: "<<totalSales<<endl;
	cout<<"METHOD OF PAYMENT CASH"<<endl;
	
	
	return 0;	
}