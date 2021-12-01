#include <iostream>
using namespace std;
//137187 - Asher Yisrael Kutswa

int main(){
	
   int array[5];
   int n = 5, sum = 0;
   int i = 0;
   
   	cout<<"Welcome to the Array Sum Program!!! \n\n";
	cout<<"Kindly input five intergers : \n";
	cout<<"\n";
	
   	//A For Loop used to store values inputted within the array.
	for(i = 0;i < n; ++i){
       cout << "Input integer " << i + 1 << " : ";
       cin >> array[i];
    }
   
   for(int i = 0; i<n ; i++){
      sum+=array[i];
   }
   cout<<"\n";
   cout<<"The sum of the five integers within the array is : "<<sum;
   return 0;
}
