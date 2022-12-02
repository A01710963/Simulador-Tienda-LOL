/*
 * Proyecto tienda LOL
 * Claudio Gabriel Lopez Bricenio
 * A01710963
 * 2/12/2022
 */

#ifndef CONSUMIBLE_H
#define CONSUMIBLE_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Objeto.h"

//Clase consumible herencia de clase Objeto
class Consumible: public Objeto{

    //Atributos
    private:
        int tiempoEfecto;
        bool efectoPermanente;
    
    //Metodos
    public:
    
        /*
         * Constructor consumible que recibe nombre, precio, precioventa, stat AP
         * stat AD, stat MS, stat MR, stat AR, stat vida, stat mana, stat HPR,
         * tiempoEfecto, efectoPermanente
         *
         * @param string nom, int pre, int prev, int stap, int stad, int stms,
         *        int stmr, int star, int vid, int man, double sthpr,
         *        bool efectp, int tiem
         * @return Objeto Consumible
         */
        Consumible(string nom, int pre, int prev, int stap, int stad, int stms, int stmr, int star, int vid, int man, double sthpr, bool efectp, int tiem): 
            Objeto(nom, pre, prev, stap, stad, stms, stmr, star, vid, man, sthpr){
            tiempoEfecto = tiem;
            efectoPermanente = efectp;
        }

        //Setters de tiempoEfecto y efectoPermanente

        /*
         * setter tiempoEfecto
         *
         * @param int te: El tiempo que dura el efecto del objeto
         * @return
         */

        void setTiempoEfecto(int te){
            tiempoEfecto = te;
        }

        /*
        * setter efectoPermanente
        *
        * @param bool ep: Indica si el efecto es permanente o no
        * @return
        */

        void setEfectoPermanente(bool ep){
            efectoPermanente = ep;
        }
        
        //Getters de tiempoEfecto y efectoPermanente

        /*
        * Getter tiempoEfecto
        *
        * @param
        * @return int con el tiempo que dura el efecto del objeto
        */

        int getTiempoEfecto(){
            return tiempoEfecto;
        }

        /*
        * Getter efectoPermanente
        *
        * @param
        * @return bool que indica si el efecto del objeto es permanente o no
        */

        bool getEfectoPermanente(){
            return efectoPermanente;
        }

        //Metodos

        /*
        * Le pide al usuario que ingrese los valores del objeto para crear un
        * objeto de la clase consumible(El usuario ingresa los datos del objeto)
        *
        * @param Objeto de la clase consumible
        * @return
        */
       
        void valoresConsumible(Consumible &c1){
            string n;
            cout<<"Ingresa el nombre del Objeto: "; cin>>n;
            c1.setNombre(n);

            int p;
            cout <<"Ingresa el precio del objeto: "; cin>> p;
            c1.setPrecio(p);

            int pv;
            cout <<"Ingresa el precio de venta del objeto: "; cin>> pv;
            c1.setPrecioVenta(pv);

            int aap;
            cout <<"Ingresa el stat AP del objeto: "; cin>> aap;
            c1.setStatAP(aap);

            int aad;
            cout <<"Ingresa el stat AD del objeto: "; cin>> aad;
            c1.setStatAD(aad);

            int ams;
            cout <<"Ingresa la velocidad de movimiento que aporta el objeto: ";
            cin>> ams;
            c1.setStatMS(ams);

            int amr;
            cout <<"Ingresa la resistencia magica que aporta el objeto: "; 
            cin>> amr;
            c1.setStatMR(amr);

            int aar;
            cout <<"Ingresa la armadura que aporta el objeto: "; cin>> aar;
            c1.setStatAR(aar);

            int avid;
            cout <<"Ingresa la vida que aporta el objeto: "; cin>> avid;
            c1.setStatVida(avid);

            int aman;
            cout <<"Ingresa el mana que aporta el objeto: "; cin>> aman;
            c1.setStatMana(aman);

            double ahpr;
            cout <<"Ingresa la regeneracion de vida que aporta el objeto: "; 
            cin>> ahpr;
            c1.setStatHPR(ahpr);

            int efect;
            cout <<"El efecto del consumible es permanente? \n 1. Si \n 2.No ";
            cin >> efect;

            if (efect == 1)
            {
                bool efectp;
                efectp = true;
                c1.setEfectoPermanente(efectp);
            }
            else
            {
                bool efectp;
                efectp = false;
                c1.setEfectoPermanente(efectp);
                
                int tiem;
                cout<<"Por cuanto tiempo dura el efecto? (Segundos) ";
                cin>>tiem;
                c1.setTiempoEfecto(tiem);
            }
        }
        
        /*
        * Despliega un mensaje que especifica que el campeon ha consumido el 
        * objeto, actualiza las estadisticas del campeon y las imprime, si el
        * efecto del objeto no es permanente especifica el tiempo que duro el
        * efecto
        *
        * @param Objeto de la clase consumible y objeto de la clase champ
        * @return
        */

        void consumirObjeto(Consumible &c1, Champ &ch1){
            if (c1.getEfectoPermanente() == true)
            {
                cout<<"El campeon "<<ch1.getNombreChamp()
                <<" ha consumido el objeto "<<c1.getNombre()<<endl;
                c1.actualizarStatsCompra(ch1,c1);
                ch1.imprimirStats(ch1);
            }
            else
            {
                cout<<"El campeon "<<ch1.getNombreChamp()
                <<" ha consumido el objeto "<<c1.getNombre()<<endl;
                c1.actualizarStatsCompra(ch1,c1);
                ch1.imprimirStats(ch1);
                cout<<"Las stats del campeon " <<ch1.getNombreChamp()
                <<" se han actualizado durante "<<c1.getTiempoEfecto()
                <<" segundos"<<endl;
            }

        }

        /*
        * Imprime las stats del objeto y especifica si son permanentes o
        * temporales
        *
        * @param Objeto de la clase consumible
        * @return
        */

        void imprimirStatsConsumible(Consumible &c1){
            if (c1.getEfectoPermanente() == true)
            {
                c1.imprimirStatsObjeto(c1);
                cout<<"Las stats son permanentes"<<endl;
            }
            else
            {
                c1.imprimirStatsObjeto(c1);
                cout<<"Las stats tendran efecto por "<<c1.getTiempoEfecto()
                <<" segundos" <<endl;
            }
        }
};

#endif //! CONSUMIBLE_H