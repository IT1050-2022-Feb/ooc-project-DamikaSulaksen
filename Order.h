#pragma once
class Order
{
private:
    int orderID;
    Item* items;
    int count;
    int maxsize;
    int orderDate;
    int orderDeliveryDate;
    DelivaryInfo* delivaryinfo;

public:
    Order(int oId, int size);
    void addItem(int id, const char name[], double oPrice, int oDate, int oDelivaryDate);
    double calcTotPrice();
    ~Order();
};

