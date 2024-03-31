#include<iostream>
#include"Phone_Book.h"
using namespace std;




void main() {
	
	//Phone_Book phone1("Step", "2345678", "23456789", "345678");
	//cout << "________________________\n";
	//phone1.Show();
	//cout << "________________________\n";

	////Shallow copy
	//Phone_Book phone2 = phone1; //copy constructor isleyir
	//phone2.Set_mobile_phone("!!!!!!!!!!!!!!!!!!!");
	//
	//cout << "________________________\n";
	//phone2.Show();
	//cout << "________________________\n";


	/////////////////////////////////////////////////////////////////////////////////////
	Phone_Book* phone1=new Phone_Book("Step", "2345678", "23456789", "345678");
	cout << "________________________\n";
	phone1->Show();
	cout << "________________________\n";

	//Deap copy
	Phone_Book* phone2 = phone1; 
	phone2->Set_mobile_phone("!!!!!!!!!!!!!!!!!!!");

	cout << "________________________\n";
	phone1->Show();
	cout << "________________________\n";




}