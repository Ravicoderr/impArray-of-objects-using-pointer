#include <iostream>
using namespace std;
class shopitems
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "the id of item is " << id << " and the price is " << price << endl;
    }
};
int main()
{
    int p;
    float q;
    int size = 3;
    shopitems *ptr = new shopitems[size];
    shopitems *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "enter id and price of the item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        // ptr->getdata();
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "the item number is : " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}