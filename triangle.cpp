#include "triangle.h"


triangle::triangle(float b , float h , string c): shape(c)
{
	base=b;
	height=h;
}


triangle::~triangle(void)
{
	cout<<"destructor called triangle"<<endl;
}
