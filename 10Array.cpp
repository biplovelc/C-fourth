#include<iostream>
using namespace std;

class ArrayNumber
{
	private:
		int size;
		double *array;
	public:
		ArrayNumber(int n)
		{
			size = n;
	  		array = new double(size);
	  		
	  		cout<<"Enter elements:\n";
			for (int i = 0; i < size; i++) {
	   			cin>>array[i]; 
	  		};
		}
		
		void store(int position, double number){
			array[position] = number; 
			cout<<"That value is stored."<<endl;
		}
		
		double retrive(int a){
			return array[a];
		}	
		
		double highest(){
			double max = array[0];
			for(int i=1; i<size; i++){
				if(array[i]>max){
					max = array[i];
				}
			}
			return max;
		}
		
		double lowest(){
			double min = array[0];
			for(int i=1; i<size; i++){
				if(array[i]<min){
					min = array[i];
				}
			}
			return min;
		}
		
		double average(){
			double sum = 0;
			for(int i=0; i<size; i++){
				sum += array[i];
			}
			return sum/size;
		}
};

int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;

	ArrayNumber a(n);
	
	int position; double number;
	cout<<"Enter positions and number you want to store:\n";
	cin>>position>>number;
	a.store(position, number);
	
	int pos;
	cout<<"Enter a location of number you want: ";
	cin>>pos;
	cout<<"Retrived number = "<<a.retrive(pos)<<endl;
	
	cout<<"\nHighest number = "<<a.highest();
	cout<<"\nLowest number = "<<a.lowest();
	cout<<"\nAverage number = "<<a.average();
	
}
