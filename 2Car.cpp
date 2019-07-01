#include<iostream>
#include<string>
using namespace std;

class Car
{
	private:
		int yearModel;
		string make;
		int speed;
	public:
		Car(int y, string m)
		{
			yearModel = y;
			make = m;
			speed = 0;
		}
		int getYear()
		{
			return yearModel;
		}
		string getMake()
		{
			return make;
		}
		int getSpeed()
		{
			return speed;
		}
		int accelerate()
		{
			return (speed+=5);
		}
		int brake()
		{
			return (speed-=5);
		}
};
int main()
{
	Car c(1950, "Ford");
	for(int i=1; i<=5; i++){
		cout<<"Speed = "<<c.accelerate()<<endl;
	}

		
	for(int i=1; i<=5; i++){
		cout<<"After brake, Speed = "<<c.brake()<<endl;	
	}

}
