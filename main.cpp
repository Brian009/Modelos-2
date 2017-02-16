
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void cuadradolleno(int b,bool vacio);
void triangulo(int t);
int main(int argc, char** argv) {
	cout<<"ingrese numero entero ";
	int a;
	cin>>a;
	cuadradolleno( a,true);
	cout<<endl;
	cuadradolleno( a,false);
	cout<<endl;
	triangulo(a);
	return 0;
}
void cuadradolleno(int b,bool vacio){
	for( int c=1;c<=b;c++){
	
		for(int a=1;a<=b;a++){
			
			if(vacio && c!=1 && a!=1 && a!=b && c!=b){
			cout<<" ";
			}else{
			cout<<"*";
			}
	}
		cout<<endl;
}
	
	return ;
}
void triangulo(int t){
	int max=2*t;
	int s=1;
	for(int a=1;a<=t;a++){
		for (int f=1;f<=max;f++){
		
		if (s==t){
		cout<<"*";}
		else{
		cout<<" ";}
	}
	cout<<endl;
	}
	return;
}
