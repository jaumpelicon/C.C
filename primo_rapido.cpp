#include<iostream>
#include<map>
#include<math.h>

bool primo(long long int n){

    if(n==2) return true;
    if (n%2==0) return false;
 
   for (int i = 3; i <=sqrt(n); i+=2)   {
         if (n%i == 0) return false;
   }

   return true;
}

using namespace std;

int main(){
    int t;
    long long int  n;
   cin>>t;
   
   while (t--) {
      cin>>n;
      if(primo(n))cout<<"Prime"<<endl;
      else cout<<"Not Prime"<<endl;  
   }
   
   return 0;
}
