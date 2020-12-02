#include <iostream>

using namespace std;
int  i, j, n;
int nilai [7]={1,2,2,5,4,4,1};
int main ()
{
n = 7;
for (i = n; i >= 1; i--)
{
	for(int a; a<7;a++)
	{
		cout<<nilai[a];
		
		for (j = a; j <= 5; j++)
    {
        cout << "0";
    }
        cout << "\n";
	}
}
	return 0;
}
