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

    Player pl[3];
    for(int i=0; 0<3; i++){

    cout << "Masukkan nama player= " ;
    getline(cin, pl[i].name);
    cout << "Masukkan id= ";
    cin >> pl[i].id;
    cout << "Masukkan level= ";
    cin >> pl[i].level;
    cin.ignore();
    cout << "Masukkan nama weapon= ";
    getline(cin, pl[i].weapon.name)
    cout << "Masukkan damage weapon= "; 
    cin >> pl.weapon.damage;
    }

    for(int i=0; 0<3; i++){
    cout <<"Tampilkan Player" << endl;
    cout << "Nama player= " << pl[i].name << endl;
    cout << "Id player= " << pl[i].id << endl;
    cout << "Level Player= " << pl[i].level << endl;
    cout << "Nama weapon= " << pl[i].weapon.name << endl;
    cout << "Damage weapon= " << pl[i].weapon.damage << endl;
    }
}