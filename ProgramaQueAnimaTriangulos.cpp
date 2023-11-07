#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
void delay(int secs){
	for(int i=(time(NULL)+secs);time(NULL)!=i;time(NULL));
}
void TrianguloArriba(){
	cout<<"  *"<<endl;
	cout<<" ***"<<endl;
	cout<<"*****"<<endl;
}
void TrianguloIzquierda(){
	cout<<"    *"<<endl;
	cout<<"  * *"<<endl;
	cout<<"* * *"<<endl;
	cout<<"  * *"<<endl;
	cout<<"    *"<<endl;
}
void TrianguloAbajo(){
	cout<<"*****"<<endl;
	cout<<" ***"<<endl;
	cout<<"  *"<<endl;
}
void TrianguloDerecha(){
	cout<<"*"<<endl;
	cout<<"* *"<<endl;
	cout<<"* * *"<<endl;
	cout<<"* *"<<endl;
	cout<<"*"<<endl;
}
int main(){
	bool continuacion=1;
	do{
		TrianguloArriba();
		delay(1);
		system("cls");
		TrianguloIzquierda();
		delay(1);
		system("cls");
		TrianguloAbajo();
		delay(1);
		system("cls");
		TrianguloDerecha();
		delay(1);
		system("cls");
	}
	while(continuacion==1);
	return 0;
}
