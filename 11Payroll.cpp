#include<iostream>
using namespace std;

class Payroll
{
	private:
		double rate;
		int hours;
		double total;
	public:
		Payroll(){
			rate = 0;
			hours = 0;
			total = 0 ;
		}
		void setTotal(double r, int hr=17.5){
			total = (double)r*17.5;
		}
		
		double getTotal(){
			return total;
		}
};

int main()
{
	Payroll p[7];
	int a[7];
	for(int i=0; i<7; i++)
	{
		cout<<"Enter total hours: ";
		cin>>a[i];
		if(a[i]>60){
			cout<<"Maximum work hour encountered!!!";
			break;
		}
		else{
			p[i].setTotal(a[i]);
			cout<<"Your total payment = "<<p[i].getTotal()<<endl;
			cout<<endl;	
		}
	}
}
