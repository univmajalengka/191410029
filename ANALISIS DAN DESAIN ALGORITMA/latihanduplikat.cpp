#include<iostream>
using namespace std;

int main(){
	    
    int arr[] = {1,4,9,6,1,2,5,6,7,8,9};     
          
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    cout<<"Duplikat berada pada Larik : ";     
    for(int i = 0; i < length; i++) {    
    for(int j = i + 1; j < length; j++) {    
        if(arr[i] == arr[j])    
            cout<<"\n" << arr[j];    
        }    
    }    
    return 0;    
}
