/*
 * Proyecto tienda LOL
 * Claudio Gabriel Lopez Bricenio
 * A01710963
 * 2/12/2022
 */

#ifndef PASIVA_H
#define PASIVA_H

#include <iostream>
#include <string>
using namespace std;

#include "Objeto.h"


//Clase pasiva herencia de la clase objeto
class Pasiva: public Objeto{
   
    //Declaro atributos
    private:
        string efectoPasiva;
    
    //Declaro metodos
    public:

        /*
         * Constructor Pasiva que recibe nombre, precio, precioventa, stat AP
         * stat AD, stat MS, stat MR, stat AR, stat vida, stat mana, stat HPR,
         * efectoPasiva
         *
         * @param string nom, int pre, int prev, int stap, int stad, int stms,
         *        int stmr, int star, int vid, int man, double sthpr,
         *        string efectp
         * @return Objeto Pasiva
         */

        Pasiva(string nom, int pre, int prev, int stap, int stad, int stms,
        int stmr, int star, int vid, int man, double sthpr, string efectp):

        Objeto(nom, pre, prev, stap, stad, stms, stmr, star, vid, man, sthpr)

        {
            efectoPasiva = efectp;
        } 

        // Getter de efectoPasiva

        /*
        * getter efectoPasiva
        *
        * @param
        * @return string que indica la pasiva del objeto
        */

        string getEfectoPasiva(){
            return efectoPasiva;
        }

        // Setter de efectoPasiva

        /*
        * setter efectoPasiva
        *
        * @param string ea: indica el efecto de la pasiva del objeto
        * @return
        */

        void setEfectoPasiva(string ea){
            efectoPasiva = ea;
        }

        //Metodos clase pasiva

        /*
        * Imprime un mensaje en el que especifica que la pasiva esta siempre 
        * activa
        *
        * @param Objeto de la clase Pasiva
        * @return
        */

        void pasivaActiva(Pasiva &b){
            cout<<"El efecto "<<b.getEfectoPasiva()  <<" del objeto "
            <<b.getNombre()<<" esta siempre activa"<<endl;
        }

        /*
        * Le permite al usuario crear un objeto
        * de la clase "Pasiva" (El usuario ingresa los atributos del objeto)
        *
        * @param Objeto de la clase Pasiva
        * @return
        */

        void valoresPasiva(Pasiva &a1){
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

            string efectp;
            cout <<"Ingresa el efecto de la pasiva: "; cin>> efectp;
            a1.setEfectoPasiva(efectp);

        }
        
};

#endif //! PASIVA_H