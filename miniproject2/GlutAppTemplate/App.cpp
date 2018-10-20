#include "App.h"
#include "Rect.h"
//#include "Vec.h"

App::App(const char* label, int x, int y, int w, int h): GlutApp(label, x, y, w, h){
    // Initialize state variables
    mx = 0.0;
    my = 0.0;

    //float red = 0.0;
    //float green = 0.0;
    //float blue = 0.0;
  
    rectangle.push_back(Rect(-0.3f, 0.15f, 0.6f, 0.8f));
    rectangle.push_back(Rect(0.12f, 0.8f, 0.4f, 0.6f));

}

void App::draw() {

    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // Set background color to black
    glClearColor(0.0, 0.0, 0.0, 1.0);
    
    // Set up the transformations stack
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // Set Color
    glColor3d(1.0, 1.0, 1.0);
    
    // Draw some points
    glBegin(GL_POINTS);
    
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    
    glEnd();
    
    // Draw a yellow cross
    glColor3d(1.0, 1.0, 0.0);
    
    glBegin(GL_LINES);
    
    glVertex2f(mx - 0.05f, my);
    glVertex2f(mx + 0.05f, my);
    
    glVertex2f(mx, my - 0.05f);
    glVertex2f(mx, my + 0.05f);
    
    glEnd();
    
    for (int i = 0; i < rectangle.size(); i++){
    glColor3d(rectangle[i].getR(), rectangle[i].getG(), rectangle[i].getB());
    float x = rectangle[i].getX();
    float y = rectangle[i].getY();
    float w = rectangle[i].getW();
    float h = rectangle[i].getH();

    
    //cout<<rectangle[0]->getR()<<endl<<rectangle[0]->getG()<<endl;
    glRectf(x ,y, x+w,y-h );

    
    glEnd();
    
 	}

    /*glColor3d(1.0, 0.0, 0.0);
    
    glEnd(); */
    // We have been drawing everything to the back buffer
    // Swap the buffers to see the result of what we drew
    glFlush();
    glutSwapBuffers();
}

void App::mouseDown(float x, float y){
    // Update app state
    mx = x;
    my = y;
   for (int i = 0; i < rectangle.size(); i++){
   if (rectangle[i].contains(mx, my)){
  		rectangle[i].setrgb(1.0,1.0,0.0);
  		//redraw();
  		//cout<<int(1)<<endl;
  	}

  	else {
  		rectangle[i].setrgb(0.0, 1.0, 1.0);
  		//cout<<int(3)<<endl;
  	}
  }
    // Redraw the scene
    redraw();
}

void App::mouseDrag(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    // Redraw the scene
    redraw();
}

void App::keyPress(unsigned char key) {
    if (key == 27){
        // Exit the app when Esc key is pressed
        exit(0);
    }
}