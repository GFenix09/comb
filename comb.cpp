#include <iostream>
using namespace std;

int pow(int base, int esponente){
    int risultato = 1;
    for(int i = 0; i < esponente; i++){
        risultato =  risultato * base;
    }
    return risultato;
}
bool wh(bool r){
    return r;
}

char lettere[93] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','0', '1', '2', '3', '4', '5', '6', '7', '8', '9','!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', ']', '^', '_', '`', '{', '|', '}', '~'};
int nCombinazioni = 0;
int cifre = 0;
int a = 0; 
int ultimo = 0;
bool esci = false;
char let = '\0';

int main(){
    cout<<"Inserire il numero di cifre: ";
    cin>>cifre;
    int combinazioni [cifre] = {};
    for(int i = 0; i < cifre; i++){
        combinazioni[i] = 0;
    }
    cout<<"\nNumero di combinazioni possibili: "<<pow(93, cifre)<<endl;
    while(wh(true)){
        if(esci == true){
            break;
        }
        for(int i = 0; i < 93; i++){
            combinazioni[a] = i+1;
            for(int f = 0; f < cifre; f++){
                let = lettere[combinazioni[f]-1];
                cout<<let;
            }
            cout<<endl;
            
        }
        while(wh(true)){
            if(a == cifre){
                esci = true;
                break;
            }
            if(combinazioni[0] == 93){
                combinazioni[1] += 1;
                combinazioni[0] = 1;
                a=1;
                

            }else if(combinazioni[a] == 94){
                combinazioni[a] = 1;
                combinazioni[a+1] += 1;
                a++;
                //break;

            }else if(combinazioni[0] != 93 || combinazioni[a] != 94){
                a = 0;
                break;
            }
            
        }
    }
    return 0;
}
