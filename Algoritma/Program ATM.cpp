#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"Pilihan Menu"<<endl;
	cout<<"1.Tarik Dana"<<endl;
	cout<<"2.Transfer Dana"<<endl;
	cout<<"3.Cek Dana"<<endl;
	
int Menu;
cin>>Menu;
if (Menu == 1) {cout<<"Tarik Dana";}
else if (Menu == 2) {cout<<"Transfer Dana";}
else if (Menu == 3) {cout<<"Cek Dana";}
else {cout<<"Menu Tidak Ada";}
}
