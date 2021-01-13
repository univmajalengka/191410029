#include<iostream>

using namespace std;

int main(){

int angka[100] = {};

int a, b, c, d, e;

cout<<"Program Bilangan" <<endl;

cout<<"================" <<endl;

cout<<"Masukan panjang data : " ;

cin>>e;

for(int b=0; b<e;b++){

cout<<"Nilai data ["<<b<<"] = ";

cin>>angka[b];

}

cout<< " "<<endl;

cout<< "Output : ";

cout<< "\n";

d = e-2;

for (b = d; b >= 1; b--){

for (int a; a < e ;a++)

{

cout<< angka[a];

for (c = a; c <= b; c++){

cout<<"0";

}
cout<< "\n";
}
}

return 0;

}
