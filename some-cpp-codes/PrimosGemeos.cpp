#include<iostream>
#include<bitset>
#include<vector>

using namespace std;

bitset<100> bs;
int tam_crivo= 100;
vector<int> primos;

void crivo(){
    bs.set();
    bs[0]=0;
    bs[1]=0;

    for(int i=2;i<=tam_crivo;i++){
        if(bs[i]==1){
            primos.push_back(i);
            for(int j=i*i; j<=tam_crivo; j+=i){
                bs[j]=0;
            }
        }
    }
}

bool primo(int n){
    if(n<=tam_crivo) return bs[n];
    for(int i=0; i<primos.size(); i++){
        if(n%primos[i]==0) return false;
    }

    return true;
}

int main(){
    crivo();
    int a;

    while(cin>>a){
        for(int i=a;i>0;i--){
            if(primo(i)==true){
                if(primo(i-2)==true){
                    cout<<i-2<<" "<<i<<endl;
                    break;
                }
            }
        }
    }
}