#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan 
#include<array>
//untuk obyeky yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 1, 2, 3 };
		//pesan arrat integer 3 elemen
		cout << data.at(4) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkapan menggunakan pbyek exception
		cout << e.what() << endl;
		/*akan dieksekusi karna array data hanya memilliki 3 elemen*/
	}
	cout << "Baris program yang terakhir" << endl;
	/*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/

}