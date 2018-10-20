#ifndef Greet_h
#define Greet_h
// We should include <string> here
#include <string>
using namespace std;

// Implement your "greet" function below
void greet (string name, void(*myfunc)(string)) {

	myfunc(name);

}




#endif /* Greet_h */
