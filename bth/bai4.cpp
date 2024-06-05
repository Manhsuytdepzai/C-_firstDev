#include <iostream.h> 
int  main  () { 
	int  n ; 
	cout << "nhap n:" ; cin >> n ; 
	int  dem  =  0 ; 
	for  ( int  i = 1 ;  i <= n ;  i ++ ) 
		{ 
			int  s = 0 ; 
			for  ( int  j = 1  ;  j < i ;  j ++ ) 
					if ( i % j == 0 ) 
						s  =  s  +  j ; 
					if  ( s == i ) 					
						dem ++ ; 				  
		} 
			cout << "so hoan hao trong pham vi" << n << " la : " << dem << endl ; 
	return  0 ; 
}