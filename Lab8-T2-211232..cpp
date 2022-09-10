#include <iostream>
/*Two functions in which one asks the user to enter the
 radius of the circle and then returns that
number as a float and another function that takes
 this radius as input and returns the area of circle.*/
using namespace std;

double int_to_float(); //Function for returning float datatype
double area(double radius); //function for returining area of circle

int main() 
{
	float result;
	
	result=int_to_float();
	cout<<"Value of radius in float= "<<result; //first function call 
	cout<<endl<<endl<<endl;
	
	cout<<"Area of the Circle= "<<area(result); // Second function call
	
	return 0;
}
double int_to_float() //function defination for first function
{
	int radius;
	cout<<"Enter the radius of Circle: "; cin>>radius;
	return static_cast<float>(radius);
}
double area(double radius) //function defination for second function 
{
	double area;
	area=3.14*(radius*radius);
	return area;
}






