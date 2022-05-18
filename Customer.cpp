#include "Customer.h"

Customer::Customer()
{
}

Customer::Customer(Cart* cID1, Cart* cID2)
{
	c1[0] = cID1;
	c1[1] = cID2;
}

Customer::Customer(char nic[], char nam[], char add[], char mail[], int contN)
{
    strcpy(NIC, nic);
    strcpy(name, nam);
    strcpy(address, add);
    strcpy(email, mail);
    contactNo = contN;
}

void Customer::displayCart()
{
    for (int i = 0; i < SIZE; i++) 
    {
        c1[i]->viewCartDetails();
    }
}

void Customer::payTotalAmount()
{
}

void Customer::getCustomerDetails(History* h1)
{
    cout << "NIC : " << NIC << endl;
    cout << "name : " << name << endl;
    cout << "address : " << address << endl;
    cout << "email : " << email << endl;
    cout << "contactNo : " << contactNo << endl;

    cout << endl;

    cout << "OrderDetails" << endl;
    h1->getOrderDetails();


    cout << endl;

    cout << "PaymentDetails" << endl;
    h1->getPaymentDetails();

}

void Customer::updateProfile()
{
    cout << "Customer delete account" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        delete c1[i];
    }
}

Customer::~Customer()
{
}
