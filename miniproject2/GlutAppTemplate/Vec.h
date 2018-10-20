#ifndef Vec_H 
#define Vec_H
#include <iostream>
using namespace std;

class Vec {

public:
	
Vec() {

	
	x = y = 0;
}
	Vec(float x, float y){
		this->x = x;
		this->y = y;
	}
	float getX (){
		return x;

	}

	float getY (){
		return y;

	}
	void add (Vec v) {
		x += v.x;
		y += v.y;

	}
	void print (){
		cout <<  "("<< x <<","<< y <<")" << endl;
	}

	private:
	float x;
	float y;
   
  };

 


#endif


