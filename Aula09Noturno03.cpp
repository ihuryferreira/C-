/*Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um programa em C++ para ler o
 pre�o do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no 
 tanque.*/
 
 #include <iostream>
 using namespace std;
 
 int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float precoL, valorpag, quantidade;
	
	cout<<fixed;
	cout.precision(2);
	
	cout<<"Informe o pre�o da gosolina: "<<endl;
	cin>>precoL;
	
	cout<<"Informe o valor pago: "<<endl;
	cin>>valorpag;
	
	
	quantidade = valorpag / precoL;
	
	cout<<"A quandidade de gosolina �: "<<quantidade<<" litros";
		 	
 }
