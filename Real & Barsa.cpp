#include <iostream>
using namespace std;
int main(){
    int Real;
    cout << "Real ning achkosini kiriting: ";
    cin >> Real;
    int Barsa;
    cout << "Barsa ning achkosini kiriting: ";
    cin >> Barsa;
    if(Real>Barsa){
        cout << "Real g'olib";
    }else if(Real<Barsa){
        cout << "Barsa g'olib";
    }else if(Real==Barsa){
        int Re;
        cout << "Real ni gollarini kiriting: ";
        cin >> Re;
        int Bar;
        cout << "Barsa ni gollarini kiriting: ";
        cin >> Bar;
        if(Re>Bar){
            cout << "Real g'olib";
        }else if(Re<Bar){
            cout << "Barsa g'olib";
        }else if(Re==Bar){
            int R;
            cout << "Realni o'tqizgan gollarini kiriting: ";
            cin >> R;
            int B;
            cout << "Barsa ni o'tqizgan gollarini kiriting: ";
            cin >> B;
            if(R>B){
                cout << "Barsa g'olib";
            }else if(R<B){
                cout << "Real g'olib";
            }else {
                cout << "Teng";
            }
        }
    }
}
