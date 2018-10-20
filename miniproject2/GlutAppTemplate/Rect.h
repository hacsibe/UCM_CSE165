#ifndef Rect_H
#define Rect_H
#include "Vec.h"
#include <iostream>
using namespace std;

class Rect {
private:
	float x;
	float y;
	float w;
	float h;
	float r;
	float g;
	float b;

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

		r = 0.0f;
		g = 1.0f;
		b = 1.0f;
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

	float getR (){
		return r;

	}

	float getG(){
		return g;

	}

	float getB(){
		return b;

	}

	float setX(float x){
		return x;
	}

	float setY(float y){
		return y;
	}

	float setW(float w){
		return w;
	}
	float setH(float h){
		return h;
	}

	void setrgb (float red, float blue, float green){
		r = red;
		g = green;
		b = blue;

	}
	bool contains (float a, float b) {

		if (a <= (x + w) && a >= x  && b <= (y) && b >= (y - h)){

			return true;
		}

		else {
			return false;

		}


	}

};

#endif