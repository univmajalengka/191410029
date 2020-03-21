#include<iostream>
using namespace std;
int main ()
{
	int a[4][4][2] = 	{ {1,2,3,4}, {5,6,7,8}, {9,10} };
	int b[4][4][2] = 	{ {1,2,3,4}, {5,6,7,8}, {9,10} };
	int c[4][4][2];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			for(int k=0;k<2;k++){
			c[i][j][k]=a[i][j][k]+b[i][j][k];
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			for(int k=0;k<2;k++){
			cout << c[i][j][k]<< " ";
		}
		cout << endl;
	}
}
