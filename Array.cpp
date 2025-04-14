
int main(){
        cout << "Nama pada index 2 adalah " << nama[2] << endl;
        //memberi nilai pada elemen array per index
        nama[2]= "derek";
        cout << "Nama pada index 2 adalah " << nama[2] << endl;

        cout << "Input score" << endl;
        cout << endl;

        //memberi nilai array dengan looping for
        for(int i=0; i<5; i++){
            cout << "Score ke- " << i+1 << "=";
            cin >> score[i];
        }

        cout << "Tampilkan score" << endl;
        cout << endl;
        
        //menampilkan nilai array dengan looping for
        for(int i=0; i<5; i++){
            cout << "Score ke- " << i+1 << "=" << score[i] << endl;
        }
}

