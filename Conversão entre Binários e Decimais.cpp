#include "iostream"
#include "locale.h"
#include "stdlib.h"
#include "math.h"

using namespace std;

int main(){

setlocale(LC_ALL,"portuguese");

string b;

int guardentry,entry,op;
int rep=0,volt;

while(rep==0){
system("cls");
cout << "Menu de op��es:" << endl;
cout << "1 - Converter um n�mero decimal para bin�rio." << endl;
cout << "2 - Converter um n�mero bin�rio para decimal." << endl;
cout << "3 - sair" << endl;
cin >> op;

while(op>3 || op < 1){
	system("cls");
cout << "Menu de op��es:" << endl;
cout << "1 - Converter um n�mero decimal para bin�rio." << endl;
cout << "2 - Converter um n�mero bin�rio para decimal." << endl;
cout << "3 - sair" << endl;
cin >> op;
}

if(op==1){
	system("cls");
	cout << "Insira o valor que deseja converter para bin�rio" << endl;
	cin >> entry;
	guardentry=entry;
	
	while(entry>0){
		if(entry%2==0){
			b= "0"+b;
		}
		else{
			b= "1"+b;
        }
          entry=entry/2;
	}
	system("cls");
	cout << " " << endl;
	cout << "O n�mero " << guardentry << " � igual a " << b << " em bin�rio." << endl;
	cout << " " << endl;
	cout << "Menu:" << endl;
	cout << "1 - Sair " << endl;
	cout << "Qualquer outro caractere ir� te levar ao in�cio" << endl; 
	
	
	cin >> volt;
	if(volt==1){
	system("cls");
	cout << "--- FINALIZANDO PROGRAMA ---" << endl;
	return 0;
}

}

if(op==2){
	system("cls");
	cout << "Quantos digitos ter� o seu n�mero bin�rio" << endl;
    cin >> entry;
    while(entry<1){
 	system("cls");
 	cout << "Insira uma quantidade v�lida." << endl;
 	cout << " " << endl;
	cout << "Quantos digitos ter� o seu n�mero bin�rio" << endl;
	cin >> entry;	
	}
    int entry2, i,j=0,con=entry-1,conv=0;
     string bina;
    
    
    for(i=0;i<entry;i++){
		cout << "Insira o " << i+1 << "� digito." << endl;
		cin >> entry2;
		if(entry2>1 || entry2<0){
			cout << " --- " << endl;
			cout << "Insira um n�mero v�lido" << endl;
			cout << " --- " << endl;
			i=i-1;
		}
		if(entry2==0){
		conv = conv + entry2*(pow(2,con));
		con=con-1;
		bina = bina+"0";
			
		}
		if(entry2==1){
        conv = conv + entry2*(pow(2,con));
		con=con-1;
		bina= bina+"1";
		}

	}
	system("cls");
	cout << " " << endl;
	cout << "O n�mero bin�rio " << bina << " � " << conv << " em decimal." << endl;
	cout << " " << endl;
	cout << "Menu:" << endl;
	cout << "1 - Sair " << endl;
	cout << "Qualquer outro caractere ir� te levar ao in�cio" << endl; 
	cin >> volt;
    if(volt==1){
	system("cls");
	cout << "--- FINALIZANDO PROGRAMA ---" << endl;
	return 0;
}

}

if(op==3){
	system("cls");
	cout << "--- FINALIZANDO PROGRAMA ---" << endl;
	return 0;
}

}

	return 0;
}