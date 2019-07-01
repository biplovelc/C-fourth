#include<iostream>
using namespace std;

class Number
{
	private:
		float array[];
		int num;
	public:
		Number(int n){
			num = n;
			array[n];
		}
		~Number(){
			array[0];
		}
		
		void setNum(int a){
			array[3] = a;
		}
		
		double getNum(int a){
			return array[a];
		}
		
		double highest()
		{
			int max = array[0];
			for(int i=1; i<num; i++){
				if(array[i]>max){
					max = array[i];
				}
			}
			return max;
		}
		
		double lowest()
		{
			int min = array[0];
			for(int i=1; i<num; i++){
				if(array[i]<min){
					min = array[i];
				}
			}
			return min;
		}
		
		double average(){
			double avg; int s=0;
			for(int i=0; i<num; i++){
				s += array[i];
			}
			return s/num;
		}
};

int main()
{
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	
	Number example[size]=;
	{
		cout<<"Highest = "<<example.highest();
	}
}
