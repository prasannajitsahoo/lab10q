#include <iostream>
using namespace std;
class Box 
{
   public:
      double length;
      double breadth;
      double height;
};
int main() 
{
   Box Box1;
   Box Box2;
   double volume=0.0;
   //information for box1
   Box1.height=5.0; 
   Box1.length=6.0; 
   Box1.breadth=7.0;
   //information for box2
   Box2.height=10.0;
   Box2.length=12.0;
   Box2.breadth=13.0;
   //volume of Box1
   volume=Box1.height*Box1.length*Box1.breadth;
   cout<<"Volume of Box1:"<<volume<<"cubic units\n";
   //volume of Box2
   volume=Box2.height*Box2.length*Box2.breadth;
   cout<<"Volume of Box2:"<<volume<<"cubic units\n";
   return 0;
}
