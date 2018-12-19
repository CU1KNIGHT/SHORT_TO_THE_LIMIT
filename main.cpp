#include <iostream>
using namespace std;

int main() {
    cout << "   ++++++++++++++++++++++++"  << endl;
    cout << "   +++ Kuerzen von Bruechen +++"  << endl;
    cout << "   ++++++++++++++++++++++++"  << endl;
    int N1, N2,r;
    cout << "   Zahler Nummer"  << endl;
    cin >> N1;
    cout << "   Nenner Nummer"  << endl;
    cin >> N2;
    int p=N1;
    int q=N2;
    if(N2==0) {
        cout << "undefiniert ( Dividieren durch 0 !!! ) "  << endl;
        main();
    }

while(q !=0){


    r = p%q;
    p=q;
    q=r;


}

cout << "Zaehler "<< endl;
    cout <<  N1 /p << endl;
    cout << "______"<< endl;
    cout <<  N2 /p << endl;

    cout << "Nenner  "<<  endl;
main();
}
