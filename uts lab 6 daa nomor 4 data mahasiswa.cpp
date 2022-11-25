#include<iostream>

using namespace std;

int main()
{
	cout<<"==================================================="<<endl;
	cout<<"=== PROGRAM BIODATA MAHASISWA ILKOMP KOM C ==="<<endl;
	cout<<"==================================================="<<endl;
	cout<<endl;
	
	string nim,nama,alamat;
	
	cout<<" NIM : ";
	getline(cin,nim);
	cout<<" Nama Mahasiswa : ";
	getline(cin,nama);
	cout<<" Alamat : ";
	getline(cin,alamat);
	cout<<endl;
	
	 cout << "=== Biodata Mahasiswa ==="       <<endl;
  cout << "================================="<<endl;
  cout << "NIM: "      <<nim<<endl;
  cout << "Nama: "       <<nama<<endl;
  cout << "Alamat: "    <<alamat<<endl;
 
  return 0;
}

