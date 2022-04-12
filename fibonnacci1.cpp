#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tamEntrada, entrada;
     cin>>tamEntrada;

    vector<long long int> fib(61);

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < 61; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < tamEntrada; i++){
        cin>>entrada;
        cout<<"Fib"<<"("<<entrada<<")"<<" = "<<fib[entrada]<<endl;
    }

    return 0;
}