   #include <iostream>
    using namespace std;
   
   int main(){
   	
	   float  valor a;
	   float  valor b;
	   float  valor c;
	   float maior;
	   cout << "digite o primeiro valor:";
	   cin >> a;
	   cout << "digite o segundo valor:";
	   cin >> b;
	   cout << " digite o eterceiro valor":;
	   cin >> c;
	   maior = a;
	   
	   if ( b > maior ) maior = b;
	   if ( c > maior ) maior = c;
	   
	   cout << "o maior valor e:<< maior>> ";
   
   return 0;
	   
   }