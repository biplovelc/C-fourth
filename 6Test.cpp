#include<iostream>
using namespace std;

class TestScores
{
	private:
		int test1, test2, test3;
	public:
		TestScores(int t1, int t2, int t3){
			test1 = t1;
			test2 = t2;
			test3 = t3;
		}
		
		void setOne(int t1){
			test1 = t1;
		}
		
		void setTwo(int t2){
			test2 = t2;
		}
		
		void setThree(int t3){
			test3 = t3;
		}
		
		int getOne(){
			return test1;
		}
		
		int getTwo(){
			return test2;
		}
		
		int getThree(){
			return test3;
		}
		
		int average(){
			int avg;
			avg = (test1+test2+test3)/3;
		}
};

int main()
{
	int a, b, c;
	cout<<"Enter three test scores:\n";
	cin>>a>>b>>c;
	TestScores t(a, b, c);
	cout<<"Average scores = "<<t.average();
}
