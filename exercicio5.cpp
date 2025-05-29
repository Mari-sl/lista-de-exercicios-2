  #include <iostream>
  using namespace std;
  
  int main()
  {
  	double base, altura;
  	cout << "Digite a base e a altura do terreno: ";
  	cin >> base >> altura;
  	 double area = base * altura;
  	 
  	 if ( area > 100)
  	 	cout <<"Terreno grande" << endl;
  	 
  	 return 0;
  }