#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
void area(float radius)
{
   float area;
   area=3.14*radius*radius;
   cout<<"Area of circle is:: "<<area;
}
void area(float length,float breadth)
{
   float area=length*breadth;
   cout<<"Area of rectangle is::"<<area;

}
void area(float a,float b,float c)
{
   float s=(a+b+c)/2;
   float area=sqrt(s*(s-a)*(s-b)*(s-c));
   cout<<"Area of triangle is ::"<<area;
}
int main()
{
   int choice;
   float r,l,br,a,b,c;
   cout<<"1.Area of circle.\n2.Area of ractangle.\nArea of triangle.\n4.exit";
   while(1)
   {cout<<"\n\nEnter your choice>>:";
   cin>>choice;
   switch(choice)
   {
  case 1:
   {
      cout<<"\nEnter radius of circle>>:";
      cin>>r;
      area(r);
   }
   break;
  case 2:
   {
      cout<<"Enter length and breadth of rectangle::";
      cin>>l;
      cin>>br;
      area(l,br);
   }
   break;
  case 3:
   {
      cout<<"Enter the sides of triangle";
      cin>>a>>b>>c;
      area(a,b,c);
   }
   break;
  case 4:
   exit(0);

   }}
}
