#include<iostream>
#include<string>
using namespace std;

int guess;
int score = 0;
class Question
{
	private:
		string question;
		string one;
		string two;
		string three;
		string four;
		int correct;
	public:
		Question(string q, string fir, string t, string th, string f, int c){
			question = q;
			one = fir;
			two = t;
			three = th;
			four = f;
			correct = c;
		}
		void print(){
			cout<<question<<endl;
			cout<<"1. "<<one<<endl;
			cout<<"2. "<<two<<endl;
			cout<<"3. "<<three<<endl;
			cout<<"4. "<<four<<endl;
			
			cout<<"Your ans: ";
			cin>>guess;
			cout<<endl; 
			
			if(guess == correct)
			{
				score++;
			}
		}

};

int main()
{
	Question q1("What is the color of apple?",
				"Red",
				"Black",
				"White",
				"Blue",
				1
			);
	
	Question q2("What is the color of Banana?",
				"Red",
				"Black",
				"Yellow",
				"Blue",
				3
			);
			
	Question q3("What is the color of Mango?",
				"Red",
				"Black",
				"Yellow",
				"Blue",
				3
			);
			
	Question q4("What is the color of sky?",
				"Red",
				"Black",
				"Yellow",
				"Blue",
				4
			);
			
	Question q5("What is the color of Orange?",
				"Red",
				"Orange",
				"Yellow",
				"Blue",
				2
			);
			
	Question q6("What is the color of leaf?",
				"Red",
				"Black",
				"Yellow",
				"Green",
				3
			);
			
	Question q7("What is the color of ash?",
				"Red",
				"Black",
				"grey",
				"Green",
				3
			);
		
	Question q8("What is the color of girl?",
				"Red",
				"Black",
				"Yellow",
				"Pink",
				4
			);
			
	Question q9("What is the color of coca-cola?",
				"Red",
				"Black",
				"Yellow",
				"Green",
				2
			);
			
	Question q10("What is the color of saree?",
				"Red", 
				"Black",
				"Yellow",
				"Green",
				1
			);
			
	cout<<"First five questions:-\n";
	q1.print();
	q2.print();
	q3.print();
	q4.print();
	q5.print();
	cout<<"Your score is "<<score<<" out of five."<<endl;
	cout<<endl;
	
	score=0;
	cout<<"\nSecond five questions:-\n";
	q6.print();
	q7.print();
	q8.print();
	q9.print();
	q10.print();
	cout<<"Your score is "<<score<<" out of five."<<endl;
	
		
		
		
}
		
		
		
	
