
#include<iostream>
using namespace std ;

namespace first{

	int add( int x, int y ){
		cout << "In Int " ;
		return x + y  ;
	}
}

namespace second{

	float add( float x, float y ){
		cout << "In Float "  ;
		return x + y  ;
	}
}

	using namespace first ;
	using namespace second ;

int main(){

	cout << add( 2, 4 ) << endl ;

	cout << add( 2, 4.2 ) << endl ;

	cout << add( 2.2, 4 ) << endl ;

	cout << add( 2.2f, 4.2f ) << endl ;	//	By Default float is double

	return 0;
}
