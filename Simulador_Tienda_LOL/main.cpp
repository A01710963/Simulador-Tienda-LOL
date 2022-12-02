/*
 * Proyecto tienda LOL
 * Claudio Gabriel Lopez Bricenio
 * A01710963
 * 2/12/2022
 */

        /*
        * setter
        *
        * @param
        * @return
        */

#include <string>
#include <iostream>
using namespace std;

/*Incluimos las clases*/
#include "activa.h"
#include "champ.h"
#include "pasiva.h"
#include "consumible.h"



/*Funciones del main*/

/*
* Imprime menu principal
* 
*
* @param 
* @return
*/
void menuPrincipal(){
    cout<< "Que deseas hacer?" <<endl;
    cout<< "1. Crear campeon y objetos" <<endl;
    cout<< "2. Salir" <<endl;
};
    


/*
* Imprime menu del tipo de objeto a crear
* 
*
* @param 
* @return
*/

void menuTipoObejto(){
    cout<< "Que tipo de objeto deseas declarar?" <<endl;
    cout<< "1. Pasiva activa" << endl;
    cout<< "2. Pasiva comun" << endl;
    cout<< "3. Consumible" << endl;
};

/*
* Imprime menu de lo que va a hacer el usuario con el objeto
* 
*
* @param 
* @return
*/

void menuTareaObjeto(){
    cout<< "Que deseas hacer con el objeto?" <<endl;
    cout<< "1. Comprar objeto" <<endl;
    cout<< "2. Vender objeto" <<endl;
    cout<< "3. Imprimir stats" <<endl;
    cout<< "4. Salir" <<endl;

};

/*
* Menu en donde el usuario decide si consumir objeto de la clase Consumible
* Si decide consumir el objeto llamamos la funcion consumirObjeto
* Si no imprimos un mensaje que confirma que no consumio el objeto
* 
*
* @param Objeto de la clase Consumible y Champ
* @return
*/
void menuConsumirConsumible(Consumible &oc1, Champ of1){
    int consumirObjeto;
    cout << "Deseas consumir el objeto? \n 1. Si \n 2. No"<< endl;
    cin>> consumirObjeto;

    switch (consumirObjeto)
    {
        case 1:
            oc1.consumirObjeto(oc1, of1);
            break;
        
        case 2:
            cout<<"No consumiste el objeto :(("<<endl;
            break;
        
        default:
            cout<<"Opcion invalida"<<endl;
    }
};

/*
* El usuario decide si activar la pasiva del objeto de la clase Activa
* Si la activa llamamos a la funcion activar pasiva 
* Si no imprimmos un mensaje
*
* @param Objeto de la clase Activa
* @return
*/

void menuActivarPasiva(Activa &oa1){
    int activarPasiva;
    cout<< "Deseas activar la pasiva? \n 1. Si \n 2. No"<< endl;
    cin>> activarPasiva;
    if (activarPasiva == 1){
        oa1.activarPasiva(oa1);
    }

    else {
        cout<< "No haz activado la pasiva :((("<<endl;
    }

};

/*
* Switch funcion del objeto Activa
* case 1: comprar objeto, usuario decide si activar la pasiva, 
*         actualizar stats del campeon e imprimirlas
*         si no se tiene el dinero suficiente imprime un mensaje 
* 
* case 2: vender objeto, actualizar stats del campeon e imprimirlas
*
* case 3: imprime stats del objeto
*
* case 4: imprime un mensaje
*
* @param int fo que es la eleccion del usuario en el menu
         Objeto de la clase Activa y Champ
* @return
*/

void activarFuncionObjetoActiva(int fo, Activa &oa1, Champ &cf1){
    switch(fo){
        case 1:
            if (oa1.comprarObjeto(oa1, cf1) == true)
            {
                oa1.actualizarStatsCompra(cf1,oa1);
                cf1.imprimirStats(cf1);
                menuActivarPasiva(oa1);
                break;
            }
            else
            {
                cout<<"El objeto no se ha comprado :(("<<endl;
                break;
            }
        
        case 2:
            oa1.venderObjeto(oa1, cf1);
            oa1.actualizarStatsVenta(cf1, oa1);
            cf1.imprimirStats(cf1);
            break;
        
        case 3:
            oa1.imprimirStatsObjeto(oa1);
            break;
        
        case 4:
            cout<<"Adios :)"<<endl;
            break;
        
        default:
            cout<<"Opcion invalida" <<endl;
            break;
        

    }
};

/*
* Switch funcion del objeto Pasiva
* case 1: comprar objeto, actualizar stats del campeon e imprimirlas
*         si no se tiene el dinero suficiente imprime un mensaje 
* 
* case 2: vender objeto, actualizar stats del campeon e imprimirlas
*
* case 3: imprime stats del objeto
*
* case 4: imprime un mensaje
*
* @param int fo que es la eleccion del usuario en el menu
         Objeto de la clase Pasiva y Champ
* @return
*/
void activarFuncionObjetoPasiva(int fo, Pasiva &op1, Champ &cf1){
    switch(fo){
        case 1:
            if (op1.comprarObjeto(op1,cf1) == true)
            {
                op1.actualizarStatsCompra(cf1,op1);
                cf1.imprimirStats(cf1);
                op1.pasivaActiva(op1);
                break;
            }
            else
            {
                cout<<"El objeto no se ha comprado :((("<<endl;
                break;
            }

        case 2:
            op1.venderObjeto(op1, cf1);
            op1.actualizarStatsVenta(cf1, op1);
            cf1.imprimirStats(cf1);
            break;
        
        case 3:
            op1.imprimirStatsObjeto(op1);
            break;
        
        case 4:
            cout<<"Adios :)"<<endl;
            break;
        
        default:
            cout<<"Opcion invalida" <<endl;
            break;
        

    };
};

/*
* Switch funcion del objeto Consumible
* case 1: comprar objeto, actualizar stats del campeon e imprimirlas
*         si no se tiene el dinero suficiente imprime un mensaje 
* 
* case 2: vender objeto, actualizar stats del campeon e imprimirlas
*
* case 3: imprime stats del objeto
*
* case 4: imprime un mensaje
*
* @param int fo que es la eleccion del usuario en el menu
         Objeto de la clase Consumible y Champ
* @return
*/

void activarFuncionObjetoConsumible(int fo, Consumible &oc1, Champ &cf1){
    switch(fo){
        case 1:
            if (oc1.comprarObjeto(oc1,cf1) == true)
            {
                oc1.actualizarStatsCompra(cf1,oc1);
                menuConsumirConsumible(oc1, cf1);
                break;
            }
            else
            {
                cout<<"El objeto no se ha comprado :((("<<endl;
                break;
            }
        
        case 2:
            oc1.venderObjeto(oc1, cf1);
            break;

        case 3:
            oc1.imprimirStatsConsumible(oc1);
            break;
        
        case 4:
            cout<<"Adios :)"<<endl;
            break;

        default:
            cout<<"Opcion invalida" <<endl;
            break;

    };
};


/*---------------------------------------------------------------------------*/

/*                                   Main                                    */

int main(){

    /*Imprimimos el menu principal y creamos un ciclo while con el fin de
    que el programa se repita hasta que el usuario elija salir*/
    int opcionMenuPrincipal = 1;

    while (opcionMenuPrincipal == 1){

        menuPrincipal(); cin>> opcionMenuPrincipal;

        switch (opcionMenuPrincipal)
        {
            /*En caso de que el usuario haya elegido crear un campeon y 
            objetos*/
            case 1:
            {

                /*
                * Creamos objeto de clase Champ
                */

                Champ p1("", 0, 0, 0, 0, 0, 0, 0, 0, 0.0);

                p1.pedirValores(p1);

                p1.imprimirStats(p1);


                /*
                * Declaramos la variable tipoObjeto
                * Imprimimos menu y guardamos eleccion del usuario
                */

                int tipoObjeto;
    
                menuTipoObejto(); cin >> tipoObjeto;




                /*Switch, dependiendo de la clase de objeto que desee crear 
                el usuario realizamos una serie de acciones*/

                switch(tipoObjeto){
            
                    /*En caso de que haya elegido crear un objeto de la clase "Activa"*/
                    case 1:
                        {
                        
                            /*
                            *Construimos objeto de la clase Activa
                            */

                            Activa oa1("", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, "");

                            oa1.valoresActiva(oa1);



                            /*
                            *Declaramos la variable funcionObjeto
                            *Imprimimos menu de la tarea del objeto
                            *Guardamos eleccion
                            */

                            int funcionObjeto;

                            menuTareaObjeto(); cin >> funcionObjeto;

                

                            /*
                            * Llamamos funcion activarFuncionObjetoActiva
                            * Si elije la opcion 3 tiene la opcion de volver a
                            * elegir que hacer
                            */

                            activarFuncionObjetoActiva(funcionObjeto, oa1, p1);

                            while (funcionObjeto == 3){
                    
                                menuTareaObjeto();

                                cin>> funcionObjeto;

                                activarFuncionObjetoActiva(funcionObjeto, oa1, p1);
                            };
                
                        }; break;
                

                    /*En caso de que haya elegido crear un objeto de la clase "Pasiva"*/
                    case 2:
                        {

                            /*
                            *Constructor de la clase Pasiva, llamamos la 
                            *funcion de valoresPasiva
                            */
                            Pasiva op1("", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, "");

                            op1.valoresPasiva(op1);



                            /*
                            *Declaramos la variable funcionObjeto
                            *Imprimimos menu de la tarea del objeto
                            *Guardamos eleccion
                            */

                            int funcionObjeto;

                            menuTareaObjeto();cin>> funcionObjeto;



                            /*
                            * Llamamos funcion activarFuncionObjetoPasiva
                            * Si elije la opcion 3 tiene la opcion de volver a
                            * elegir que hacer
                            */

                            activarFuncionObjetoPasiva(funcionObjeto, op1, p1);

                            while (funcionObjeto == 3){
                    
                                menuTareaObjeto();
                    
                                cin>> funcionObjeto;
                    
                                activarFuncionObjetoPasiva(funcionObjeto, op1, p1);
                
                            };
                        }; break;          
            
                    /*En caso de que haya elegido crear un objeto de la clase "Consumible"*/
                    case 3:
                        {

                            /*
                            *Constructor de la clase Consumible, llamamos la 
                            *funcion de valoresConsumible
                            */

                            Consumible oc1("", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, true, 0);

                            oc1.valoresConsumible(oc1);


                            /*
                            *Declaramos la variable funcionObjeto
                            *Imprimimos menu de la tarea del objeto
                            *Guardamos eleccion
                            */
                            int funcionObjeto;

                            menuTareaObjeto(); cin >> funcionObjeto;


                            /*
                            * Llamamos funcion activarFuncionObjetoConsumible
                            * Si elije la opcion 3 tiene la opcion de volver a
                            * elegir que hacer
                            */
                            activarFuncionObjetoConsumible(funcionObjeto, oc1, p1);

                            while (funcionObjeto == 3){

                                menuTareaObjeto();

                                cin>>funcionObjeto;

                                activarFuncionObjetoConsumible(funcionObjeto, oc1, p1);

                            };
                        }; break;
                }
            

            }break;
        };

    };/*Llave while*/

    return 0; 

};/*Llave main*/
    