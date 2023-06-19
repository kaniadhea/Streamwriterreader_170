#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File: ";
	cin >> NamaFile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjukan kesebuah nama file 
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q'\ untuk keluar" << endl;

	//unlimited loop untuk menullis
	while (true) {
		cout << "- ";

		//unlimited loop untuk menulis
		 {
			cout << "- ";
			//mendapatkan setiap karakter dalam satu baris
			getline(cin, baris);
			//loop akan berhenti jika anda memasukan karakter q
			if (baris == "q") break;
			//menulis dan memasukan nilai dari 'baris' ke dalam file
			outfile << baris << endl;
		}
		//selesai dalam menulis sekarang tutup filenya
		outfile.close();

		//membuat file dalam mode membaca
		ifstream infile;
		//menunjukan sebuah file
		infile.open(NamaFile + ".txt", ios::in);

		cout << endl << "=membuat dan membaca file" << endl;
		//jika file ada maka
		if (infile.is_open())
		{
			//melakukan perulangan setiap baris
			while (getline(infile, baris))
			{
				//dan tampilkan di sini
				cout << baris << '\n';
			}
			//tutyp file tersebut setelah selesai
			infile.close();
		}
		//jika tidak ditemukan file maka akan menampilkan ini
		else cout << "unable to open file";
		return 0;
	}
}