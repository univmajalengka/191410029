#include <iostream>
#include <string.h>
using namespace std;

void Palindrome(char hasil[]) {

    int i,j,k;
    
    for (j= 0, k = strlen(hasil)-1; j < k; j++, k--) {

		   i = hasil[j];
	hasil[j] = hasil[k];
	hasil[k] = i;
     }
}
	int main() {

	char x [100];
	char y [100];

	cout<<"Program Palindrome"<<endl;
	cout<<"=================="<<endl;
	cout<<"Masukkan kata : ";cin>>x;

	strcpy(y,x);
	Palindrome(y);

	if(strcmp(x,y)==0) {

		cout<<"Kata ini adalah palindrome -> "<<x;
	} else 
		cout<<"Kata ini adalah bukan Palindrome -> "<<x;

	return 0;
}
