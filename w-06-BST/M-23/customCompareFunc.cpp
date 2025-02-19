#include <bits/stdc++.h>
using namespace std;
class Product
{
public:
    string name;
    int price;
    int quantity;
    // Product(string name, int price)
    // {
    //     this->name = name;
    //     this->price = price;
    // }
};
bool sortByQuantity(Product a, Product b)
{
    return a.price > b.price;
}

int main()
{
    int n;
    cin >> n;
    Product carts[n];

    for (int i = 0; i < n; i++)
    {
        cin >> carts[i].name >> carts[i].price >> carts[i].quantity;
    }

    sort(carts, carts + n, sortByQuantity);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -------------" << endl;
        cout << "🛍️ = " << carts[i].name << " || ";
        cout << "💵= " << carts[i].price << " || ";
        cout << "🛒 = " << carts[i].quantity << endl;
    }

    return 0;
}