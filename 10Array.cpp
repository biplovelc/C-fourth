#include<iostream>
using namespace std;

class Number
{
	private:
		double array[];
		int num;
	public:
		Number(){}
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
		
		double getNum(){
			return array[4];
		}
		
		double highest()
		{
			int max = array[0];
			for(int i=1; i<7; i++){
				if(array[i]>max){
					max = array[i];
				}
			}
			return max;
		}
		
		double lowest()
		{
			int min = array[0];
			for(int i=1; i<7; i++){
				if(array[i]<min){
					min = array[i];
				}
			}
			return min;
		}
		
		double average(){
			double avg; int s=0;
			for(int i=0; i<7; i++){
				s += array[i];
			}
			return (double)s/num;
		}
};

int main()
{
	Number *a;
	
	
	a = new Number[7]{1.2, 2.3, 4.5, 5.6, 6.7, 8.9,9.0};
	
	a->setNum(10.4);
	cout<<"Retrived number = "<<a->getNum()<<endl;
	cout<<"Highest number = "<<a->highest()<<endl;
	cout<<"Lowest = "<<a->lowest()<<endl;
	cout<<"Average = "<<a->average();
	

	
}
