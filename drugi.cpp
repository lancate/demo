#include<iostream>
#include<cmath>
using namespace std;

struct trougao {
	int stranica1,stranica2,stranica3;
};

double povrsina(int prva,int druga,int treca){
	double prvii=static_cast<double>(prva);
	double s{(prvii+druga+treca)/2};
	double rezultat=sqrt(s*(s-prvii)*(s-druga)*(s-treca));
	return rezultat;
}


int main (){
	cout<<"Unesi stranice prvog trougla: ";
	int a,b,c;
	cin>>a>>b>>c;
	trougao prvi{a,b,c};
	cout<<"Unesi stranice drugog trougla: ";
	cin>>a>>b>>c;
	trougao drugi{a,b,c};
	cout<<"Povrsina prvog trougla: "<<povrsina(prvi.stranica1,prvi.stranica2,prvi.stranica3)<<endl;
	cout<<"Povrsina drugog trougla: "<<povrsina(drugi.stranica1,drugi.stranica2,drugi.stranica3)<<endl;
	cout<<"Razlika izmedju drugog i prvog trougla je "<<povrsina(drugi.stranica1,drugi.stranica2,drugi.stranica3)/
	povrsina(prvi.stranica1,prvi.stranica2,prvi.stranica3)<<endl;
}
