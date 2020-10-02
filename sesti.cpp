#include<iostream>
#include<vector>
using namespace std;

struct datum_rodjenja{
	int dan,mjesec,godina;
};

struct karton{
	string ime,prezime;
	int JMBG;
	double prosjek;
	datum_rodjenja birth;
};


int main (){
	vector<karton>niz;
	niz.push_back({"Harun","Dedovic",12345,4.0,{6,4,2003}});
	niz.push_back({"Ismail","Gakic",52431,4.3,{1,1,2002}});
	int indeks{0};
	double max_prosjek{niz.at(0).prosjek};
	cout<<"Ispis podataka"<<endl;
	for(int i{0};i<niz.size();i++){
		cout<<"=====================\n";
		cout<<niz[i].ime<<" "<<niz[i].prezime<<" "<<niz[i].JMBG<<" "<<niz[i].prosjek<<" "<<endl;
		cout<<"Rodjenje: "<<niz[i].birth.dan<<"/"<<niz[i].birth.mjesec<<"/"<<niz[i].birth.godina<<endl;
		if(niz[i].prosjek>max_prosjek)indeks=i;
	}
	cout<<endl<<niz.at(indeks).ime<< " "<<niz.at(indeks).prezime<< " ima najveci prosjek sa "<<niz.at(indeks).prosjek<< " uspjehom"<<endl;
}
