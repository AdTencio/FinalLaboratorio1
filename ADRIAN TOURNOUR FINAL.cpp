#include<iostream>
#include<cstdlib>

using namespace std;
void cargarDatos(int vPartidos[], int vDepartamentos[]);
void punto1(int vPartidos[]); //Cantidad de partidos con menos de 5mil votos
void punto2(int vDepartamentos[]); //

int main(){

int vPartidos [70]={0};
int vDepartamentos [60]={0};

    while(true){
int opc;
        system("cls");
        cout<<"1) CARGAR DATOS"<<endl;
        cout<<"2) PUNTO A"<<endl;
        cout<<"3) PUNTO B"<<endl;
        cout<<"--------------"<<endl;
        cout<<"0) SALIR"<<endl;
        cout<<endl;
        cout<<"INGRESAR OPCION ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cargarDatos(vPartidos, vDepartamentos);
                    break;
            case 2: punto1(vPartidos);
                    break;
            case 3: punto2(vDepartamentos);
                    break;
            case 0:return 0;
                   break;
        }


    system("pause");

}
    return 0;
}

void cargarDatos(int vPartidos[], int vDepartamentos[]){

    int votos, numMesa, numPartido, numDepartamento;
    bool seguir=true, primerDato=true;

    cout<<"Numero de Mesa de votacion: ";
    cin>>numMesa;

    while(seguir){

        cout<<"Numero de partido: ";
        cin>>numPartido;
        cout<<"Numero de departamento: ";
        cin>>numDepartamento;
        cout<<"Cantidad de votos: ";
        cin>>votos;

        vPartidos[numPartido-1]+=votos;
        vDepartamentos[numDepartamento-1]+=votos;

        cout<<"Numero de Mesa de votacion: ";
        cin>>numMesa;
        if(numMesa==0)seguir=false;
}
}



void punto1(int vPartidos[]){
        int x=0;
        for(x=0;x<70;x++){

            if(vPartidos[x]<5000){
                    cout<<"El siguiente partido no supero los 5 mil votos: ";
                    cout<<x+1<<endl;
            }

        }
}

void punto2(int vDepartamentos[]){
    int mayordepa=0;
    int numMayor = 0;
    int x=0;

    for(x=0;x<60;x++){
        if(vDepartamentos[x]>numMayor){
                numMayor=vDepartamentos[x];
                mayordepa=x+1;
            }

}
    cout<<"El departamento con mas votos fue: "<<mayordepa<<endl;
}
