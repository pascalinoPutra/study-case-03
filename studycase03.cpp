#include <iostream>
#include <fstream>
using namespace std;

class Warteg{
    friend istream& operator>>(istream&, Warteg&);
    friend ostream& operator<<(ostream&, Warteg&);
    
    public:
    	void totalHarga();
    	void hargaMiring();
    	void tampilan();
    	
   	private :
        int opsi,bayar,kembalian,harga,total,menuMakan,jarak,ongkosKirim,makanana;
	    float diskon;
}w;

void Warteg::totalHarga()
{
    ofstream hsl;
	hsl.open("struct.txt", ios::out);
  	cout << " -----------------------------" << endl;
	cout << "|     WARTEG PALING ENAK      |"<< endl;
	cout << "|      jl.jend sudirman       |"<< endl;
	cout << "|         yogyakarta          |"<< endl;
	cout << " -----------------------------" << endl;
	cout << "Menu Makanan dan Harga :  " << endl;
	cout << "1. Ayam Geprek  : Rp21.000" << endl;
	cout << "2. Ayam Goreng  : Rp17.000" << endl;
	cout << "3. Udang Goreng : Rp19.000" << endl;
	cout << "4. Cumi Goreng  : Rp20.000" << endl;
	cout << "5. Ayam Bakar   : Rp25.000" << endl;
	

	cout <<"\nBanyak pesanan : ";
	cin >> menuMakan;
  
	hsl << "======================"<< endl;
	hsl << "menu yang di pesan: "<<endl;
	hsl.close(); 
	for(int a=1;a<=menuMakan;++a){
		cout << "\nSilahkan Pilih Menu Anda : ";
		cin >> opsi;
		if (opsi==1){
			cout << "1. Ayam Geprek : Rp21.000" << endl;
	    	harga=harga+21000;
			ofstream hsl;
			hsl.open("struct.txt", ios::app);
			hsl << "1. Ayam Geprek : Rp21.000"<<endl;
			hsl.close(); 
		}
		else if(opsi==2){
	    	cout << "2. Ayam Goreng : Rp17.000" << endl;
		    harga=harga+17000;
		    hsl.open("struct.txt", ios::app);
		    hsl << "2. Ayam Goreng : Rp17.000"<<endl;
		    hsl.close(); 
		}
		else if(opsi==3){
		    cout << "3. Udang Goreng : Rp19.000" << endl;
		    harga=harga+19000;
		    hsl.open("struct.txt", ios::app);
		    hsl << "3. Udang Goreng : Rp19.000"<<endl;
		    hsl.close(); 
		}
		else if(opsi==4){
		    cout << "4. Cumi Goreng : Rp20.000" << endl;
		    harga=harga+20000;
		    hsl.open("struct.txt", ios::app);
		    hsl << "4. Cumi Goreng : Rp20.000"<<endl;
		    hsl.close(); 
		}
		else if(opsi==5){
		    cout << "5. Ayam Bakar : Rp25.000" << endl;
		    harga=harga+25000;
		    hsl.open("struct.txt", ios::app);
		    hsl << "5. Ayam Bakar : Rp25.000"<<endl;
		    hsl.close(); 
		}
	}
}

void Warteg::hargaMiring()
{
    cout << "Masukkan Jarak dari Restoran ke Rumah Anda (dalam KM) : ";
	cin >> jarak;
	cout << "Jarak dari Restoran ke Rumah Anda adalah " << jarak << " Kilometer.";
  
	if (jarak <= 3){
	    ongkosKirim=15000;
		if (harga <= 25000){
	    	total = harga + ongkosKirim;
	    }
	    else  if (harga > 25000){
	    	cout << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
	    	total = harga + ongkosKirim-3000;
	    }
	    else if (harga > 50000){
	    	cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
	    	diskon = harga * 0.15;
	    	total = harga - diskon + ongkosKirim -5000;
	    }
	    else if ((harga > 150000)){
			cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
	    	diskon = harga * 0.35;
	    	total = harga - diskon + ongkosKirim-8000;
	    }
  	}

	else if (jarak > 3)
	{
		ongkosKirim=25000;
    	if (harga <= 25000)
			{
				total = harga + 25000;
	    	}
	    if ((harga > 25000) && (harga <= 50000))
			{
				cout << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
		    	total = harga + 22000;
		    }
	    else if ((harga > 50000) && (harga <= 150000))
			{
		    	cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
		    	diskon = harga * 0.15;
		    	total = harga - diskon + 20000;
		  	}
	    else if (harga > 150000)
			{
		    	cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
		    	diskon = harga * 0.35;
		    	total = harga - diskon + 17000;
		    }
	}
}

void Warteg::tampilan()
{
    ofstream hsl;
	hsl.open("struct.txt", ios::out);
	hsl << " -----------------------------" << endl;
	hsl << "|     WARTEG PALING ENAK      |"<< endl;
	hsl << "|      jl.jend sudirman       |"<< endl;
	hsl << "|         yogyakarta          |"<< endl;
	hsl << " -----------------------------" << endl;
	
	hsl << "  ----------------------------" << endl;
	hsl << " | Menu Makanan dan Harga :  |" << endl;
	hsl << " |1. Ayam Geprek  : Rp21.000 |" << endl;
	hsl << " |2. Ayam Goreng  : Rp17.000 |" << endl;
	hsl << " |3. Udang Goreng : Rp19.000 |" << endl;
	hsl << " |4. Cumi Goreng  : Rp20.000 |" << endl;
	hsl << " |5. Ayam Bakar   : Rp25.000 |" << endl;
    hsl << "\n=========================\n";
    
    hsl << "Harga pesanan anda : "<<harga<<endl;
   	hsl << "\nOngkir sebesar : "<< ongkosKirim <<endl;
	if (harga > 25000){
		hsl << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000"<<endl;
		hsl << "\nTotal Harga : " << total<<endl;
		hsl << "\nUang anda : " << bayar<<endl;
		hsl << "\nKembalian : " << bayar - total<<endl;
		hsl.close();
	}
	else if (harga > 50000){
		hsl << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000"<<endl;
		hsl << "\nTotal Harga : " << total<<endl;
		hsl << "\nUang anda : " << bayar<<endl;
		hsl << "\nKembalian : " << bayar - total<<endl;
		hsl.close();
	}
	else if ((harga > 150000)){
	    hsl << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000"<<endl;
	    hsl << "\nTotal Harga : " << total<<endl;
	    hsl << "\nUang anda : " << bayar<<endl;
		hsl << "\nKembalian : " << bayar - total<<endl;
		hsl.close();
	}
	else 
	hsl << "\nTotal Harga : " << total<<endl;
	hsl << "\nUang anda : " << bayar<<endl;
	hsl << "\nKembalian : " << bayar - total<<endl;
	hsl.close();
}	
	
int main (){
	w.totalHarga();
	w.hargaMiring();
	w.tampilan();
	
	return 0;
}
