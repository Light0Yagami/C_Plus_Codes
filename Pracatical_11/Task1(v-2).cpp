#include<iostream>

using namespace std;
class Base{
	public:
		int value1;
		int value2;
	
};

class child:public Base{
	public:
	void display(){
		value1 = 10;
		value2 = 12;
		cout<<"Value1 =" << value1<<"\nValue2 = " <<value2;
		}

};

int main(){
	child obj;
	
	obj.display();

	return 0;
}
