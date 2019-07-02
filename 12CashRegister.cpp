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
		~Inventory(){
			quantity = 0;
			cout<<"Quantity destroyed";
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
		Inventory c;
		double total;
	public:
		void setAll(int i, int q, Inventory c)
		{
			item = i;
			quantity = q;
			c.getCost();
		}
		
		double getitemCost(){
			return c.getCost();
		}
		
		double getTotal(){
			return c.getCost()*quantity;
		}
};

int main()
{
	Inventory i(22, 120.5);
	int a, b;
	cout<<"Enter item and quantity of purchase:\n";
	cin>>a>>b;
	
	CashRegister cash;
	cash.setAll(a, b);
	
	if(a<0){
		cout<<"Invalid input!!!";
	} 
	else{
		cout<<"Item's cost = "<<cash.getitemCost()<<endl;
		cout<<"Total purchase = "<<cash.getTotal()<<endl;
	}
}
