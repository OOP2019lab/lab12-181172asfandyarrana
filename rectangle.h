#pragma once
#include <string>
#include "shape.h"
#include <iostream>
using namespace std;
//class shape;

class rectangle:public shape
{
	float width, length;
	
public:

	float area()
	{
		float area=width*length;

		return area;

	}
	rectangle(float, float, string);
	~rectangle(void);
};

