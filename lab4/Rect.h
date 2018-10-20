#ifndef Rect_H
#define Rect_H
//#include "Vec.h"
#include <iostream>
using namespace std;

class Rect {
private:
	float x;
	float y;
	float w;
	float h;

public:

	Rect(){
		x = 0.0f;
		y = 0.0f;
		w = 0.0f;
		h = 0.0f;
	}

	Rect(float a, float b, float c, float d){
		x = a;
		y = b;
		w = c;
		h = d;
	}
	float getX(){
		return x;

	}

	float getY (){
		return y;

	}
	float getW (){
		return w;

	}

	float getH (){
		return h;

	}
	bool contains (Vec vector ) {

		if (vector.getX() <= (x + w) && vector.getX() >= x  && vector.getY() <= (y) && vector.getY() >= (y - h)){

			return true;
		}

		else {
			return false;

		}


	}

};

#endif