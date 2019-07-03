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
			cout<<"\nQuantity destroyed";
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
		Inventory* obj;
		int item, quantity;
		double total;
	public:
		CashRegister(Inventory* ob, int i, int q){
			obj = ob;
			item = i;
			quantity = q;
			total = (double)quantity*obj->getCost();
		}
		double getTotal(){
			return total;
		}
};

int main()
{
	Inventory i(10, 11.5);
	
	int item, quantity;
	cout<<"Enter item and quantity:\n";
	cin>>item>>quantity;
	
	CashRegister c(&i, item, quantity);
	cout<<"Total = "<<c.getTotal();
	
	
}
