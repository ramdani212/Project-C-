#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string b;
    string c[3] = {"Scissor", "Rock", "Paper"};
    string d;
    int tmpt = 1;

    cout << "Apakah kamu ingin bermain ? ";
    getline (cin, b);

    while( b == "ya") {
        cout << "Pilih bentuk suit (Scissor/Rock/Paper): ";
        getline(cin, a);

        if (tmpt <= 3) {
            d = c[tmpt-1];
            tmpt ++;
        }else if (tmpt > 3){
            tmpt = 1;
            d = c[tmpt-1];
        }


        if(a == "Scissor") {
            if(d == c[0]){
                cout << a << "\tvs " << d << endl;
                cout << "kamu seri" << endl;
            }else if (d == c[1]){
                cout << a << "\tvs " << d << endl;
                cout << "kamu kalah" << endl;
            }else if ( d == c[2]){
                cout << a << "\tvs " << d << endl;
                cout << "kamu menang" << endl;
            }else {
                cout << "program gagal";
            }
            
        }

        if(a == "Rock") {
            if(d == c[0]){
                cout << a << " vs " << d << endl;
                cout << "kamu menang" << endl;
            }else if (d == c[1]){
                cout << a << " vs " << d << endl;
                cout << "kamu seri"<< endl;
            }else if ( d == c[2]){
                cout << a << " vs " << d << endl;
                cout << "kamu kalah"<< endl;
            }else {
                cout << "program gagal";
            }
        }
        
        if(a == "Paper") {
            if(d == c[0]){
                cout << a << " vs " << d << endl;
                cout << "kamu kalah"<< endl;
            }else if (d == c[1]){
                cout << a << " vs " << d << endl;
                cout << "kamu menang"<< endl;
            }else if ( d == c[2]){
                cout << a << " vs " << d << endl;
                cout << "kamu seri"<< endl;
            }else {
                cout << "program gagal";
            }

        }
        
        cout << "Apa ingin bermain lagi ? ";
        getline(cin, b);



    }
    

    return 0;
}