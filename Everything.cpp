#include "Everything.h"

	//Overloading << and >> for Rect
	ostream & operator << (ostream &out, const Rect &r){
		out << "x: " << r.x << " y: " << r.y << " area: " << r.x * r.y;
		return out;
	}

	istream & operator >> (istream &in, Rect &r){
		cout << "Enter x: ";
		in >> r.x;
		cout << "Enter y: ";
		in >> r.y;
		return in;
	}

int main() {
	// I/O
	/*
	string input;
	string input2;
	cout << "Enter input. "; //Output to default output device
	cin >> input;			  //Input from default input device
	cout << "Enter more input. ";
	getline(cin, input2);
	cout << input << endl << input2 << endl;
	*/

	// File I/O
	ifstream inFile;
	ofstream outFile;
	string input;
	outFile.open("Input.txt");
	outFile << "This is a test\n";
	outFile << "This is working.\n";
	outFile.close();
	inFile.open("Input.txt");
	string output;
	while ( getline(inFile,output) ){
		cout << output << '\n';
	}
	inFile.close();

	/*
	 *
	 *
	 */
	// REVIEW SORTING AND SEARCHING ALGORITHMS
	/*
	 *
	 *
	 */

	//Repetition
	int num;
	cout << "Input a number from 1-5.\n";
	cout << 1 << endl;
	num = 1;
	//cin >> num;
	switch(num){
	case 1:
		cout << "Case " << num << endl;
		break;												// break; prevents default case from running along with other cases
	case 2:
		cout << "Case " << num << endl;
		break;
	case 3:
		cout << "Case " << num << endl;
		break;
	case 4:
		cout << "Case " << num << endl;
		break;
	case 5:
		cout << "Case " << num << endl;
		break;
	default:
		cout << "Default Case, input: " << num << endl;
		break;
	}

	int x = 0;
	do{
		x -= 10;
	}while(x > 0);
	cout << "x: " << x << endl;


	// Functions
	int y = 100;
	cout << "Sum of " << x << " and " << y << ": " << sum(x, y) << endl;
	// sin(x), cos(x), abs(x), ceil(x), etc in <cmath>
	//


	//Enumeration
	enum month{
		Jan = 1, Feb, March, April, May, June, July, Aug, Sep, Oct, Nov, Dec};
	string months[] = {"January", "F", "March", "A", "May",
			"June", "July", "A", "S", "O", "N", "D"};
	month current = Oct;
	cout << "Month: " << current << endl;
	switch (current){
	case 1:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 2:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 3:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 4:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 5:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 6:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 7:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 8:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 9:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 10:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 11:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	case 12:
		cout << "The month is " << months[current - 1] << ".\n";
		break;
	default:
		cout << "Unknown month.\n";
	}


	//Arrays and strings
	char s1[20] = "Jack Schmid";
	char s2[10];
	strcpy(s2, s1);
	cout << s2 << " Len: " << strlen(s2) << endl; //need #include <string.h>



	// Operator Overloading
	Rect a = Rect(10, 10);
	Rect b = Rect(15, 30);
	Rect c = a + b;
	Rect d;
	Rect e;
	cout << "Creating a new Rect\n";
	cin >> e;
	d = c;
	a.print();
	cout << b << endl;
	c.print();
	cout << d << endl;
	e.print();
	//Friend Function
	cout << Friend(d) << endl;
	//Friend Class
	//In header file with class node and linkedlist

	//Stacks and Queues
	stack <int> s;	//stack is []
	s.empty();		//returns true
	s.push(10);		//stack is [10]
	s.empty();		//returns false
	s.push(99);		//stack is [10, 99]
	s.pop();		//stack is [10]
	s.push(1);		//stack is [10, 1]
	s.push(5);		//stack is [10, 1, 5]
	s.push(265);	//stack is [10, 1, 5, 265]
	s.top();		//returns reference to 265
	s.size();		//returns 4

	queue <int> q;	//queue is []
	q.empty();		//returns true
	q.push(15);		//queue is [15]
	q.push(14);		//queue is [14, 15]
	q.pop();		//queue is [14]
	q.push(1);		//queue is [1, 14]
	q.push(19);		//queue is [19, 1, 14]
	q.push(7);		//queue is [7, 19, 1, 14]
	q.pop();		//queue is [7, 19, 1]
	q.front();		//returns 1
	q.back();		//returns 7
	q.size();		//returns 3


	return 0;
}



int sum(int x, int y){
	return(x + y);
}

void Rect::print(){
	cout << "x: " << x << " y: " << y << " area: " << area() << endl;
}
Rect Rect::operator+(const Rect &r){
	return Rect(x + r.x, y + r.y);
}
Rect Rect::operator*(const Rect &r){
	return Rect(x*r.x, y*r.y);
}
Rect Rect::operator=(const Rect &r){
	x = r.x + 1;
	y = r.y + 2;
	return Rect(x, y);
}
Rect::Rect(int x, int y){
	this->setX(x);
	this->setY(y);
}

int Friend(Rect r){
	return (r.x + 2*r.y);
}
