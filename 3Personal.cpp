#include<iostream>
#include<string>
using namespace std;

class Personal
{
	private:
		string name;
		string address;
		int age;
		int phoneNumber;
	public:
		void setName(string n){
			name = n;
		}
		
		void setAddress(string a){
			address = a;
		}
		
		void setAge(int b){
			age = b;
		}
		
		void setPhone(int p){
			phoneNumber = p;
		}
		
		string getName(){
			return name;
		}
		
		string getAddress(){
			return address;
		}
		
		int getAge(){
			return age;
		}
		
		int getPhone(){
			return phoneNumber;
		}
};

int main()
{
	Personal info[3];
	string n, add; int a, p;
	
	for(int i=0; i<3; i++){
		cout<<"Enter name: ";
		cin>>n;
		info[i].setName(n);
		
		cout<<"Enter address: ";
		cin>>add;
		info[i].setAddress(add);
		
		cout<<"Enter age: ";
		cin>>a;
		info[i].setAge(a);
		
		cout<<"Enter Phone Number: ";
		cin>>p;
		info[i].setAge(p);
		cout<<endl;
	}
	
}
