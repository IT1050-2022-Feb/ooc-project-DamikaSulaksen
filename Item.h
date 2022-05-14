#pragma once
class Item
{
private:
    int itemID;
    char itemdecription[40];
    double price;
public:
    Item();
    void setDetails(int id, const char itemDesc[]);
    void setPrice(double oPrice);
    double calcTotal(int qty);
    ~Item();
};

