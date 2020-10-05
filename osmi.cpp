#include<iostream>
#include<cmath>
using namespace std;

const int duzina{5};

struct pravougaonik
{
	int sirina;
};

void ispis(int a,int b){
	if(a*duzina==b*duzina)cout<<"Jednaki su"<<endl;
	else if(a*duzina>b*duzina)cout<<"Prvi je veci od drugog"<<endl;
	else cout<<"Drugi je veci od prvog"<<endl;
} 


int main(){
	cout<<"Unesi sirinu prvog pravougaonika: ";
	int sir;
	cin>>sir;
	pravougaonik prvi{sir};
	cout<<"Unesi sirinu drugog pravougaonika: ";
	cin>>sir;
	pravougaonik drugi{sir};
	ispis(prvi.sirina,drugi.sirina); 
}
