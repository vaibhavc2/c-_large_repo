#include <iostream>
#include <string>

using namespace std;

class Shop
{
    int n_items;
    // max_items = 500
    int itemID[500];
    string itemName[500];
    float itemPrice[500];
    int counter;

public:
    void getn_items();
    void initCounter()
    {
        counter = 0;
    }
    void setItem();
    void displayItem();
};

void Shop ::getn_items()
{
    cout << "\nEnter the no. of items in the shop: ";
    cin >> n_items;
    initCounter();
}

void Shop ::setItem()
{
    while (counter < n_items)
    {
        cout << "\nEnter ID of the item: ";
        cin >> itemID[counter];
        cout << "Enter the Item Name: ";
        cin >> itemName[counter];
        cout << "Enter Price of the item: $";
        cin >> itemPrice[counter];
        counter++;
    }
}

void Shop ::displayItem()
{
    for (int i = 0; i < counter; i++)
    {
        // cout << "The Price of Item (" << itemID[i] << ") is: $" << itemPrice[i] << endl;
        cout << "\n\nItem:" << itemID[i] << endl
             << "\t" << itemName[i] << endl
             << "\tPrice: $" << itemPrice[i] << endl;
    }
}

int main()
{
    Shop Chawla_Shop;
    cout << "\t\t\t\t\t\t\tChawla Shop\n\n"
         << endl;
    Chawla_Shop.getn_items();
    Chawla_Shop.setItem();
    Chawla_Shop.displayItem();


    Shop Updeshak_Shop;
    cout << "\t\t\t\t\t\t\tUpdeshak Shop\n\n"
         << endl;
    Updeshak_Shop.getn_items();
    Updeshak_Shop.setItem();
    Updeshak_Shop.displayItem();


    return 0;
}