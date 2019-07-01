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
	Employee e[3];
	e[0]("Susan Meyers", 47899, "Accounting", "Vice President");
	e[1]("Mark Jones", 39119, "Info Technology", "Programmer");
	e[2]("Joy Rogers", 81774, "Manufacturing", "Engineer");
	cout<<"Name\t\tID Number\tDepartment\t\tPosition"<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<""<<e[i].getName()<<"\t";
		cout<<""<<e[i].getId()<<"\t\t";
		cout<<""<<e[i].getDepartment()<<"\t\t";
		cout<<""<<e[i].getPosition()<<endl;
	}
}
