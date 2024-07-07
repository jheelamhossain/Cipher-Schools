#include <iostream>

using namespace std;

class Coordinate
{
	private:
		float a;
		float b;
		
	public:
	
	void distancefromcoordinate(float a,float b)
	{
		float dist;
		
		dist=(this->a-a)*(this->a-a)+(this->b-b);
	}
}
int main()
{
	
	Coordinate x;
	x.a=0;
	x.b=0;
	
	
	x.distancefromcoordinate();

}
