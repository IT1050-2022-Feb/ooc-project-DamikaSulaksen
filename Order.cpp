#include "Order.h"

Order::Order(int oId, int size)
{
    orderID = oId;
    maxsize = size;
    count = 0;
}

Order::Order()
{
}

void Order::addItem(int id, const char name[], double oPrice, int oDate, int oDelivaryDate)
{
}

double Order::calcTotPrice()
{
    double total = 0;


    return total;
}

Order::~Order()
{
}
