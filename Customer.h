#pragma once
#define SIZE 2
class Customer {

private:
	char NIC[12];
	char name[30];
	char address[50];
	char email[20];
	int contactNo;
	Cart* c1[SIZE];

public:
	Customer();
	Customer(Cart* cID1, Cart* cID2);
	Customer(char nic[], char nam[], char add[], char mail[], int contN);
	void displayCart();
	void payTotalAmount();
	void getCustomerDetails(History* h1);
	void updateProfile();
	~Customer();
};

