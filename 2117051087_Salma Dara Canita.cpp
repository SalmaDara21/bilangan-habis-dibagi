#include <iostream>

using namespace std;

int main() {
	int awal,akhir;
	int x_tiga = 0, x_tujuh = 0,x_tiga_tujuh= 0;
	int y_tiga[x_tiga],y_tujuh[x_tujuh],y_tiga_tujuh[x_tiga_tujuh];
	cout << "Masukkan bilangan awal: ";
	cin >> awal;
	cout << "Masukkan bilangan akhir: ";
	cin >> akhir;
	cout<<endl;
	
	for(int i = awal; i <= akhir; i++){
		if (i % 3 == 0 && i % 7 == 0){
			y_tiga_tujuh[x_tiga_tujuh] = i;
			x_tiga_tujuh++;		
		}
		
		else if ( i % 7 == 0){
			y_tujuh[x_tujuh] = i;	
			x_tujuh++;
		}
		
		else if ( i % 3 == 0){
			y_tiga[x_tiga] = i;
			x_tiga++;
		}
		
	}
	cout<<"Habis Dibagi tiga dan tujuh: "<<endl;	
	for(int i = 0; i < x_tiga_tujuh; i++){
		cout<<y_tiga_tujuh[i] <<" ";
	}
	cout<<endl;
	
	cout<<"Bagi tiga: "<<endl;
	for(int i = 0; i < x_tiga; i++){
		cout<<y_tiga[i] << " ";
	}
	cout<<endl;
	
	cout<<"Bagi tujuh: "<<endl;
	for(int i = 0; i < x_tujuh; i++){
		cout<<y_tujuh[i] << " ";
	}
	
	return 0;
}
