#include "Item.h"
#include <string.h>

Item::Item()
{
    itemID = 0;
}

void Item::setDetails(int id, const char itemDesc[])
{
    itemID = id;
    strcpy_s(itemdecription, itemDesc);
}

void Item::setPrice(double oPrice)
{
    price = oPrice;
}

double Item::calcTotal(int qty)
{
    return price * qty;
}


Item::~Item()
{
}
