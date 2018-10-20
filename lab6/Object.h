#ifndef Object_h
#define Object_h

class Object {
	
public:
	static int count; 


public:

	Object(){
		count++;
	}

	Object(const Object&){
		count++;
	}
};

#endif