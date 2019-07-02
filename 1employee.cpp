#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
		string name;
		int idNumber;
		string department;
		string position;
	public:
		Employee(string n, int i, string d, string p)
		{
			name = n;
			idNumber = i;
			department = d;
			position = p;	
		}	
		Employee(string n, int i)
		{
			name = n;
			idNumber = i;
			department = "";
			position = "";	
		}
		Employee()
		{
			name = "";
			idNumber = 0;
			department = "";
			position = "";	
		}
		void setName(string n)
		{
			name = n;
		}
		
		void setId(int i)
		{
			idNumber = i;
		}
		
		void setDepartment(string d)
		{
			department = d;
		}
		
		void setPosition(string p)
		{
			position = p;
		}
		
		string getName()
		{
			return name;
		}
		
		int getId()
		{
			return idNumber;
		}
		
		string getDepartment()
		{
			return department;
		}
		
		string getPosition()
		{
			return position;
		}	
};

int main()
{
	Employee e0("Susan Meyers", 47899, "Accounting", "Vice President");
	Employee e1("Mark Jones", 39119, "Info Technology", "Programmer");
	Employee e2("Joy Rogers", 81774, "Manufacturing", "Engineer");
	cout<<"Name\t\tID Number\tDepartment\t\tPosition"<<endl;
	
	cout<<""<<e0.getName()<<"\t";
	cout<<""<<e0.getId()<<"\t\t";
	cout<<""<<e0.getDepartment()<<"\t\t";
	cout<<""<<e0.getPosition()<<endl;
	
	cout<<""<<e1.getName()<<"\t";
	cout<<""<<e1.getId()<<"\t\t";
	cout<<""<<e1.getDepartment()<<"\t\t";
	cout<<""<<e1.getPosition()<<endl;
	
	cout<<""<<e2.getName()<<"\t";
	cout<<""<<e2.getId()<<"\t\t";
	cout<<""<<e2.getDepartment()<<"\t\t";
	cout<<""<<e2.getPosition()<<endl;
}
