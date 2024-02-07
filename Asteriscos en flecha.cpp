#include <iostream>
using namespace std;
main(){
	int n = 0;
	cout<<"Ingrese la cantidad maxima se asteriscos a generar"<<endl;
	cin>>n;
	cout<<"Caso a)"<<endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"Caso b)"<<endl;
	for(int i = n; i>0; i--){
		for(int j = i; j>0; j--){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"Caso c)"<<endl;
	for(int i = n; i>0; i--){
		for(int k = 0; k>(i-n); k--){
			cout<<" ";
		}
		for(int j = i; j>0; j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"Caso d)"<<endl;
	for(int i = 0; i < n; i++){
		for(int k = (i-(n-1)); k<0; k++){
			cout<<" ";
		}
		for(int j = 0; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"Caso e)"<<endl;
	for(int i = 0; i < (n-1); i++){
		for(int k = (i-(n-1)); k<0; k++){
			cout<<" ";
		}
		for(int j = 0; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i = n; i>0; i--){
		for(int k = 0; k>(i-n); k--){
			cout<<" ";
		}
		for(int j = i; j>0; j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
