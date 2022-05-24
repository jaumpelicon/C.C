#include <iostream>
#include<string>

using namespace std;

int main(){

    string enter1,enter2,enter3;
    cin>>enter1>>enter2>>enter3;
    cout<<enter1[2]
    if(enter1 == "vertebrado"){

        if(enter2 == "ave"){

            if(enter3 == "carnivoro") cout<<"aguia"<<endl;
            else if(enter3 == "onivoro") cout<<"pomba"<<endl;
        }
        else if(enter2 == "mamifero"){

            if(enter3 == "onivoro") cout<<"homem"<<endl;
            else if(enter3 == "herbivoro" ) cout<<"vaca"<<endl;
        }
    }
    else if(enter1 == "invertebrado"){
        
        if(enter2 == "inseto"){
            if(enter3 == "hematofago") cout<<"pulga"<<endl;
            else if(enter3 == "herbivoro") cout<<"lagarta"<<endl;
        }
        else if(enter2 == "anelideo"){
            if(enter3 == "hematofago")cout<<"sanguessuga"<<endl;
            else if(enter3 == "onivoro")cout<<"minhoca"<<endl;
        }
    }

    return 0;
}