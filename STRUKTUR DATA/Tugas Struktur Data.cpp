#include <iostream>
int main ()
{
	for (int i=1;i<6;i++){
	for (int j=5; j > i; j--){
	std::cout << " "; 
	}
	for (int k=1; k<= i; k++){
	std::cout << "*";
}
std::cout << std::endl;
}
}
