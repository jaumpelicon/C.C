#include<iostream>
#include<bitset>
#include<vector>
#include<math.h>

using namespace std;

bitset<100001> bit;
vector<int> primos;

void crivo(){

  bit.set();

  bit[0] = bit[1] = 0;

  for(long long int i=2; i<=100000; i++){

    if(bit[i]){
        primos.push_back(i);
        for(long long int j = i *i; j<=100000; j+=i){
            bit[j] = 0;
        }
    }
  }

}

int main(){

  crivo();
  int n;
  cin>>n;

  int i = 0;
  while(primos[i] < n) i++;

  int velocidade = 0;
  for(int j = i; j< i+10; j++ ) velocidade+= primos[j];

  cout<<velocidade<<" km/h"<<endl;
  cout<<trunc(60000000.0/velocidade)<<" h / "<<trunc((60000000.0/velocidade)/24)<<" d"<<endl;


  return 0;
}
