#include <iostream>

using namespace std;

int main()
{
    //Ejercicio 1 y 2
    /*
    int numeros[]= {1,2,3,4,5};
    int suma = 0,multi = 1;

    for(int i=0;i<5;i++){
        suma +=numeros[i];
        multi = multi*numeros[i];
    }
    cout<<"La suma de los elementos del arreglos es: "<<suma<<endl;
    cout<<"La multiplicacion acumulada de los elementos del arreglo es: "<<multi<<endl;
    */

    //Ejercicio 3
/*
   int n;
   cout<<"Digite le numero de elementos que va a tner el arreglo: ";cin>>n;
   int numeros[n];

   for(int i = 0;i<n;i++){
       cout<<"Digite un numero: ";cin>>numeros[i];
    }

   for(int i = 0;i<n;i++){
       cout<<i<<" -> "<<numeros[i]<<endl;
    }
    */

    //Ejercicio 4
/*
    int numeros[]= {1,2,3,4,5},numeros2[5],a=0;
    for(int i = 5;i>=0;i--){
        while(a<=4){
            numeros2[a] = {i};
            a++;
            break;
        }
    }
    cout<<"los valores del arreglo invertido serian: ";
    for(int b = 0;b<5;b++){
        cout << numeros2[b] << " ";
    }
    */

    //Ejercicio 5
/*
    int n,mayor = 0;
    cout<<"Digite el numero de elementos del arreglo: ";cin>>n;
    int numero[n];

    for(int i=0;i<n;i++){
        cout<<i+1<<". Digite un numero: ";cin>>numero[i];

        if(numero[i]>mayor){
            mayor = numero[i];
        }
    }
    cout<<"El elemento mayor del vector es "<<mayor<<endl;
    */

    //ejercicio 6
/*
    int numeros[]= {1,2,3,4,10},mayor = 0,suma = 0;

    for(int i= 0;i<5;i++){
        if(numeros[i]>mayor){
            mayor = numeros[i];
        }
    }
    for(int a= 0;a<4;a++){
        suma += numeros[a];
        if(suma == mayor)cout<<"El numero "<<mayor<<" es la suma del resto de los elementos del vector"<<endl;
        else cout<<"Ningun elemente es la suma del resto de los elementos del vector"<<endl;
    }
*/

    //ejercicio 7
/*
    char letras1[]={'a','b','c','d','e'};
    char letras2[]={'f','g','h','i','j'};
    char letras3[10];

    for(int i = 0;i<5;i++){
        letras3[i] = letras1[i];
    }

    for(int i = 5;i<10;i++){
        letras3[i] = letras2[i-5];
    }

    for(int i =0;i<10;i++){
        cout<<letras3[i]<<endl;
    }
    */

    //ejercicio 8

    int numeros[]= {1,2,3,4,5};
    int numeros2[5];

    for(int i = 0;i<5;i++){
        numeros2[i] = numeros[i]*2;
    }
    for(int i = 0;i<5;i++){
        cout<<numeros2[i]<<endl;
    }
    return 0;
}
