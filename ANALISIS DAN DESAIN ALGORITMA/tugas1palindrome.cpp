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
	cout<<"Masukan kata : ";cin>>x;

	strcpy(y,x);
	Palindrome(y);

	if(strcmp(x,y)==0) {

		cout<<"Palindrome = "<<x;
	} else {
		cout<<"Bukan Palindrome = "<<x;
	}

	return 0;

}
