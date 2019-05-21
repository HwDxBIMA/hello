#include <iostream>
#include <fstream>
using namespace std;

string menumakan[100];
int hargamakan[100];
string kdmenumakan[100];

string menuminum[100];
int hargaminum[100];
string kdmenuminum[100];

string kodebarangmakan[100];
string namapesananmakan[100];
int hargapesananmakan[100];

string kodebarangminum[100];
string namapesananminum[100];
int hargapesananminum[100];


struct semua{
	int nmakan;
	int nminum;
	int total;
	int pilih;
	int pilihjenis;
	char ket;
}ai;

void loaddata();
void menu();
void menu_utama();
void menu_makanan();
void menu_minuman();
void sortir_utama();

int main(){
	loaddata();
	menu();
	menu_makanan();
	system("pause");
	return 0;
}

void loaddata(){
	//memasukan menu makanan ke array
	ifstream datamakanan;
	datamakanan.open("databurger.txt");
	int count=0;
	int i=0;
	string tampungmakanan;
	while(!datamakanan.eof()){
		getline(datamakanan,tampungmakanan);
		menumakan[i]=tampungmakanan;
		i++;
		count++;
	}
	datamakanan.close();
	
	//memasukan menu minuman ke array
	ifstream dataminuman;
  	dataminuman.open("dataminuman.txt");
  	int data=0;
  	int j=0;
  	string tampungminuman;
  	while(!dataminuman.eof()){
  		getline(dataminuman,tampungminuman);
  		menuminum[j]=tampungminuman;
  		j++;
  		data++;
	  }
	
	dataminuman.close();
	//memasukan kode makanan ke array
	ifstream kodemenu;
	kodemenu.open("nomorburger.bin");
 	string tampungnomor;
  	int no = 0;
  	i = 0;

  	while(!kodemenu.eof()) {
    getline(kodemenu, tampungnomor);
    kdmenumakan[i] = tampungnomor;
    i++;
    no++;
  	}

  	kodemenu.close();
  	
  	//memasukan kode minuman ke array
  	ifstream datakodeminuman;
	datakodeminuman.open("kodeminuman.txt");
	string tampungkodeminum;
	int kode=0;
	j=0;
	while(!datakodeminuman.eof()){
		kdmenuminum[j]=tampungkodeminum;
		j++;
		kode++;
	}
	
	datakodeminuman.close();
  	
	//memasukan harga makanan ke array
	ifstream datahargamakanan;
	datahargamakanan.open("hargaburger.txt");
  	int hrg;
  	int price = 0;
  	i=0;

  	while(!datahargamakanan.eof()) {
    datahargamakanan >> hrg;
    hargamakan[i] = hrg;
    i++;
    price++;
  	}

  	datahargamakanan.close();
  	//memasukan harga minuman ke array
  	ifstream datahargaminuman;
	datahargaminuman.open("hargaminuman.txt");
	int tampunghargaminum;
	int harga=0;
	j=0;
	while(!datahargaminuman.eof()){
		datahargaminuman >> harga;
    	hargaminum[j] = harga;
    	j++;
    	harga++;
	}
	datahargaminuman.close();
}

void menu(){
	cout << "+============================================================================+"<<endl;
	cout << "+                          KFC COFFE DAN BURGER KING                         +"<<endl;
	cout << "+============================================================================+"<<endl;
	cout << "+                             Ambarukmo Plaza Mall                           +"<<endl;
	cout << "+                        Jl. Laksda Adi Sucipto GF A27                       +"<<endl;
	cout << "+                                  Yogyakarta                                +"<<endl;
	cout << "+============================================================================+"<<endl;
	cout << "1. Pesan Menu " <<endl;
	cout << "2. Sortir " <<endl;
	cout << "Pilih Menu : ";
	cin  >> ai.pilih;
	switch(ai.pilih){
		case 1:
			menu_utama();
			break;
			
	}
	
}

void menu_utama(){
	cout << "+============================================================================+"<<endl;
	cout << "+                          KFC COFFE DAN BURGER KING                         +"<<endl;
	cout << "+============================================================================+"<<endl;
	cout << "+                             Ambarukmo Plaza Mall                           +"<<endl;
	cout << "+                        Jl. Laksda Adi Sucipto GF A27                       +"<<endl;
	cout << "+                                  Yogyakarta                                +"<<endl;
	cout << "+============================================================================+"<<endl;
	cout << "[1]. MAKANAN                            "<<endl;
	cout << "[2]. MINUMAN                            "<<endl;
	cout << "[2]. PAKET                              "<<endl;
	cout << "pilih menu makanan : ";cin>>ai.pilihjenis;
	system("cls");
	if(ai.pilihjenis==1){
		menu_makanan();
	}else if(ai.pilihjenis==2){
		menu_minuman;
	}
	
};

void menu_makanan(){
	cout << "+============================================================================+"<<endl;
	cout << "+                          KFC COFFE DAN BURGER KING                         +"<<endl;
	cout << "+============================================================================+"<<endl;
	cout << "+                             Ambarukmo Plaza Mall                           +"<<endl;
	cout << "+                        Jl. Laksda Adi Sucipto GF A27                       +"<<endl;
	cout << "+                                  Yogyakarta                                +"<<endl;
	cout << "+============================================================================+"<<endl;
	cout << "+BURGER :                                  |PASTRY :                         +"<<endl;
	cout << "+[1]. Whopper Jr Burger                    |[17]. Cheese Donut               +"<<endl;
    cout << "+[2]. Cheese Burger                        |[18]. Cookie Crumb Donut         +"<<endl;
    cout << "+[3]. BBQ Beef Rasher Burger               |[19]. Choco Nut Donut            +"<<endl;
    cout << "+[4]. Mushroom Swiss Burger                |[20]. Icing SUgar Donut          +"<<endl;
    cout << "+[5]. Mozzarella Cheese Burger             |[21]. Cinnamon Donut             +"<<endl;
    cout << "+[6]. Spicy Mozzarela Cheese Burger        |[22]. Double Choclate Donut      +"<<endl;
    cout << "+[7]. Chiken Tendercrisp Burger            |[23]. Molten Cake                +"<<endl;
    cout << "+[8]. Quattro Cheese Tendercrisp Burger    |                                 +"<<endl;
    cout << "+[9]. Steakhouse Tendercrisp               |                                 +"<<endl;
    cout << "+[10]. Fish Fillet Burger                  |                                 +"<<endl;
    cout << "+SIDES :                                   |                                 +"<<endl;
    cout << "+[11]. Wings                               |                                 +"<<endl;
    cout << "+[12]. Fries                               |                                 +"<<endl;
    cout << "+[13]. Cheesy Fries                        |                                 +"<<endl;
    cout << "+[14]. Cheesy Waffle                       |                                 +"<<endl;
    cout << "+[15]. Cheesy Rasher Fries                 |                                 +"<<endl;
    cout << "+[16]. Chken Strips                        |                                 +"<<endl;
    cout << "+============================================================================+"<<endl;
	cout << "Pesan Berapa Menu : ";
	cin >> ai.nmakan;
	for(int i=0;i<ai.nmakan;i++){
		cout << "Kode : ";
		cin >> kodebarangmakan[i];
	}
	
	int panjangarray = sizeof(menumakan)/sizeof(menumakan[0]);
	
	for(int i=0;i<ai.nmakan;i++){
		for(int j=0;j<panjangarray;j++){
			if(kodebarangmakan[i]==kdmenumakan[j]){
				namapesananmakan[i]=menumakan[j];
				hargapesananmakan[i]=hargamakan[j];
			}
		}
	}
	
	for(int i=0; i<ai.nmakan; i++) {
    cout << (i+1) << ". " << namapesananmakan[i] << endl;
    cout << "   Harga : " << hargapesananmakan[i] << endl;
    ai.total += hargapesananmakan[i];
  	}
	
  	cout << "apakah ada menu lain? (y/t) :";
   	cin >> ai.ket;
   	if(ai.ket=='y'){
   		system("cls");
   		menu_utama();
	}
}

void menu_minuman(){
	cout << "+============================================================================+"<<endl;
	cout << "+                          KFC COFFE DAN BURGER KING                         +"<<endl;
	cout << "+============================================================================+"<<endl;
	cout << "+                             Ambarukmo Plaza Mall                           +"<<endl;
	cout << "+                        Jl. Laksda Adi Sucipto GF A27                       +"<<endl;
	cout << "+                                  Yogyakarta                                +"<<endl;
	cout << "+============================================================================+"<<endl;
	cout << "+           BAVERAGES :         |[18]. Hot Jasmine Tea                       +"<<endl;
	cout << "+[1]. Coca Cola                 |[19]. Hot Strawberry Tea                    +"<<endl;
    cout << "+[2]. Fanta                     |[20]. Hot Pappermint Tea                    +"<<endl;
    cout << "+[3]. Sprite                    |[21]. Hot Brulee Latte                      +"<<endl;
    cout << "+[4]. Lemon Tea                 |        COLD BAVERAGES :                    +"<<endl;
    cout << "+[5]. Jasmine Tea               |[22]. Ice Teh Tarik Brulee                  +"<<endl;
    cout << "+[6]. Air Mineral               |[23]. Ice Teh Tarik Brulee Jelly            +"<<endl;
    cout << "+        HOT BAVERAGES :        |[24]. Ice Latte                             +"<<endl;
    cout << "+[8]. Single Espresso           |[25]. Ice Strawberry Tea                    +"<<endl;
    cout << "+[9]. Double Espresso           |[26]. Ice Lemon Tea                         +"<<endl;
    cout << "+[10]. Americano                |[27]. Es Kopi Susu                          +"<<endl;
    cout << "+[11]. Cappucino                |                                            +"<<endl;
    cout << "+[12]. Cafe Late                |                                            +"<<endl;
    cout << "+[13]. Hot Chococalte           |                                            +"<<endl;
    cout << "+[14]. Hazelnut Coffe           |                                            +"<<endl;
    cout << "+[15]. Green Tea Latte          |                                            +"<<endl;
    cout << "+[16]. Teh Tarik Brulee         |                                            +"<<endl;
    cout << "+[17]. Hot English Breakfast    |                                            +"<<endl;
    cout << "+============================================================================+"<<endl;
	cout << "Pesan Berapa Menu : ";
    cin >> ai.nminum;
   	for(int i=0;i<ai.nminum;i++){
		cout << "Kode : ";
		cin >> kodebarangminum[i];
	}
	
	int panjangarray = sizeof(menuminum)/sizeof(menuminum[0]);
	
	for(int i=0;i<ai.nminum;i++){
		for(int j=0;j<panjangarray;j++){
			if(kodebarangminum[i]==kdmenuminum[j]){
				namapesananminum[i]=menuminum[j];
				hargapesananminum[i]=hargaminum[j];
			}
		}
	}
	
	for(int i=0; i<ai.nminum; i++) {
    cout << (i+1) << ". " << namapesananminum[i] << endl;
    cout << "   Harga : " << hargapesananminum[i] << endl;
    ai.total += hargapesananminum[i];
  }
	
}
