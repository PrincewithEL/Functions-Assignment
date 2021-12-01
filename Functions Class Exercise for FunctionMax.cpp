#include <iostream>
using namespace std;
//137187 - Asher Yisrael Kutswa

int main(){
	
	int i;
	int n;
	
	float array [3];
	
	cout<<"Welcome to the Function Max Program!!! \n\n";
	cout<<"Kindly input three intergers : \n";
	n = 3;
	cout<<"\n";
	
	//A For Loop used to store values inputted within the array.
	for(i = 0; i < n; ++i){
       cout << "Input integer " << i + 1 << " : ";
       cin >> array[i];
    }
    
    //A For Loop to store largest value in array index 0
    for(i = 1;i < n; ++i){
       if(array[0] < array[i])
           array[0] = array[i];
    }
    cout << "Largest integer inputted is : " << array[0] << endl;

    return 0;
}
