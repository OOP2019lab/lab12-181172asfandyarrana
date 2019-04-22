#pragma once
#include <string>
using namespace std;
#include <iostream>
class shape
{
protected:
	string type;
	
public:
	virtual float area()
	 {
            
		 return 0.0f;
	 }
	shape(string);
	virtual ~ shape(void);
	string color;
};

