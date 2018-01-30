#include <iostream>
using namespace std;
void buscarsecuencial(int arre[],int v){
    for(int c=0; c<=100 ; c++){
        if (v==arre[c]){
            cout<<"Valor: "<< v<<" Posicion: "<<c<<endl;
        }else if(v>99){
            cout<<"Numero no existe"<<endl;
        }
    }
    }
void buscarbinaria(int arre[], int n){
    int inicio=0,final=99;
    int pivote=(inicio+final)/2;

    if(n>=pivote){
        for(final;final>=pivote;final--){
            if(arre[final]==n)
                cout << "Valor " << n << " Posicion " << final << endl;
        }
    }else if(n<=pivote){
        for(inicio;inicio>=pivote;inicio++){
            if(arre[final]==n)
                cout << "Valor " << n << " Posicion " << inicio << endl;
        }
    }else {
        cout << "Numero no existe"<<endl;
    }
}
int main() {
    int val=1;
    int tip;
    int arre[100];
    for(int c=0; c<=100 ; c++){
        arre[c]=c+1;
    }
    while(val!=-1){
    cout <<"Ingrese el valor a buscar: (-1 para salir) ";
    cin >> val;
        if(val==-1){
            break;
        }
    cout <<"Tipo de algoritmo a usar:"<<endl;
    cout <<"1. Secuencial"<<endl;
    cout <<"2. Binaria" <<endl;
    cin >> tip;
    if (tip==1){
        buscarsecuencial(arre,val);
    }else{
        buscarbinaria(arre,val);
    }
}
}