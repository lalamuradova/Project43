#pragma once
#include<iostream>
using namespace std;


//Encapsulation- kapsul hala getirmek
class Phone_Book {
	string name;
	string mobile_phone;
	string home_phone;
	string work_phone;
public:
	//Constructor overloading
	//default constructor
	Phone_Book() {
		cout << "Default constructor\n";
	}
	//Constructor with parameters
	Phone_Book(string name, string mobile_phone, string home_phone, string work_phone) {
		this->name = name;
		this->mobile_phone = mobile_phone;
		this->home_phone = home_phone;
		this->work_phone = work_phone;
		cout << "Constructor with parameters(4)\n";
	}

	Phone_Book(string name, string mobile_phone, string home_phone) {
		this->name = name;
		this->mobile_phone = mobile_phone;
		this->home_phone = home_phone;
		this->work_phone = "none";
		cout << "Constructor with parameters(3)\n";
	}
	//Copy Constructor
	Phone_Book(Phone_Book& phone) {
		this->name = phone.name;
		this->work_phone = phone.work_phone;
		this->home_phone = phone.home_phone;
		this->mobile_phone = phone.mobile_phone;
		cout << "Copy constructor\n";
	}

	void Show();

	//Set Get methodlari
	void Set_mobile_phone(string mobile_phone);

	void Set_home_phone(string home_phone);

	void Set_work_phone(string work_phone);


	string Get_name();

	string Get_mobile_phone();

	string Get_work_phone();

	string Get_home_phone();


	~Phone_Book() {
		cout << "Destructor\n";
	}
};

