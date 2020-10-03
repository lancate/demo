#include<iostream>
#include<cmath>
using namespace std;

struct tacka{
	int x,y;
};

double udaljenost(int a,int b){
	return static_cast<double>(sqrt(pow(0-a,2)+pow(0-b,2)));
}


int main (){
	cout<<"Unesi koordinate tacke(x,y): ";
	int a,b;
	cin>>a>>b;
	tacka jedan{a,b};
	cout<<"Udaljenost prve tacke od pocetka sistema(0,0) je "<<udaljenost(jedan.x,jedan.y);
	
}
