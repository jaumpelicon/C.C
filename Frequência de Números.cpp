#include<iostream>
#include<vector>

using namespace std;
int main(){

    int t,n;
    vector<int> numeros(2001,0);
    cin>>t;
   
   while (t--){
       cin>>n;
       numeros[n]++;
       
   }

   for(int i =0; i<2001; i++) {
       if (numeros[i] != 0) {
           cout<<i<<" aparece "<<numeros[i]<<" vez(es)"<<endl;
       }
       
   }
    return 0;
}