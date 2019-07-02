#include<iostream>
using namespace std;

class Population
{
	private: 
		int population;
		int births;
		int death;
	public:
		Population(int p, int b, int d){
			population = p;
			births = b;
			death = d;
		}
		
		double birthRate(){
			return (double)births/population;
		}
		
		double deathRate(){
			return (double)death/population;
		}
};

int main()
{
	int pop, b, d;
	cout<<"Enter the total population: ";
	cin>>pop;
	cout<<"Enter total birth: ";
	cin>>b;
	cout<<"Enter total death: ";
	cin>>d;
	
	Population rate(pop, b, d);
	
	if(pop < 0 && b < 0 && d < 0){
		cout<<"Population cannot be negative!!!";
	}
	else{
		cout<<"\nBirth rate = "<<rate.birthRate()<<endl;
		cout<<"Death rate = "<<rate.deathRate();
	}
}
