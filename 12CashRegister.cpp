#include<iostream>
using namespace std;

class Inventory
{
	private:
		int quantity;
		double cost;
	public:
		Inventory(int q, double c){
			quantity = q;
			cost = c;
		}
		
		int getQuantity(){
			return quantity;
		}
		
		int getCost(){
			return cost;
		}
};

class CashRegister
{
	private:
		int item;
		int quantity;
		Inventory object.getCost();
		double total;
	public:
		CashRegister(int i, int q){
			item = i;
			quantity = q;
			object = ob;
			setTotal(q, object);
		}
		
		void setTotal(int q, Inventory ob){
			total = q*ob.getCost();
		}
		
		double getTotal(){
			return total;
		}
};

int main()
{
	Inventory i(22, 120.5);
	
	int a, b;
	cout<<"Enter item and quantity of purchase:\n";
	cin>>a>>b;
	CashRegister c(a, b)
	
	if(a<0){
		cout<<"Invalid input!!!";
	} 
	else{
		
	}
}
