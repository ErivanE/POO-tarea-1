#include <iostream>
using namespace std;

bool primo(int n){
	bool condicion;
	if(n != 1 && n != 0){	//comprobamos que el numero no es ni 1 ni 0
		for(int i = 2; i <=n ; i++){	//recorremos desde 2 hasta el numero que se manda a comprobar
			if(n % i==0){				//si el residuo del numero que queremos comprobar entre el numero del recorrido (i) es igual a 0
				if(n == i){				//Entonces comprobamos si el numero que estamos comprobando es igual al numero del recorrido
					condicion = true;
				}else{
					condicion = false;
					return condicion;
				}
			}
		}
	}else condicion = false;
	return condicion;
}
int main(){
	int n;
	
	cout<<"Ingresa el numero limite: ";
	cin>>n; 		//ingresa el limite
	
	for(int i=1; i<= n; i++){		//recorre desde 1 hasta el limite
		if(primo(i))cout<<i<<endl;	//si i es primo, se va a imprimir
	}
	
	
	return 0;
}
