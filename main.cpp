#include <iostream>
using namespace std;

int main() {
  int n=0,primo=0,secondo=1,risultato=1;
    cin >> n;
        for(int i=1;i<=n;i++){
            if(risultato<=n) {
                cout << risultato << endl;
                risultato = primo + secondo;
                primo = secondo;
                secondo = risultato;
            }else{
                return 0;
            }
        }
    return 0;
}
