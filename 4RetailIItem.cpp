#include<iostream>
#include<string>
using namespace std;

class RetailItem
{
	private:
		string description;
		int unitsOnHand;
		double price;
	public:
		RetailItem(string d, int u, double p){
			description = d;
			unitsOnHand = u;
			price = p;
		}
		
		void setDescription(string d){
			description = d;
		}
		
		void setUnitsOnHand(int u){
			unitsOnHand = u;
		}
		
		void setPrice(double p){
			price = p;
		}
		 
		string getDescription(){
			return description;
		}
		
		int getUnits(){
			return unitsOnHand;
		}
		 
		double getPrice(){
			return price;
		}
};

int main()
{
	RetailItem item1("Jacket", 12, 59.95);
	RetailItem item2("Designer Jeans", 40, 34.95);
	RetailItem item3("Shirt", 20, 24.95);
}
