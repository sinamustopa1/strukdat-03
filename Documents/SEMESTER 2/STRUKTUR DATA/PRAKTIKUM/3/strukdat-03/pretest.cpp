#include <iostream>

using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int&n){
	cout<<"Masukkan banyak data : "; cin>>n;	
}

void inputMhs(larikMhs& mhs, int n){
	for(int i=0; i<n; i++){
		cout<<"Data Mahasiswa ke - "<<i+1<<" \n";
		cout<<"NPM : ";cin.getline(mhs[i].npm, 14);
		cout<<"Nama : ";cin.getline(mhs[i].nama,40);
		cout<<"IPK : ";cin>>mhs[i].ipk;
	}
	
}

void cetakMhs(larikMhs mhs, int n){
	cout<<"========================================="<<endl;
	cout<<"DATA MAHASISWA"<<endl;
	
	for (int i = 0; i<n; i++){
		cout<<
	}
}

void sortNPM(larikMhs& mhs, int n){
	for (int i=0;i<n;i++){
		if (mhs[i].ipk>mhs.[n])
	}
}


int main(){
larikMhs mhs;
int n;
 banyakData(n);
 inputMhs(mhs,n);
 cetakMhs(mhs,n)
}

