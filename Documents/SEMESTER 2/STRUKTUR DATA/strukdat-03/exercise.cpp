/*
Nama : SIna Mustopa
NPM : 140810180017
KELAS :  A
deskripsi : Program exercise segiempat
*/
#include <iostream>
#include <math.h>

using namespace std;

typedef struct {
	float panjang;
	float lebar;
} segiempat;

void input(segiempat* s){
	cout<<"Masukkan Panjang : ";cin>>s->panjang;
	cout<<"Masukkan Lebar : ";cin>>s->lebar;
}

float keliling(segiempat s){
	int kel;
	
	return
	kel = 2*(s.panjang + s.lebar);

}

float luas(segiempat s){
	int luas;
	
return	luas = s.panjang * s.lebar;
}

float diagonal(segiempat s){
	int diagonal;
	
return	diagonal = sqrt(s.panjang*s.panjang + s.lebar*s.lebar);
}

float print (segiempat s){
	cout<<"Keliling : "<<keliling (s)<<endl;
	cout<<"Luas : "<<luas (s)<<endl;
	cout<<"Diagonal : "<<diagonal(s);
}


int main(){
	segiempat* sg;
	sg = new segiempat;
	input(sg);
	print(*sg);
}
