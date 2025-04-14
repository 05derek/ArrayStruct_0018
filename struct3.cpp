#include <iostream>
#include <string>
using namespace std;

struct weapon{
    string name;
    int damage;
}

struct Player {
    string name;
    string id;
    string level;
    weapon weapon;
}

int main(){
    Player pl;
    cout << "Masukkan nama player= " ;
    getline(cin, pl.name);
    cout << "Masukkan id= ";
    cin >> pl.id;
    cout << "Masukkan level= ";
    cin >> pl.level;
    cin.ignore();
    cout << "Masukkan nama weapon= ";
    getline(cin, pl.weapon.name)
    cout << "Masukkan damage weapon= "; 
    cin >> pl.weapon.damage;

    cout <<"Tampilkan Player" << endl;
    cout << "Nama player= " << pl.name << endl;
    cout << "Id player= " << pl.id << endl;
    cout << "Level Player= " << pl.level << endl;
    cout << "Nama weapon= " << pl.weapon.name << endl;
    cout << "Damage weapon= " << pl.weapon.damage << endl;
}