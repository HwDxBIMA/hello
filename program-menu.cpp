#include <iostream>
using namespace std;

int main(){
	int menu,pesanan;
	cout << "program pilih menu"<<endl;
	cout << "    Daftar menu   "<<endl;
	cout << "1. Nasih Goreng Rp 10000" <<endl;
	cout << "2. Ayam Goreng  Rp 12000" <<endl;
	cout << "3. Bebek Goreng Rp 14000" <<endl;
	cout << "4. Pecel Lele   Rp 10000" <<endl;
	cout << "Pilih Menu (1-4) : ";
	cin >>  menu;
	cout << "jumlah pesanan : ";
	cin>>pesanan;
	system("cls");
	switch(menu){
		case 1:
			cout << "     detail Orderan"<<endl;
			cout << "Menu    : Nasi Goreng\n";
			cout << "Harga   : Rp 10000\n";
			cout << "Pesanan : "<<pesanan<<endl;
			cout << "total   : Rp "<<pesanan*10000<<endl;
			break;
		case 2:
			cout << "     detail Orderan"<<endl;
			cout << "Menu    : Ayam Goreng\n";
			cout << "Harga   : Rp 12000\n";
			cout << "Pesanan : "<<pesanan<<endl;
			cout << "total   : Rp "<<pesanan*12000<<endl;
			break;
		case 3:
			cout << "     detail Orderan"<<endl;
			cout << "Menu    : Bebek Goreng\n";
			cout << "Harga   : Rp 14000\n";
			cout << "Pesanan : "<<pesanan<<endl;
			cout << "total   : Rp "<<pesanan*14000<<endl;
			break;
		case 4:
			cout << "     detail Orderan"<<endl;
			cout << "Menu    : Pecel Lele\n";
			cout << "Harga   : Rp 10000\n";
			cout << "Pesanan : "<<pesanan<<endl;
			cout << "total   : Rp "<<pesanan*10000<<endl;
			break;			
	}
	return 0;
}
