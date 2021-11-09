#include <iostream>
using namespace std;

int main() {
  int n=0,primo=0,secondo=1,risultato=1;
    cin >> n;
        while(risultato<=n){
                cout << risultato << endl;
                risultato = primo + secondo;
                primo = secondo;
                secondo = risultato;
        }
    return 0;
}
