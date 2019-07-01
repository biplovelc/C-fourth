#include<iostream>
using namespace std;

class Circle
{
	private:
		double radius;
		double pi = 3.14159;
	public:
		Circle(){
			radius = 0.0;
		}
		Circle(double r){
			radius = r;
		}
		
		void setRadius(double r){
			radius = r;
		}
		
		double getRadius(){
			return radius;
		}
		
		double getArea(){
			return pi*radius*radius;
		}
		
		double getDiameter(){
			return 2*radius;
		}
		
		double getCircumference(){
			return pi*getDiameter();
		}
};

int main()
{
	double r;
	cout<<"Enter the radius of circle: ";
	cin>>r;
	
	Circle c(r);
	cout<<"Area = "<<c.getArea()<<endl;
	cout<<"Diameter = "<<c.getDiameter()<<endl;
	cout<<"Circumference = "<<c.getCircumference();
	
}
