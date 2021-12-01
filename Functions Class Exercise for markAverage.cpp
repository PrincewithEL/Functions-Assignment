#include <iostream>
using namespace std;
//137187 - Asher Yisrael Kutswa

int main(){
	
   int array[7];
   int n = 7, sum = 0;
   int i = 0;
   int count = 0;
   float markAverage;
   
   	cout<<"Welcome to the Student Mark Average Program!!! \n\n";
	cout<<"Kindly input seven student marks : \n";
	cout<<"\n";
	
	//A For Loop used to store values inputted within the array.
	for(i = 0; i < n; ++i){
       cout << "Input student mark " << i + 1 << " : ";
       cin >> array[i];
    }
	
	// A For Loop used to sum marks inputted.
	 for(int i = 0; i<n ; i++){
      sum+=array[i];
   }
    
    markAverage = sum / n;
    cout<<"\n";
    cout << "The average of the seven marks is : " << markAverage;
 
    return 0;
}
