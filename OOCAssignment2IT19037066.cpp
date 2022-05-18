#include <iostream>
#include "Item.h"
#include "Order.h"
#include "Customer.h"

using namespace std;

int main()
{
	//create objects
	Customer* c = new Customer(992932, "Kmal", "Kotte", "kmal@hotmail.com", 0712443558);
	Item* i = new Item(11, "vegetables", 550.00);
	Order* o = new Order(1001, 3);

}

