#include <iostream>
using namespace std;
//137187 - Asher Yisrael Kutswa

//The Function Prototype for Check Even 
double checkEven(int a);

//The Function Declaration for Check Even
double checkEven(int a){
	double result;
	result = a%2;
	return result;
}

int main(){
	double a;
	bool r;
	char response;
	do{
		cout<<"Welcome to the Check Even Calculator using a Function! \n"<<endl;
		cout<<"Kindly input any number : \n\n";
		cin>>a;
		cout<<"\n";
		r = checkEven(a);
		if(r == 0){
		cout<<"The number "<<a<<" is even!!! \n";
		cout<<"Do you desire to try another number ? (Y/N)";
		cout<<"\n";
		cin>>response;	
		}else{
		cout<<"The number "<<a<<" is not even!!! \n";
		cout<<"Do you desire to try another number ? (Y/N)";
		cout<<"\n";
		cin>>response;
		}
	}while(response=='Y');
	return 0;
}
