   #include <iostream>
   using namespace std;
   	
     
   int main()
   {
  
   double a, b;
   cout << "digite dois valor de : ";
   cin >> a >> b;
   
   
   if ( a > b)
   	cout << "O maior valor e" << a << endl;
   else if ( b > a)
   	 	cout << "O maior valor e" << b << endl;
   	 else 
   	 	cout << "Os valores sao identicos: " << endl;
   	 
   	 return 0;
   }