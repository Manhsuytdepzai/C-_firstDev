#include <iostream>
#include <conio.h> 
using namespace std;
int main() 
{
	int cho, ga;
	for (cho = 1; cho < 36; cho++)
		for ( ga = 1; ga < 36; ga++)
			if ( ( ga + cho == 36) && ( ga* 2+ cho*4 == 100 ) )
				{
					cout<<"So ga= "<<ga<<endl;
					cout<<"So cho= "<<cho<<endl;
				}
	getche ();
	return 0; 				
}
