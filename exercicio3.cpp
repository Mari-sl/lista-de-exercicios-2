  #include <iostream>
  using namespace std;
  
  int main()
  
  {
  	double a , b , c;
  	cout << " digite tres valores:";
  	cin >> a >> b >> c;
  	
  	double maior = a;
  	if ( b > maior) maior = b;
  	if ( c > maior) maior = c;
  	
  	cout << " O maior valor é: " << maior << endl;
  
  return 0;
  }