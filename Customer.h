#pragma once
class Customer
{
private:
    char NIC[12];
    char name[20];
    char address[40];
    char enail[20];
    int contactNo;
public:
    void updateProfile(const char cName[], const char cAddress[], const char cEmail[], int contact);
};

