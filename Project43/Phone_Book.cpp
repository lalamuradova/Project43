#include<iostream>
#include"Phone_Book.h"
using namespace std;
void Phone_Book::Show() {
	cout << "Name: " << name << endl;
	cout << "Mobile Phone: " << mobile_phone << endl;
	cout << "Home Phone: " << home_phone << endl;
	cout << "Work Phone: " << work_phone << endl;
}

//Set Get methodlari
void Phone_Book::Set_mobile_phone(string mobile_phone) {
	this->mobile_phone = mobile_phone;
}

void Phone_Book::Set_home_phone(string home_phone) {
	this->home_phone = home_phone;
}

void Phone_Book::Set_work_phone(string work_phone) {
	this->work_phone = work_phone;
}


string Phone_Book::Get_name() {
	return name;
}

string Phone_Book::Get_mobile_phone() {
	return mobile_phone;
}

string Phone_Book::Get_work_phone() {
	return work_phone;
}

string Phone_Book::Get_home_phone() {
	return home_phone;
}