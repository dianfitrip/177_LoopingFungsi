#include <iostream>
using namespace std;

int panjang, lebar;

void inputdata()
{
    cout << "Masukan Panjangnya = ";
    cin >> panjang;
    cout << "Masukan Lebarnya = ";
    cin >> lebar;
}

int hitungluas()
{
    return panjang * lebar;
}

void display()
{
    cout << "Luasnya adalah : " << hitungluas() << endl;
}

int main()
{
    inputdata();
    hitungluas();
    display();
}