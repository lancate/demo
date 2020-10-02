#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main (){
	ifstream ispis{"podaci.txt"};
	if(ispis)cout<<"Uspjesno otvoreno"<<endl;
	
	string ime,prezime;
	int ocjena;
	
	int br{0};
	int s{0};
	
	int jedan{0},dva{0},tri{0},cetiri{0},pet{0};
	vector<string>imena;
	vector<string>prezimena;
	while(ispis>>ime>>prezime>>ocjena){
		br++;
		s+=ocjena;
		if(ocjena==5){
			imena.push_back(ime);
			prezimena.push_back(prezime);
			pet++;
		}
		else if(ocjena==4)cetiri++;
		else if(ocjena==3)tri++;
		else if(ocjena==2)dva++;
		else if(ocjena==1)jedan++;
	}
	cout<<"Nedovoljno - "<<jedan<<endl;
	cout<<"Dovoljno - "<<dva<<endl;
	cout<<"Dobro - "<<tri<<endl;
	cout<<"Vrlo dobar - "<<cetiri<<endl;
	cout<<"Odlican - "<<pet<<endl;
	
	cout<<endl<<"Prosjecna ocjena - "<<static_cast<double>(s)/br<<endl;
	
	
	cout<<endl<<"Odlicni ucenici su"<<endl;
	for(int i=0;i<imena.size()&&i<prezimena.size();i++){
		cout<<imena[i]<< " "<<prezimena[i]<<endl;
	}
}
