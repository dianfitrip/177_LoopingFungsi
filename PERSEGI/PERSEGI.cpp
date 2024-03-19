#include <iostream>
using namespace std;

int sisi;

void inputdata()
{
    cout << "Masukan Nilai sisi : ";
    cin >> sisi;
}

int hitungluas()
{
    return sisi * sisi;
}

void display()
{
    cout << "Luas persegi adalah : " << hitungluas() << endl;
}

int main()
{
    inputdata();
    hitungluas();
    display();
}
