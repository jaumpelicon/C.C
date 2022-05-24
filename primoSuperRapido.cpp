#include<iostream>
#include<map>
#include<math.h>
#include<vector>
#include<bitset>

using namespace std;

bitset<1000> bs;
vector<int> primos;
int tam_crivo = 317;

void crivo(){

    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    
    for(int i=2; i<=tam_crivo; i++){
        if(bs[i] == 1){
            primos.push_back(i);
            for(int j = i * i; j<=tam_crivo; j+=i) bs[j] = 0;
        }
    }
}

bool primo(int n){
    if(n <= tam_crivo) return bs[n];
    for(int i=0; i<primos.size(); i++){
        if(n%primos[i]==0) return false;
    }
    return true;
}

int main(){
    crivo();
   int n;
   while (cin>>n) {
       if (primo(n)) {
           bool super = true;
           while (n!=0) {
               if (primo(n%10) == false){
                   super = false;
                   break;
               }
               n/=10;
           }
           
           if (super) cout<<"Super"<<endl;
           else cout<<"Primo"<<endl;
           
       }
       else{
           cout<<"Nada"<<endl;
       }
       
   }
   
   return 0;
}
