/*
Nama : Sina Mustopa
Kelas : A
NPM : 140810180017
Tanggal : 05 - 03 - 2019
Deskripsi : struct movie
*/

#include <iostream>
#include <string.h>

using namespace std;

struct theater{
	int room;
	char seat[5];
	char movieTitle[30];
};

int main (){
	theater theater;
	cout<<"Room : "; cin>>theater.room;
	cout<<"seat : "; cin>>theater.seat;
	cout<<"Movie Title : "; cin>>theater.movieTitle;	
	
	cout<<endl<<endl;
	
	cout<<"Room : "; cout<<theater.room<<endl;
	cout<<"Seat : "; cout<<theater.seat<<endl;
	cout<<"Movie Title : "; cout<<theater.movieTitle<<endl;
	
}

