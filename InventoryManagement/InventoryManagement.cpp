#include <iostream>

using namespace std;

class InventoryManagement{

	string product_name;
    	int product_cp,
    	    product_sp,
    	    product_location;
    
    
public:
InventoryManagement(string product_name,int product_cp,int product_sp,int product_location){
    
	this->product_name     = product_name;
    this->product_cp       = product_cp;
    this->product_sp       = product_sp;
    this->product_location = product_location;
}
~InventoryManagement(){
	
}
void Display(){
cout<<"------------------------------------------------PRODUCT DETAILS------------------------------------------------"<<endl;
	cout<<"PRODUCT NAME IS: "<<this->product_name<<endl;
    cout<<"PRODUCT COST PRICE IS: "<<this->product_cp<<endl;
    cout<<"PRODUCT SELLING PRICE IS: "<<this->product_sp<<endl;
    cout<<"PRODUCT LOCATION IS: "<<this->product_location<<endl;

}
};

int main(){

string p_name;
int choice = 0,
    p_cp,
    p_sp,
    p_loc;
    
InventoryManagement *obj;
while(choice != 5){
cout<<"------------------------------------------------USER INPUT------------------------------------------------"<<endl;
	cout<<"select 1 for Register a product"<<endl;
	cout<<"select 2 for Remove a product"<<endl;
	cout<<"select 3 for Find a product"<<endl;
	cout<<"select 4 for display products"<<endl;
	cout<<"select 5 to quit"<<endl;
	cin>>choice;
	
	if(choice == 1){
	
		cout<<"Enter the product name :"<<endl;
		cin>>p_name;
		cout<<"Enter the product cost price :"<<endl;
		cin>>p_cp;
		cout<<"Enter the product selling price :"<<endl;
		cin>>p_sp;
		cout<<"Enter the product location :"<<endl;
		cin>>p_loc;
		
		obj = new InventoryManagement(p_name, p_cp, p_sp, p_loc);
		
	}
	else if(choice == 2){
		cout<<"Enter the product name :"<<endl;
		getline(cin,p_name);
		
		
	}
	else if(choice == 3){
		cout<<"Enter the product name :"<<endl;
		getline(cin,p_name);
		
		
	}
	else if(choice == 4){

		(*obj).Display();
		
	}
	else if(choice == 5){
		cout<<"THANK YOU "<<endl;
	    cout<<"object deleted "<<endl;
		delete obj;
	}

}
return 0;

}