/*
Nama : Sina Mustopa
Kelas : A
NPM : 140810180017
Tanggal : 05 - 03 - 2019
Deskripsi : struct Gaji Exercise 03
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Pegawai{
	char nip[10];
	int nip2;
	char nama[30];
	int gol;
	float gaji;
};

typedef Pegawai pegawai[10];

void gajiPegawai(pegawai& pgw, int n){
	for(int i=0;i<n;i++){
		if(pgw[i].gol==1){
			pgw[i].gaji=2000;
		}else if(pgw[i].gol==2){
			pgw[i].gaji=3000;
		}else if(pgw[i].gol==3){
			pgw[i].gaji=5000;
		}else if(pgw[i].gol==4){
			pgw[i].gaji=8000;
		}
	}
}

void inputPegawai(pegawai& pgw, int n){
	for(int i=0;i<n;i++){
		cout<<"Pegawai ke-"<<i+1<<endl;
		cout<<"Nama\t\t: "; cin.ignore();cin.getline(pgw[i].nama,30);
		cout<<"NIP\t\t: ";cin>>pgw[i].nip;
		cout<<"Golongan\t: ";cin>>pgw[i].gol;
		if(pgw[i].gol<1 || pgw[i].gol>4){
			cout<<"Golongan tidak tersedia"<<endl;
			i--;
			getch();
		}
		cout<<endl;
	}
	gajiPegawai(pgw,n);
}

void cetakDaftar(pegawai pgw, int n){
	cout<<"============================================="<<endl;
	for(int i=0;i<n;i++){
		cout<<i+1<<"."<<pgw[i].nama<<"    ["<<pgw[i].nip<<"]     "<<"Rp"<<pgw[i].gaji<<"000 Golongan : "<<pgw[i].gol<<endl;
	}
}

int rataGaji(pegawai pgw, int n){
	int jumlah=0;
	for(int i=0;i<n;i++){
		jumlah+=pgw[i].gaji;
	}
	
	return jumlah/n;
}

void cariGaji(pegawai pgw, int n){
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(pgw[j].gol>pgw[j+1].gol){
				swap(pgw[j],pgw[j+1]);
			}
		}
	}
	cout<<"\nGaji tertinggi : "<<pgw[n-1].nama<<endl;
	cout<<"Gaji terendah : "<<pgw[0].nama<<endl;
}

void cetakUrutNIP(pegawai pgw,int n){
	for(int i=0;i<n;i++){
		pgw[i].nip2=atoi(pgw[i].nip);
	}
	
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(pgw[j].nip2>pgw[j+1].nip2){
				swap(pgw[j],pgw[j+1]);
			}
		}
	}
	
	cetakDaftar(pgw,n);
}

int main(){
	int n;
	pegawai pgw;
	int pegawai_target;
	
	cout<<"Masukkan Total pegawai : ";cin>>n;
	inputPegawai(pgw,n);
	system("cls");
	cetakUrutNIP(pgw,n);cout<<endl;
	cout<<"Rata-rata Gaji : Rp"<<rataGaji(pgw,n)<<"000"<<endl;
	cariGaji(pgw,n);
}
