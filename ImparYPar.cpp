
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int numeros[10];
    int par[10];
    int impar[10];
    int contadorPar=0;
    int contadorImpar=0;
    
    cout<<"Digite 10 numeros: "<<endl;
    
    for(int i=0; i<10;i++){
       
        cin>>numeros[i];
    }
    
    for(int i=0; i<10;i++){
        if(numeros[i]%2==0){
          par[contadorPar]=numeros[i];
          contadorPar++;
        }else{
            impar[contadorImpar]=numeros[i];
            contadorImpar++;
        }
    }
    
    if(contadorPar!=0){
    cout<<"Los numeros pares son: ";
    for(int i=0; i<contadorPar;i++){
        cout<<par[i]<<" ";
       }
        
    }
    
    
    if(contadorImpar!=0){
    cout<<endl;
    cout<<"Los numeros impares son: ";
    for(int i=0; i<contadorImpar;i++){
        cout<<impar[i]<<" ";
        
       }
    }
    
    getch();
    return 0;
}