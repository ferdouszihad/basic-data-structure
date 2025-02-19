#include <bits/stdc++.h>
using namespace std;
class Product
{
public:
    string name;
    int price;
    int quantity;
    Product(string name, int price, int qt)
    {
        this->name = name;
        this->price = price;
        quantity = qt;
    }
};
class Cmp
{

public:
    bool operator()(Product a, Product b)
    {
        // Desc
        return a.price < b.price;
        // Asc
        // return a.price > b.price;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Product, vector<Product>, Cmp> carts;

    // taking input
    for (int i = 0; i < n; i++)
    {
        int qt, price;
        string title;
        cin >> title >> price >> qt;
        Product newP(title, price, qt);
        carts.push(newP);
    }
    int c = 1;
    while (!carts.empty())
    {
        cout << c++ << " >---------------------------" << endl;

        cout << "🛍️ " << carts.top().name << " || ";
        cout << "💵 " << carts.top().price << " || ";
        cout << "🛒 " << carts.top().quantity << endl;

        carts.pop();
    }

    return 0;
}