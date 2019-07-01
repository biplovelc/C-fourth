#include<iostream>
using namespace std;

class Inventory
{
	private:
		int itemNumber, quantity;
		double cost, totalCost;
	public:
		Inventory(){
			itemNumber  = 0;
			quantity = 0;
			cost = 0.0;
			totalCost = 0;
		}
		
		Inventory(int i, int q, double c){
			itemNumber = i;
			quantity = q;
			cost = c;
			setTotalCost(i, q, c);
		}
		
		void setItemNumber(int i){
			itemNumber = i;
		}
		
		void setQuantity(int q){
			quantity = q;
		}
		
		void setCost(double c){
			cost =c;
		}
		
		void setTotalCost(int i, int q, double c){
			totalCost = q*c;
		}
		
		int getItemNumber(){
			return itemNumber;
		}
		
		int getQuantity(){
			return quantity;
		}
		
		double getCost(){
			return cost;
		}
		
		double getTotalCost(){
			return totalCost;
		}
};

int main()
{
	int a, b; double c;
	cout<<"Enter itemnumber: ";
	cin>>a;
	cout<<"Enter number of items: ";
	cin>>b;
	cout<<"Enter cost of each item: ";
	cin>>c;
	
	Inventory i(a, b, c);
	
	if(a < 0 && b < 0 && c < 0){
		cout<<"Input value is negative!!!!";
	}
	else{
		cout<<"\nTotal cost = "<<i.getTotalCost();
	}
}

