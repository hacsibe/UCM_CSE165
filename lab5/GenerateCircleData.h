#ifndef GenerateCircleData_h
#define GenerateCircleData_h
#include <math.h>
#include "Vec.h"

void generateCircleData(std::vector<Vec*>& points, const Vec& center, float radius, int resolution){
    // Clear the points vector to make sure it's empty before you start
    points.clear();

	// Provide the rest of the code here...
    float x;
    float y;
    
    float theta = (2.0f * M_PI) / resolution;  

    
    for (float i = 0; i < 2 * M_PI; i+= theta){ 
    
        x = radius * cos(i) + center.getX();
        y = radius * sin(i) + center.getY();

        points.push_back(new Vec(x, y));
	
    }
}
    

#endif
