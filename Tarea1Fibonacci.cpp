#include <iostream>
using namespace std;

int main(){
	int numero1=0,numero2=1,temp;
	
	for(int i=0;i<=20;i++){
		cout<<numero1<<endl;
		
		temp = numero1+numero2;
		numero1=numero2;
		numero2=temp;
	}

	return 0;
}
