// l181172.cpp : Defines the entry point for the console application.
//

#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"
#include <iostream>
#include <conio.h>
float sumarea(shape *s1, shape *s2)
{
	return s1->area()+s2->area();

	
}

void main ()
{
	triangle t1(1.0,9.0, "Red");
    circle c1(2, "Blue");
    rectangle r1(6,2, "Orange");
	cout<<t1.area();
	cout<<endl;
	cout<<t1.color;
	cout<<endl;
	cout<<c1.area();
	cout<<endl;
	cout<<r1.area();
	cout<<endl;

	shape *sptr1= &t1;
    shape &sref=r1;
	cout<< sptr1->area();
	cout<<endl;
	cout<< sptr1->color;
	cout<<endl;
	cout<< sref.color;
	cout<<endl;
	cout<< sref.area();
	cout<<endl;

	shape s1("Purple");
 
cout<<sumarea(&t1,&c1);
cout<<endl;
cout<<sumarea(&s1,&r1);
cout<<endl;
cout<<sumarea(&s1,&t1);
cout<<endl;
 
//int count=5; 
//shape** shapesarray=new shape*[count];
//string color;
//for(int i=0; i<count;)
//{
//  	cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
//  	switch (_getche())
//  	{
//        	case '1':
//				float base, height;
//				
//				cout<<endl;
//              	//get base from user as input
//				cout<<"enter base and height"<<endl;
//				cin>>base>>height;
//              	//get height from user as input
//              	//get color from user as input
//				cout<<"enter color"<<endl;
//				cin>>color;
//              	// create new triangle object and add to shapesArray[i]
//				shapesarray[i]=new triangle(base,height,color);
//                                	i++;
//              	break;
//        	case '2':
//              	//get length from user as input
//				float width, length;
//				cout<<endl;
//				cout<<"enter length and width"<<endl;
//				cin>>length>>width;
//              	//get width from user as input
//              	//get color from user as input
//					cout<<"enter color"<<endl;
//				cin>>color;
//              	// create new rectangle object and add to shapesArray[i]
//				shapesarray[i]=new rectangle(width,length,color);
//				
//                                	i++;
//              	break;
// 
//        	case '3':
//                  float radius;            
//				  	cout<<endl;
//				cout<<"enter radius"<<endl;
//				cin>>radius;
//              	//get radius from user as input
//				cout<<"enter color"<<endl;
//				cin>>color;
//              	// create new circle object and add to shapesArray[i]
//				shapesarray[i]=new circle(radius,color);
//                                	i++;
//              	break;
// 
//   	 	default:
//              	cout<<"Invalid input. Enter again." <<endl<<endl;
//              	break;
//}
// 
//
//}
//
//    for(int i=0; i<count;i++)
//	{
//		if(shapesarray[i]!=nullptr)
//		{cout<<shapesarray[i]->area();
//		cout<<endl;}
//
//	}
//	
//
//    for(int i=0; i<count;i++)
//	{
//		if(shapesarray[i]!=nullptr)
//		{
//			delete shapesarray[i];
//		}
//
//	}
//	delete [] shapesarray;
//
	 
shape *s2= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
delete s2; //identify which destructor in invoked
 

}


