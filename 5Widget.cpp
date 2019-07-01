#include<iostream>
using namespace std;

class Widget
{
	private: 
		int widget;
	public:
		Widget(int w){
			widget = w;
		}
		
		void display(){
			int days, r, hr;
			days = widget/160;
			r = widget % 160;
			hr = r /10;
			cout<<"We need "<<days<<" days and "<<hr<<" hour.";
		}	
};

int main()
{
	int i;
	cout<<"Enter the number of widgets: ";
	cin>>i;
	if(i <= 0){
		cout<<"Enter valid number of widgets.";
	}
	else{
		Widget wid(i);
		wid.display();
	}
	
}
