#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct dataapotik{
	string namapasien;
	int umurpasien;
	char jeniskelaminpasien;
	string riwayatpenyakitpasien;
	string namafungsi[100][100];
	int harga_stok[100][100];
	int pilihannomorobat;
	int jumlahobat;
	int total=0;
	int indeks;
	int batas=0;
	int x=0;
	int y=0;
	int simpan[100];
	int temp[100];
	char belilagi;
	int pilihmenuAdmin;
	int pilihmenuUser;
	int pilihmenuLogin;
	int pilihpengambilan;
	int jarakkirim;
	int biayaongkir;
	string a;
	string b;
	string admin;
	string passwordAdmin;
	string user;
	string passwordUser;
	int metodebayarpilih;
	string metodebayar;
	
};

void menulogin(dataapotik &d){
system("cls");
		
	    cout << "~|"<< setw(51) << setfill('=') << "|~\n";
	    cout << "~|           SELAMAT DATANG DI MENU LOGIN         |~\n";
	    cout << "~|                   APOTEK K-24                  |~\n";
	    cout << "~|"<< setw(51) << setfill('=') << "|~\n";
	    cout << "~| 1. Admin                                       |~\n";
	    cout << "~| 2. Pelanggan                                   |~\n";
	    cout << "~| 3. Keluar                                      |~\n";
	    cout << "~|"<< setw(51) << setfill('=') << "|~\n";
	
	    cout << "Masukkan pilihan (1-3): ";
	    cin>>d.pilihmenuLogin;
	    cin.ignore();	
}

void menuutama_admin(dataapotik &d){
		system("cls");
		
	    cout << "~|"<< setw(51) << setfill('=') << "|~\n";
	    cout << "~|              SELAMAT DATANG ADMIN DI           |~\n";
	    cout << "~|                   APOTEK K-24                  |~\n";
	    cout << "~|"<< setw(51) << setfill('=') << "|~\n";
	    cout << "~| 1. Stok Obat                                   |~\n";
	    cout << "~| 2. Data Pembelian                              |~\n";
	    cout << "~| 3. Data Pasien                                 |~\n";
	    cout << "~| 4. Laporan Keuangan                            |~\n";
	    cout << "~| 5. Keluar                                      |~\n";
	    cout << "~|"<< setw(51) << setfill('=') << "|~\n";
	
	    cout << "Masukkan pilihan (1-5): ";
	    cin>>d.pilihmenuAdmin;
	    cin.ignore();
}

void menuutama_pelanggan(dataapotik &d){
		system("cls");
		
	    cout << "~|"<< setw(51) << setfill('=') << "|~\n";
	    cout << "~|             SELAMAT DATANG PELANGGAN DI        |~\n";
	    cout << "~|                   APOTEK K-24                  |~\n";
	    cout << "~|"<< setw(51) << setfill('=') << "|~\n";
	    cout << "~| 1. Beli Obat                                   |~\n";
	    cout << "~| 2. Stok Obat                                   |~\n";
	    cout << "~| 3. Pilih opsi pembayaran                       |~\n";
	    cout << "~| 4. Cetak struk                                 |~\n";
	    cout << "~| 5. Keluar                                      |~\n";
	    cout << "~|"<< setw(51) << setfill('=') << "|~\n";
	
	    cout << "Masukkan pilihan (1-5): ";
	    cin>>d.pilihmenuUser;
	    cin.ignore();
}

void loginAdmin(dataapotik &d){
	
	system("cls");
	cout<<"== ANDA LOGIN SEBAGAI ADMIN ==\n";
	d.admin = "admin";
	d.passwordAdmin = "admin";
	d.user = "user";
	d.passwordUser = "user";
	cout << "Masukan username (admin): ";
	cin >> d.a;
	cout << "Masukan password (admin): ";
	cin >> d.b;	
	
}

void loginUser(dataapotik &d){
	
	system("cls");
	cout<<"== ANDA LOGIN SEBAGAI PELANGGAN ==\n";
	d.admin = "admin";
	d.passwordAdmin = "admin";
	d.user = "user";
	d.passwordUser = "user";
	cout << "Masukan username (user): ";
	cin >> d.a;
	cout << "Masukan password (user): ";
	cin >> d.b;	
	
}

void isidatapasien(dataapotik &d){
	
	cout<<"Selamat Datang Di Apotik K-24"<<endl;
	cout<<"Silahkan mengisi data diri anda sebelum membeli obat."<<endl;
	cout<<"Nama\t\t\t: ";
	getline(cin,d.namapasien);
	cout<<"Umur\t\t\t: ";
	cin>>d.umurpasien;
	cout<<"Jenis kelamin (L/P)\t: ";
	cin>>d.jeniskelaminpasien;
	cin.ignore();
	cout<<"Riwayat Sakit\t\t: ";
	getline(cin,d.riwayatpenyakitpasien);
	cout<<"Data sudah tercatat."<<endl;
	system("pause");
	system("cls");
}

void isidataobat(dataapotik &d){
	d.namafungsi[1][0]="Paracetamol 500 mg";
	d.harga_stok[1][0]=12000;
	d.harga_stok[2][0]=100;
	d.namafungsi[2][0]="Meredakan panas dan peradangan";
	d.namafungsi[1][1]="Ibuprofen";
	d.harga_stok[1][1]=5500;
	d.harga_stok[2][1]=100;
	d.namafungsi[2][1]="Meredakan peradangan dan nyeri";
	d.namafungsi[1][2]="Antasida(promagh)";
	d.harga_stok[1][2]=10000;
	d.harga_stok[2][2]=100;
	d.namafungsi[2][2]="Meredakan gejala kelebihan asam lambung";
	d.namafungsi[1][3]="Cetrizine 10 mg";
	d.harga_stok[1][3]=2000;
	d.harga_stok[2][3]=100;
	d.namafungsi[2][3]="Meredakan alergi";
	d.namafungsi[1][4]="Loparamide";
	d.harga_stok[1][4]=17000;
	d.harga_stok[2][4]=100;
	d.namafungsi[2][4]="Meredakan diare";
	d.namafungsi[1][5]="Bodrex flu dan batuk";
	d.harga_stok[1][5]=2500;
	d.harga_stok[2][5]=100;
	d.namafungsi[2][5]="Meredakan flu dan batuk berdahak";
	d.namafungsi[1][6]="Paramex";
	d.harga_stok[1][6]=20000;
	d.harga_stok[2][6]=100;
	d.namafungsi[2][6]="Mengatasi sakit kepala";
	d.namafungsi[1][7]="Amoxicillin 500 mg";
	d.harga_stok[1][7]=30000;
	d.harga_stok[2][7]=100;
	d.namafungsi[2][7]="Mengobati berbagai infeksi bakteri";
	d.namafungsi[1][8]="ciprofloxacin 500 mg";
	d.harga_stok[1][8]=40000;
	d.harga_stok[2][8]=100;
	d.namafungsi[2][8]="Mengatasi infeksi bakteri";
	d.namafungsi[1][9]="Azithromycin 500 mg";
	d.harga_stok[1][9]=70000;
	d.harga_stok[2][9]=100;
	d.namafungsi[2][9]="Mengobati infeksi bakteri";
	d.namafungsi[1][10]="Omeprazole 20 mg";
	d.harga_stok[1][10]=25000;
	d.harga_stok[2][10]=100;
	d.namafungsi[2][10]="Mengurangi produksi asam lambung";
	d.namafungsi[1][11]="Ranitidine 150 mg";
	d.harga_stok[1][11]=4000;
	d.harga_stok[2][11]=100;
	d.namafungsi[2][11]="Mengurangi produksi asam lambung";
	d.namafungsi[1][12]="Vitamin C 500 mg";
	d.harga_stok[1][12]=18000;
	d.harga_stok[2][12]=100;
	d.namafungsi[2][12]="Meningkatkan daya tahan tubuh";
	d.namafungsi[1][13]="Vitamin D3 1000 IU";
	d.harga_stok[1][13]=20000;
	d.harga_stok[2][13]=100;
	d.namafungsi[2][13]="Membantu penyerapan kalsium";
	d.namafungsi[1][14]="Zinc 20 mg";
	d.harga_stok[1][14]=20000;
	d.harga_stok[2][14]=100;
	d.namafungsi[2][14]="Mendukung sistem imun";
	d.namafungsi[1][15]="Betadine Solusi 15 ml";
	d.harga_stok[1][15]=18000;
	d.harga_stok[2][15]=100;
	d.namafungsi[2][15]="Larutan Antiseptik untuk luka";
	d.namafungsi[1][16]="Insto reguler 15 ml";
	d.harga_stok[1][16]=17000;
	d.harga_stok[2][16]=100;
	d.namafungsi[2][16]="Meredakan iritasi pada mata";
	d.namafungsi[1][17]="Kool Fever Dewasa";
	d.harga_stok[1][17]=9000;
	d.harga_stok[2][17]=100;
	d.namafungsi[2][17]="Kompres penurun panas untuk orang dewasa";
	d.namafungsi[1][18]="Kool Fever Anak";
	d.harga_stok[1][18]=9000;
	d.harga_stok[2][18]=100;
	d.namafungsi[2][18]="Kompres penurun panas untuk anak-anak";
	d.namafungsi[1][19]="Kool Fever Bayi";
	d.harga_stok[1][19]=6000;
	d.harga_stok[2][19]=100;
	d.namafungsi[2][19]="Kompres penurun panas untuk bayi";
	
}

void menunamaobat(dataapotik &d){
	cout<<"Selamat Berbelanja "<<d.namapasien<<endl;
	cout<<"Pilihan Obat : "<<endl;
	
	for(int i=0;i<20;i++){
		cout<<i+1<<". "<<d.namafungsi[1][i]<<endl;
		
	}cout<<endl;
	
}

void detailobat(dataapotik &d){
	
	d.jumlahobat = 0;
	
	if(d.pilihannomorobat<16){
		
		for(int i=d.pilihannomorobat;i<d.pilihannomorobat+1;i++){
			cout<<"============================== Obat "<<i<<" =============================="<<endl;
			cout<<endl;
			cout<<"\tNama obat\t: "<<d.namafungsi[1][i-1]<<endl;
			cout<<"\tHarga\t\t: "<<d.harga_stok[1][i-1]<<"/strip"<<endl;
			cout<<"\tStok Teredia\t: "<<d.harga_stok[2][i-1]<<endl;
			cout<<"\tKegunaan Obat\t: "<<d.namafungsi[2][i-1]<<endl<<endl;
			cout<<"===================================================================="<<endl;
			cout<<endl;
			cout<<"Jumlah obat yang dibeli : ";
			cin>>d.jumlahobat;
		
			d.total+=d.harga_stok[1][i-1]*d.jumlahobat;
			d.harga_stok[2][i-1]-=d.jumlahobat;
		}
	
	}else if(d.pilihannomorobat>=16 && d.pilihannomorobat<18){
		
		for(int i=d.pilihannomorobat;i<d.pilihannomorobat+1;i++){
			cout<<"============================== Obat "<<i<<" =============================="<<endl;
			cout<<endl;
			cout<<"\tNama obat\t: "<<d.namafungsi[1][i-1]<<endl;
			cout<<"\tHarga\t\t: "<<d.harga_stok[1][i-1]<<"/15 ml"<<endl;
			cout<<"\tStok Teredia\t: "<<d.harga_stok[2][i-1]<<endl;
			cout<<"\tKegunaan Obat\t: "<<d.namafungsi[2][i-1]<<endl<<endl;
			cout<<"===================================================================="<<endl;
			cout<<endl;
			cout<<"Jumlah obat yang dibeli : ";
			cin>>d.jumlahobat;
		
			d.total+=d.harga_stok[1][i-1]*d.jumlahobat;
			d.harga_stok[2][i-1]-=d.jumlahobat;
		}
		
	}else if(d.pilihannomorobat==18){
		
		for(int i=d.pilihannomorobat;i<d.pilihannomorobat+1;i++){
			cout<<"============================== Obat "<<i<<" =============================="<<endl;
			cout<<endl;
			cout<<"\tNama obat\t: "<<d.namafungsi[1][i-1]<<endl;
			cout<<"\tHarga\t\t: "<<d.harga_stok[1][i-1]<<"/6 pcs "<<endl;
			cout<<"\tStok Teredia\t: "<<d.harga_stok[2][i-1]<<endl;
			cout<<"\tKegunaan Obat\t: "<<d.namafungsi[2][i-1]<<endl<<endl;
			cout<<"===================================================================="<<endl;
			cout<<endl;
			cout<<"Jumlah obat yang dibeli : ";
			cin>>d.jumlahobat;
		
			d.total+=d.harga_stok[1][i-1]*d.jumlahobat;
			d.harga_stok[2][i-1]-=d.jumlahobat;
		}
		
	}else if(d.pilihannomorobat>=19 && d.pilihannomorobat<21){
		
		for(int i=d.pilihannomorobat;i<d.pilihannomorobat+1;i++){
			cout<<"============================== Obat "<<i<<" =============================="<<endl;
			cout<<endl;
			cout<<"\tNama obat\t: "<<d.namafungsi[1][i-1]<<endl;
			cout<<"\tHarga\t\t: "<<d.harga_stok[1][i-1]<<"/12 pcs "<<endl;
			cout<<"\tStok Teredia\t: "<<d.harga_stok[2][i-1]<<endl;
			cout<<"\tKegunaan Obat\t: "<<d.namafungsi[2][i-1]<<endl<<endl;
			cout<<"===================================================================="<<endl;
			cout<<endl;
			cout<<"Jumlah obat yang dibeli : ";
			cin>>d.jumlahobat;
		
			d.total+=d.harga_stok[1][i-1]*d.jumlahobat;
			d.harga_stok[2][i-1]-=d.jumlahobat;
		}
		
	}else{
		
		cout<<"Maaf obat yang anda pilih tidak tersedia..."<<endl;
		cout<<endl;
	}
}

void pengambilan(dataapotik &d){
	cout<<"============================================================================"<<endl;
	cout<<endl;
	cout<<"Pilihan Pengambilan obat"<<endl;
	cout<<"Note : Jarak pengiriman Obat Maksimal 15 Km dan dikenakan biaya Rp.3000/1Km."<<endl;
	cout<<"1.Ambil tempat"<<endl;
	cout<<"2.Kirim"<<endl;
	cout<<endl;
	cout<<"============================================================================"<<endl;
	cout<<"Pilihan anda (1/2) : ";
	cin>>d.pilihpengambilan;
	
}

void ongkir(dataapotik &d){
	
	switch(d.pilihpengambilan){
		case 1:
			d.biayaongkir = 0;
			break;
		case 2:
			cout<<"Berapa Km Jarak Kirim dari apotik : ";
			cin>>d.jarakkirim;
			
			if(d.jarakkirim>15){
				cout<<"Maaf maksimal jarak kirim 15Km dari apotik..."<<endl;
			}else{
				d.biayaongkir=3000*d.jarakkirim;
			}
			break;
		default:
			cout<<"Pilihan tidak ada..."<<endl;
	}
	
}

void detailpembelian(dataapotik &d){
	cout<<"============= TAGIHAN ============="<<endl;
	cout<<endl;
	cout<<"1. Obat\t\t: "<<d.total<<endl;
	
	if(d.pilihpengambilan==2){
		cout<<"2. Ongkir\t: "<<d.biayaongkir<<endl;
	}
	
	cout<<endl;
	cout<<"Total yang harus anda bayar : "<<d.total+d.biayaongkir<<endl;
	system("pause");
	
}

void simpanDataPembelian(dataapotik &d) {
    ofstream file("data_pembelian.txt", ios::app);

    if (file.is_open()) {
        file << "====================================\n";
        file << "Nama Pasien     : " << d.namapasien << endl;
        file << "Umur            : " << d.umurpasien << endl;
        file << "Jenis Kelamin   : " << d.jeniskelaminpasien << endl;
        file << "Riwayat Penyakit: " << d.riwayatpenyakitpasien << endl;
        file << "Total Obat      : " << d.total << endl;
        if (d.pilihpengambilan == 2) {
            file << "Biaya Ongkir    : " << d.biayaongkir << endl;
        }
        file << "Total Bayar     : " << d.total + d.biayaongkir << endl;
        file << "Metode Bayar    : " << d.metodebayar << endl;
        file << "====================================\n\n";
        file.close();
    } else {
        cout << "Gagal menyimpan data ke file!" << endl;
    }
}

void tampilkanDataPembelianDariFile() {
    ifstream file("data_pembelian.txt");

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "File tidak ditemukan atau gagal dibuka!" << endl;
    }
}


void stokobat(dataapotik &d){
	cout<<"==========STOK OBAT=========\n";
	for(int i=0;i<20;i++){
		cout<<"Nama obat : "<<d.namafungsi[1][i]<<"||  Stok : "<<d.harga_stok[2][i]<<endl;
	}
	cout<<"============================\n";
}

void metodebayar(dataapotik &d){
	cout<<"Pilih metode bayar : "<<endl;
	cout<<"1. Transfer Bank"<<endl;
	cout<<"2. Qris"<<endl;
	cout<<"3. Cash"<<endl;
	cout<<"Masukkan Pilihan : "<<endl;
	cin>>d.metodebayarpilih;
	if(d.metodebayarpilih==1){
		d.metodebayar="Transfer Bank";
	}else if(d.metodebayarpilih==2){
		d.metodebayar="Qris";
	}else if(d.metodebayarpilih==3){
		d.metodebayar="Cash";
	}else{
		cout<<"Pilihan tidak ada....";
	}
	
	
}

void datapasien(dataapotik &d){
	 ofstream file("data_pasien.txt", ios::app);

    if (file.is_open()) {
        file << "====================================\n";
        file << "Nama Pasien     : " << d.namapasien << endl;
        file << "Umur            : " << d.umurpasien << endl;
        file << "Jenis Kelamin   : " << d.jeniskelaminpasien << endl;
        file << "Riwayat Penyakit: " << d.riwayatpenyakitpasien << endl;
        file << "====================================\n\n";
        file.close();
    } else {
        cout << "Gagal menyimpan data ke file!" << endl;
    }

}

void cetakStruk(dataapotik &d){
	 ofstream file("struk.txt", ios::out);

    if (file.is_open()) {
        file << "===============STRUK ANDA================\n";
        file << "Nama Pasien      : " << d.namapasien << endl;
		for(int i=0;i<d.batas;i++){
		file <<"Obat 		 : " <<d.namafungsi[1][d.simpan[i]-1]<<" = " <<d.temp[i]<<" x "<<d.harga_stok[1][d.simpan[i]-1]<< endl;
		}
        file << "Metode bayar	 : " <<d.metodebayar<<endl;
        file << "==========================================\n";
        file << "TOTAL 			 : Rp." <<d.total+d.biayaongkir<<endl;
        file.close();
    } else {
        cout << "Gagal menyimpan data ke file!" << endl;
    }
}

void tampilStruk(dataapotik &d){
	ifstream file("struk.txt");

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "File tidak ditemukan atau gagal dibuka!" << endl;
    }
}

void tempStruk (dataapotik &d){
		
				d.temp[d.y]=d.jumlahobat;
                d.batas++;
                d.x++;
                d.y++;
            
}
void hasilpilihmenuutamaUser(dataapotik &d) {
    switch (d.pilihmenuUser) {
        case 1:
            system("cls");
            isidatapasien(d);
            do {
                menunamaobat(d);
                cout << "Masukkan nomor obat yang anda pilih : ";
                cin >> d.pilihannomorobat;
                d.simpan[d.x]=d.pilihannomorobat;
                system("cls");
                detailobat(d);
                tempStruk(d);
                cout << "Apakah ada obat lain yang akan anda beli? (y/n) : ";
                cin >> d.belilagi;
                system("cls");
            } while (d.belilagi != 'n');
            pengambilan(d);
            system("cls");
            ongkir(d);
            detailpembelian(d);
            datapasien(d);
            
            break;

        case 2:
            system("cls");
            stokobat(d);
            system("pause");
            break;
            
        case 3:            
            system("cls");
            metodebayar(d);
            simpanDataPembelian(d);
            cetakStruk(d);
            system("pause");
            break;

        case 4:
            system("cls");
            tampilStruk(d);
            system("pause");
            break;

        case 5:
            cout << "Trima kasih! Program selesaii.\n";
            break;

        default:
            cout << "Pilihan tidak valid. coba lagi.\n";
    }
}

void tampilDataPasien(dataapotik &d){
	ifstream file("data_pasien.txt");

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "File tidak ditemukan atau gagal dibuka!" << endl;
    }
}

void hasilpilihmenuutamaAdmin(dataapotik &d){

	
	switch (d.pilihmenuAdmin) {
	        case 1:
	        	system("cls");
	        	stokobat(d);
	        	system("pause");	
	        break;
			case 2:
			    system("cls");
			    cout << "== DATA PEMBELIAN OBAT ==" << endl;
			    tampilkanDataPembelianDariFile();
			    system("pause");
			    system("cls");
			    break;
	        case 3:
	        	system("cls");
	        	cout<<"== DATA PASIEN ==\n";
	        	tampilDataPasien(d);
	        	system("pause");
	        break;
	        case 4:
	        	system("cls");
	        	cout << "belum dibikin jg bang\n\n";
	        	system("pause");
	        break;
	        case 5:
				cout << "Trima kasih! Program selesaii.\n";
	        break;
	        default:
	            cout << "Pilihan tidak valid. coba lagi.\n";
	    }
}

void hasillogin(dataapotik &d){
	do{
	menulogin(d);
	if(d.pilihmenuLogin==1){
		loginAdmin(d);
		do{
		menuutama_admin(d);
		hasilpilihmenuutamaAdmin(d);
	}while(d.pilihmenuAdmin!=5);
	}
	
else if(d.pilihmenuLogin==2){
		loginUser(d);
		do{
		menuutama_pelanggan(d);
		hasilpilihmenuutamaUser(d);
	}while(d.pilihmenuUser!=5);
}else if(d.pilihmenuLogin>3){
	cout<<"Pilihan anda tidak valid silahkan input ulang\n\n";
	system("pause");
}
}while(d.pilihmenuLogin!=3);
cout<<"Terimakasih telah menggunakan program\n";
}



int main(){
	
	dataapotik data;
	
	isidataobat(data);
	hasillogin(data);


	return 0;
}
