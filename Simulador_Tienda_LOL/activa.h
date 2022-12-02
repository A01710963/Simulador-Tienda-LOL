/*
 * Proyecto tienda LOL
 * Claudio Gabriel Lopez Bricenio
 * A01710963
 * 2/12/2022
 */

#ifndef ACTIVA_H
#define ACTIVA_H

#include <iostream>
#include <string>
using namespace std;

#include "objeto.h"


//Clase activa herencia de clase objeto
class Activa: public Objeto{
   
    //Atributos
    private:
        string efectoActiva;
    
    //Metodos
    public:

        /*
         * Constructor Activa que recibe nombre, precio, precioventa, stat AP
         * stat AD, stat MS, stat MR, stat AR, stat vida, stat mana, stat HPR,
         * efectoActiva
         *
         * @param string nom, int pre, int prev, int stap, int stad, int stms,
         *        int stmr, int star, int vid, int man, double sthpr, 
         *        string efect
         * @return Objeto Activa
         */
        Activa(string nom, int pre, int prev, int stap, int stad, int stms, int stmr, int star, int vid, int man, double sthpr, string efect): 
            Objeto(nom, pre, prev, stap, stad, stms, stmr, star, vid, man, sthpr){
            efectoActiva = efect;
        } 

        //Getter de efectoActiva

        /*
        * getter efectoActiva
        *
        * @param
        * @return string con el efecto de la pasiva activa del objeto
        */

        string getEfectoActiva(){
            return efectoActiva;
        }

        //Setter de efectoActiva

        /*
        * setter
        *
        * @param string ea: El efecto de la pasiva activa del objeto
        * @return
        */

        void setEfectoActiva(string ea){
            efectoActiva = ea;
        }

        //Metodos clase Pasiva

        /*
        * Imprime un mensaje en el que especifica que la pasiva activa del 
        * objeto ha sido activada
        *
        * @param Objeto de la clase activa
        * @return
        */

        void activarPasiva(Activa &b){
            cout<<"El efecto "<<b.getEfectoActiva()  <<" del objeto "<<b.getNombre()<<" ha sido activada, woooooooo!!!"<<endl;
        }
        

        /*
        * Le pide al usuario que ingrese los valores del objeto para crear un
        * objeto de la clase activa (El usuario ingresa los datos del objeto)
        *
        * @param Objeto de la clase activa
        * @return
        */

        void valoresActiva(Activa &a1){
            string n;
            cout <<"Ingresa el nombre del objeto: "; cin>> n;
            a1.setNombre(n);

            int p;
            cout <<"Ingresa el precio del objeto: "; cin>> p;
            a1.setPrecio(p);

            int pv;
            cout <<"Ingresa el precio de venta del objeto: "; cin>> pv;
            a1.setPrecioVenta(pv);

            int aap;
            cout <<"Ingresa el stat AP del objeto: "; cin>> aap;
            a1.setStatAP(aap);

            int aad;
            cout <<"Ingresa el stat AD del objeto: "; cin>> aad;
            a1.setStatAD(aad);

            int ams;
            cout <<"Ingresa la velocidad de movimiento que aporta el objeto: ";
            cin>> ams;
            a1.setStatMS(ams);

            int amr;
            cout <<"Ingresa la resistencia magica que aporta el objeto: "; 
            cin>> amr;
            a1.setStatMR(amr);

            int aar;
            cout <<"Ingresa la armadura que aporta el objeto: "; cin>> aar;
            a1.setStatAR(aar);

            int avid;
            cout <<"Ingresa la vida que aporta el objeto: "; cin>> avid;
            a1.setStatVida(avid);

            int aman;
            cout <<"Ingresa el mana que aporta el objeto: "; cin>> aman;
            a1.setStatMana(aman);

            double ahpr;
            cout <<"Ingresa la regeneracion de vida que aporta el objeto: "; 
            cin>> ahpr;
            a1.setStatHPR(ahpr);

            string aefect;
            cout <<"Ingresa el nombre del efecto de la pasiva activa: "; 
            cin>> aefect;
            a1.setEfectoActiva(aefect);

        }

};

#endif //! ACTIVA_H