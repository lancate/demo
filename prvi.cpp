#include<iostream>
using namespace std;

struct pravougaonik{
	int duzina,sirina;
};

void izracunaj(int,int);


int main (){
	cout<<"Unesi duzinu i sirinu prvog pravougainika: ";
	int d,s;
	cin>>d>>s;
	pravougaonik prvi{d,s};
	cout<<"Unesi duzinu i sirinu drugog pravougaonika: ";
	cin>>d>>s;
	pravougaonik drugi{d,s};
	izracunaj((2*prvi.duzina+2*prvi.sirina),(2*drugi.duzina+2*drugi.sirina));
}


void izracunaj(int obim_prvog,int obim_drugog){
	if(obim_prvog==obim_drugog)cout<<"Jednaki su"<<endl;
	else if(obim_prvog>obim_drugog)
	    cout<<"Prvi je obimniji od drugog"<<endl;
	else cout<<"Drugi je obimniji od prvog"<<endl;
}
