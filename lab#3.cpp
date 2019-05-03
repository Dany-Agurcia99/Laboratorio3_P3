#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <sstream>
using std::stringstream;

#include <vector>
using namespace std;

int op1(int,int);
void op2(int,int,string,int*);
void op3();
int* CalculadoraPrimos(int);
int main(){
int opcion=0;
        while(opcion!=4){
		cout<<"***********************"<<endl;
                cout<<"     Menu"<<endl
                <<"1-Ejercicio #1"<<endl
                <<"2-Ejercicio #2"<<endl
                <<"3-Ejercicio #3"<<endl
                <<"4-Salir"<<endl;
		cout<<"***********************"<<endl;
                cout<<"Ingrese una opcion: ";
                cin>>opcion;
                switch(opcion){
                        case 1:
				{
				cout<<"Eligio opcion 1"<<endl;
				cout<<"****************"<<endl;
				int num_a;
				int num_b;
				cout<<"Ingrese numero a: ";
				cin>>num_a; 
				cout<<"Ingrese numero b: ";
				cin>>num_b;
				while((num_b>num_a)||(num_a<0)||(num_b<0)){
					cout<<"El numero b no puede ser mayor que a y ambos tienen que ser positivos"<<endl;
					cout<<"Ingrese numero a: ";
                	                cin>>num_a;
        	                        cout<<"Ingrese numero b: ";
	                                cin>>num_b;
				}
                                int MCD = op1(num_a,num_b);
				cout<<"El MCD es: "<<MCD<<endl;
				}
                                break;
                        case 2:
				{
                                cout<<"Eligio opcion 2"<<endl;
				cout<<"****************"<<endl;
				int* primos = CalculadoraPrimos(25);
				int numero;
				string salida="";
				cout<<"Ingrese numero a calcular: "<<endl;
				cin>>numero;
				op2(0,numero,salida,primos);
				if(primos!=NULL){
                			delete[] primos;
        			}
				}
                                break;
                        case 3:
                                cout<<"Eligio opcion 3"<<endl;
                                cout<<"****************"<<endl;
				op3();
                                break;
                        case 4:
                                cout<<"Adios amigo"<<endl;
                                break;
                }
        }
return 0;
}
int op1(int num_a,int num_b){
	int residuo = num_a%num_b;
	if(residuo==0){
		return num_b;
	}else{
		op1(num_b,residuo);
	}
}

void op2(int posicion,int numero,string salida,int* arreglo){
	while(numero!=1){
		int contador=0;
		while(numero%arreglo[posicion]==0){
			numero=numero/arreglo[posicion];
                	contador++;
        	}
		if(contador!=0){
                	stringstream stream1;
                	stream1<<salida<<"("<<arreglo[posicion]<<"^"<<contador<<")";
                	salida=stream1.str();
        	}
		posicion++;
	}
	cout<<"El numero es obtenido de la siguiente forma: "<<salida<<endl;
}


void op3(){
	int opcion2=0;
        while(opcion2!=5){
                cout<<"     Menu"<<endl
                <<"1-Insertar Guerra"<<endl
                <<"2-Buscar Guerra"<<endl
                <<"3-Eliminar Guerra"<<endl
                <<"4-Listar Guerra"<<endl
		<<"5-Salir"<<endl;
                cout<<"Ingrese una opcion: ";
                cin>>opcion2;
                switch(opcion2){
                        case 1:
                                cout<<"Eligio Insertar Guerra"<<endl;
                                
                                break;
                        case 2:
                                cout<<"Eligio Buscar Guerra"<<endl;
                                
                                break;
                        case 3:
                                cout<<"Eligio Eliminar Guerra"<<endl;
                                
                                break;
                        case 4:
				{
                                cout<<"Eligio Listar Guerras"<<endl;
				int op;
				cout<<"1-Listar todo"<<endl
			<<"2-Listar por continente"<<endl;
				cout<<"Ingrese una opcion: ";
			  	cin>>op;
				switch(op){
					case 1:
						cout<<"Eligio Listar todo"<<endl;
						break;
					case 2:
						cout<<"Eligio Listar por Continente"<<endl;
						break;	
				}
				}	
                                break;
                }
        }
}


int* CalculadoraPrimos(int tam){
	int* arreglo = new int[tam];
	arreglo[0]=2;
	arreglo[1]=3;
	arreglo[2]=5;
	arreglo[3]=7;
	arreglo[4]=11;
	arreglo[5]=13;
	arreglo[6]=17;
	arreglo[7]=19;
	arreglo[8]=23;
	arreglo[9]=29;
	arreglo[10]=31;
	arreglo[11]=37;
	arreglo[12]=41;
	arreglo[13]=43;
	arreglo[14]=47;
	arreglo[15]=53;
	arreglo[16]=59;
	arreglo[17]=61;
	arreglo[18]=67;
	arreglo[19]=71;
	arreglo[20]=73;
	arreglo[21]=79;
	arreglo[22]=83;
	arreglo[23]=89;
	arreglo[24]=97;
	return arreglo;
}
