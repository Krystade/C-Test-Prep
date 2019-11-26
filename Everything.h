#ifndef EVERYTHING_H_
#define EVERYTHING_H_


#include <iostream>
#include <fstream>
#include <cmath>
#include <string.h>
//VVV STL stuff VVV//
#include <stack>
#include <queue>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int sum(int x, int y);

class Rect{
public:
	Rect(){x = 0; y = 0;}
	Rect(int x, int y);
	~Rect(){};
	void setX(int newX){x = newX;}
	void setY(int newY){y = newY;}
	int getX(){return x;}
	int getY(){return y;}
	int area(){return x*y;}
	void print();
	Rect operator=(const Rect &r);
	Rect operator*(const Rect &r);
	Rect operator+(const Rect &r);
	//Declaring a friend function
	friend int Friend(Rect);
	//Overloading << and >>
	friend ostream & operator << (ostream &out, const Rect &r);
	friend istream & operator >> (istream &in, Rect &r);
private:
	int x;
	int y;
};

class Node;
class LinkedList{
public:
	Node * first;
	Node * last;
	int size;
private:
};

class Node {
private:
    int key;
    Node* next;
    /* Other members of Node Class */

    friend class LinkedList;
    // Now class  LinkedList can
    // access private members of Node
};

#endif /* EVERYTHING_H_ */
