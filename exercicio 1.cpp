  #include <iostream>
  using namespace std;
  
  int main()
  {
  	float a, b;
  	
  	cout << " digite dois valores distintos: ";
   
   cin >> a >> b;
   
   if ( a != b ) 
   	  cout << " O maior valor e " << ( a > b ? a : b ) << endl;
    else 
     	cout << "Os valores devem ser distintos:" << endl;
     
   return 0;
  	
  	
  	
  }