/*
 * Proyecto tienda LOL
 * Claudio Gabriel Lopez Bricenio
 * A01710963
 * 2/12/2022
 */

#ifndef OBJETO_H
#define OBJETO_H


#include <string>
#include <iostream>
#include "champ.h"
using namespace std;

//Clase Objeto
class Objeto{

    //Atributos
    protected:
        string nombre;
        int precio, precioVenta, statAP, statAD, statMS, statMR, statAR, statVida, statMana;
        double statHPR;

    //Metodos
    public:

        /*
         * Constructor Objeto que recibe nombre, precio, precioventa, stat AP
         * stat AD, stat MS, stat MR, stat AR, stat vida, stat mana, stat HPR,
         *
         * @param string nom, int pre, int prev, int stap, int stad, int stms,
         *        int stmr, int star, int vid, int man, double sthpr, 
         * 
         * @return Objeto Objeto
         */

        Objeto(string nom, int pre, int prev, int stap, int stad, int stms, int stmr, int star, int vid, int man, double sthpr){//CONSTRUCTOR
            nombre = nom;
            precio = pre;
            precioVenta = prev;
            statAP = stap;
            statAD = stad;
            statMS = stms;
            statMR = stmr;
            statAR = star;
            statVida = vid;
            statMana = man;
            statHPR = sthpr;
        }

        //Setters

        /*
        * setter nombre
        *
        * @param string n: nombre del objeto
        * @return
        */

        void setNombre(string n){
            nombre = n;
        }

        /*
        * setter precio
        *
        * @param int p: precio del objeto
        * @return
        */

        void setPrecio(int p){
            precio = p;
        }

        /*
        * setter precioVenta
        *
        * @param int pv: precio de venta del objeto
        * @return
        */

        void setPrecioVenta(int pv){
            precioVenta = pv;
        }

        /*
        * setter statAD
        *
        * @param int ad: stat ad del objeto
        * @return
        */

        void setStatAD(int ad){
            statAD = ad;
        }

        /*
        * setter statAP
        *
        * @param int ap: stat ap del objeto
        * @return
        */

        void setStatAP(int ap){
            statAP = ap;
        }

        /*
        * setter statAR
        *
        * @param int ar: stat ar del objeto
        * @return
        */

        void setStatAR(int ar){
            statAR = ar;
        }

        /*
        * setter statMR
        *
        * @param int mr: stat mr del objeto
        * @return
        */

        void setStatMR(int mr){
            statMR = mr;
        }

        /*
        * setter statMS
        *
        * @param int ms: stat ms del objeto
        * @return
        */

        void setStatMS(int ms){
            statMS = ms;
        }

        /*
        * setter statVida
        *
        * @param int hp: stat vida del objeto
        * @return
        */

        void setStatVida(int hp){
            statVida = hp;
        }

        /*
        * setter statMana
        *
        * @param  int m: stat mana del objeto
        * @return
        */

        void setStatMana(int m){
            statMana = m;
        }

        /*
        * setter statHPR
        *
        * @param double hpr: stat hpr del objeto
        * @return
        */

        void setStatHPR(double hpr){
            statHPR = hpr;
        }

        //Getters

        /*
        * getter nombre
        *
        * @param
        * @return string con el nombre del objeto
        */

        string getNombre(){
            return nombre;
        }

        /*
        * getter precio
        *
        * @param
        * @return int con el precio del objeto
        */

        int getPrecio(){
            return precio;
        }

        /*
        * getter precioVenta
        *
        * @param
        * @return int con el precio de venta del objeto
        */

        int getPrecioVenta(){
            return precioVenta;
        }

        /*
        * getter statAD
        *
        * @param
        * @return int con el stat AD del objeto
        */

        int getStatAD(){
            return statAD;
        }

        /*
        * getter statAP
        *
        * @param
        * @return int con el stat AP del objeto
        */

        int getStatAP(){
            return statAP;
        }

        /*
        * getter statAR
        *
        * @param
        * @return int con el stat AR del objeto
        */

        int getStatAR(){
            return statAR;
        }

        /*
        * getter statMR
        *
        * @param
        * @return int con el stat MR del objeto
        */

        int getStatMR(){
            return statMR;
        }

        /*
        * getter statMS
        *
        * @param
        * @return int con el stat MS del objeto
        */

        int getStatMS(){
            return statMS;
        }

        /*
        * getter statVida
        *
        * @param
        * @return int con el stat Vida del objeto
        */

        int getStatVida(){
            return statVida;
        }

        /*
        * getter statMana
        *
        * @param
        * @return int con el stat Mana del objeto
        */

        int getStatMana(){
            return statMana;
        }

        /*
        * getter statHPR
        *
        * @param
        * @return int con el stat HPR del objeto
        */

        double getStatHPR(){
            return statHPR;
        }
        
        
        //Metodos de la clase Objeto

        /*
        * Imprime el mensaje de comprar objeto y actualiza el oro del campeon
        * Si el campeon no tiene el oro suficiente para comprar el objeto
        * imprime un mensaje que especifica que no tiene el oro suficiente,
        * regresa si el objeto ha sido comprado o no
        * 
        * @param Objeto de la clase Objeto y Champ
        * @return bool objetoComprado
        */

        bool comprarObjeto(Objeto &o, Champ &c){

            if (o.getPrecio() > c.getOro()){
                cout << "No cuentas con el oro suficiente para comprar el objeto " 
                << o.getNombre() << endl;

                int nuevoTotal = c.getOro();
                int objetoComprado = false;
                return objetoComprado;
            }
            else{
                int nuevoTotal = c.getOro() - o.getPrecio();

                cout << "El campeon " << c.getNombreChamp()
                 << " ha comprado el objeto " << o.getNombre() << endl;

                cout << "El oro del campeon " <<c.getNombreChamp() 
                <<" es de " << nuevoTotal << endl;

                c.setOro(nuevoTotal);
                int objetoComprado = true;
                return objetoComprado;
            }
        };
        
        /*
        * Imprime el mensaje de vender objeto y actualiza el oro del campeon
        * 
        *
        * @param Objeto de la clase Objeto y Champ
        * @return
        */

        void venderObjeto(Objeto &o, Champ &c){
            int nuevoTotal = o.getPrecioVenta() + c.getOro();
            cout << "Haz vendido el objeto " <<o.getNombre() << endl;
            cout << "El oro del campeon " <<c.getNombreChamp() <<" es de " 
            << nuevoTotal << endl;
            c.setOro(nuevoTotal);
        };        


        /*
        * Actualiza las stats del campeon en caso de comprar el objeto
        * 
        *
        * @param Objeto de la clase Objeto y Champ
        * @return
        */
        void actualizarStatsCompra(Champ &c1, Objeto &o1){
            int actVida;
            int actMana;
            int actAP;
            int actAD;
            int actMS;
            int actMR;
            int actAR;
            double actHPR;

            actVida = c1.getVida() + o1.getStatVida();
            actMana = c1.getMana() + o1.getStatMana();
            actAP = c1.getBaseAP() + o1.getStatAP();
            actAD = c1.getBaseAD() + o1.getStatAP();
            actMS = c1.getBaseMS() + o1.getStatMS();
            actMR = c1.getBaseMR() + o1.getStatMR();
            actAR = c1.getBaseAR() + o1.getStatAR();
            actHPR = c1.getBaseHPR() + o1.getStatHPR();

            c1.setVida(actVida);
            c1.setMana(actMana);
            c1.setBaseAP(actAP);
            c1.setBaseAD(actAD);
            c1.setBaseMS(actMS);
            c1.setBaseMR(actMR);
            c1.setBaseAR(actAR);
            c1.setBaseHPR(actHPR);

        };

        /*
        * Actualiza las stats del campeon en caso de vender el objeto
        * 
        *
        * @param Objeto de la clase Objeto y Champ
        * @return
        */
        void actualizarStatsVenta(Champ &c1, Objeto &o1){
            int actvVida;
            int actvMana;
            int actvAP;
            int actvAD;
            int actvMS;
            int actvMR;
            int actvAR;
            double actvHPR;

            actvVida = c1.getVida() - o1.getStatVida();
            actvMana = c1.getMana() - o1.getStatMana();
            actvAP = c1.getBaseAP() - o1.getStatAP();
            actvAD = c1.getBaseAD() - o1.getStatAP();
            actvMS = c1.getBaseMS() - o1.getStatMS();
            actvMR = c1.getBaseMR() - o1.getStatMR();
            actvAR = c1.getBaseAR() - o1.getStatAR();
            actvHPR = c1.getBaseHPR() - o1.getStatHPR();

            c1.setVida(actvVida);
            c1.setMana(actvMana);
            c1.setBaseAP(actvAP);
            c1.setBaseAD(actvAD);
            c1.setBaseMS(actvMS);
            c1.setBaseMR(actvMR);
            c1.setBaseAR(actvAR);
            c1.setBaseHPR(actvHPR);

        };

        /*
        * Imprime las stats del objeto
        * 
        *
        * @param Objeto de la clase Objeto
        * @return
        */
       void imprimirStatsObjeto(Objeto &io){
        cout<< io.getNombre() <<endl;
        cout<< "El precio del objeto: " 
        << io.getPrecio()<< endl;
        cout<< "El precio de venta del objeto es de: " 
        << io.getPrecioVenta()<< endl;
        cout<< "El AP del objeto es de: " 
        << io.getStatAP()<< endl;
        cout<< "El AD del objeto es de: " 
        << io.getStatAD()<< endl;
        cout<< "El movimiento de velocidad que aporta el objeto es de: " 
        << io.getStatMS()<< endl;
        cout<< "La resistencia magica que aporta el objeto es de:  " 
        << io.getStatMR()<< endl;;
        cout<< "La armadura que aporta el objeto es de: " 
        << io.getStatAR()<< endl;
        cout<< "La vida que aporta el objeto es de: " 
        << io.getStatVida()<< endl;
        cout<< "El mana que aporta el objeto es de: " 
        << io.getStatMana()<< endl;
        cout<< "La regeneracion de vida que aporta el objeto es de: " 
        << io.getStatHPR()<< endl;

       };

};

#endif //! OBJETO_H


