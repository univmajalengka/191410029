#include <iostream>
using namespace std;
int kj (int jam, int menit, int detik){
	int k;
	k = (jam*360)+(menit*60)+detik;
	return k;
}
int main ()
{
	int jam1, menit1, detik1;
	cout<<"Masukkan jam 1 :";cin >> jam1;
	cout<<"Masukkan menit 1:";cin >> menit1;
	cout<<"Masukkan detik 1:";cin >> detik1;
	
	int jam2, menit2, detik2;
	cout<<"Masukkan jam 2 :";cin >> jam2;
	cout<<"Masukkan menit 2:";cin >> menit2;
	cout<<"Masukkan detik 2:";cin >> detik2;
	
	cout<<"Jumlah detik 1:"<< kj(jam1,menit1,detik1)<<endl;
	cout<<"Jumlah detik 2:"<< kj(jam2,menit2,detik2)<<endl;
	int jumlah;
	jumlah=kj(jam1,menit1,detik1)+kj(jam2,menit2,detik2);
	cout<<"hasil:"<<jumlah;
}

