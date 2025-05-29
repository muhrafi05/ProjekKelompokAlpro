#include<iostream>
using namespace std;

struct dataapotik{
	string namapasien;
	int umurpasien;
	string jeniskelaminpasien;
	string riwayatpenyakitpasien;
	string namafungsi[100][100];
	int harga_stok[100][100];
	int pilihannomorobat;
	int jumlahobat;
	int total=0;
	char belilagi;
	
};

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
	d.namafungsi[2][6]="Mengatasi sakit kepla";
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
		d.harga_stok[2][i-1]-=d.harga_stok[2][i-1]*d.jumlahobat;
	}
}

int main(){
	dataapotik data;
	
	isidatapasien(data);
	isidataobat(data);
	
	do{
		menunamaobat(data);
		cout<<"Masukkan nomor obat yang anda pilih : ";
		cin>>data.pilihannomorobat;
		system("cls");
		detailobat(data);
		cout<<"Apakah ada obat lain yang akan anda beli? (y/n) : ";
		cin>>data.belilagi;
		system("cls");
		
	}while(data.belilagi!='n');
	cout<<"Total Bayar : "<<data.total;
	return 0;
}
