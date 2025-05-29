  #include <iostream>
  using namespace std;
  
  int main()
  {
  	
  	double peso , altura , r;
  	cout << "Digite o peso (kg) e a altura (m):";
  	cin >> peso >> altura;
  	
  	r= peso /( altura * altura);
  	
  	if ( r < 20)
  		cout << "Abaixo do peso:" << endl;
  	
  	else if ( r >= 20 && r , 25)
	  cout << " Peso ideal" << endl;
   else
   
	   cout << "Acima do peso" << endl;
	   
   return 0;
  
  }
  