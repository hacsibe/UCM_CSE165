#ifndef App_hpp
#define App_hpp
#include "Rect.h"
#include "Vec.h"
#include<vector>
#include "GlutApp.h"

using namespace std;
class App: public GlutApp {
    // Maintain app state here
    float mx;
    float my;

    
    std::vector<Rect> rectangle;
public:
    // Constructor, to initialize state
    App(const char* label, int x, int y, int w, int h);
    
    // These are the events we want to handle
    void draw();
    void keyPress(unsigned char key);
    void mouseDown(float x, float y);
    void mouseDrag(float x, float y);
};

#endif
