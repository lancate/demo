#include<iostream>
#include<cmath>
using namespace std;

class pravougaonik{
	private:
		int duzina,sirina;
	public:
		pravougaonik(int a,int b):duzina{a},sirina{b}{}
		void ispis(){
			cout<<"Duzina pravougaonika je "<<duzina<< " ,a sirina "<<sirina<<endl;
			cout<<"Povrsina pravougaonika je "<<povrsina()<<endl;
			cout<<"Obim pravougaonika je "<<povrsina()<<endl;
		}
		int povrsina(){
			return duzina*sirina;
		}
		int obim(){
			return 2*duzina+2*sirina; 
		}
		
};

struct tacka{
	int x,y;
};

int koordinata(int a,int b){
	int ko=abs(a-b);
	return ko;
	
}


int main (){
	cout<<"Unesi koordinate prve tacke tacke(x,y): ";
	int a,b;
	cin>>a>>b;
	tacka jedan{a,b};
	cout<<"Unesi koordinate druge tacke(x,y): ";
	cin>>a>>b;
	tacka dva{a,b};
	int temp1=koordinata(jedan.x,dva.x);
	int temp2=koordinata(jedan.y,dva.y);
	pravougaonik objekat{temp1,temp2};
	objekat.ispis();
}
