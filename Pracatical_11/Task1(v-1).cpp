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

		cout<<"Value1 =" << value1<<"\nValue2 = " <<value2;
		}

};

int main(){
	child obj;
	
	obj.value1 = 30;   //Inherited data
	obj.value2 = 40;  //Inherited data
	
	obj.display();

	return 0;
}
