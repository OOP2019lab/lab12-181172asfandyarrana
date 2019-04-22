#pragma once
#include <string>
#include "shape.h"
#include <iostream>
using namespace std;
class triangle:public shape
{
	float base, height;
	
public:
	
	float area()
	{
		float area=.5*base*height;

		 return  area;
	}
	triangle(float , float , string);
	~triangle(void);
};

