/*
 * Proyecto tienda LOL
 * Claudio Gabriel Lopez Bricenio
 * A01710963
 * 2/12/2022
 */

#ifndef CHAMP_H
#define CHAMP_H


#include <iostream>
#include <string>
#include <vector>

#include "Objeto.h"

using namespace std;

//Clase champ
class Champ{

    //Atributos
    private:
        string nombreChamp;
        int oro;
        int vida;
        int mana;
        int baseAD;
        int baseAP;
        int baseMS;
        int baseMR;
        int baseAR;
        double baseHPR;

    //Metodos
    public:

        /*
         * Constructor Champ que recibe nombreChamp, oro, vida, mana, base AD,
         * base AP, base MS, base MR, base AR, base HPR
         * 
         *
         * @param string nomc, int oroc, int vidc, int manc, int ad, int ap,
         *        int ms, int mr, int ar, double hpr
         *        
         * @return Objeto Champ
         */
        Champ(string nomc, int oroc, int vidc, int manc, int ad, int ap, int ms, int mr, int ar, double hpr){
            nombreChamp = nomc;
            oro = oroc;
            vida = vidc;
            mana = manc;
            baseAD = ad;
            baseAP = ap;
            baseMS = ms;
            baseMR = mr;
            baseAR = ar;
            baseHPR = hpr;
    }

        /*Setters de nombreChamp, oro, vida, mana, baseAD,
         * baseAP, baseMS, baseMR, baseAR, baseHPR
         */

        /*
        * setter nombreChamp
        *
        * @param string nc: nombre del campeon
        * @return
        */

        void setNombreChamp(string nc){
            nombreChamp = nc;
        }

        /*
        * setter oro
        *
        * @param int o: oro del campeon
        * @return
        */

        void setOro(int o){
            oro = o;
        }

        /*
        * setter vida
        *
        * @param int vc: vida del campeon
        * @return
        */

        void setVida(int vc){
            vida = vc;
        }

        /*
        * setter mana
        *
        * @param int m: mana del campeon
        * @return
        */

        void setMana(int m){
            mana = m;
        }

        /*
        * setter baseAD
        *
        * @param int bad: stat base AD
        * @return
        */

        void setBaseAD(int bad){
            baseAD = bad;
        }

        /*
        * setter baseAP
        *
        * @param int bap: stat base AP
        * @return
        */

        void setBaseAP(int bap){
            baseAP = bap;
        }

        /*
        * setter baseMS
        *
        * @param int bms: stat base MS
        * @return
        */

        void setBaseMS(int bms){
            baseMS = bms;
        }

        /*
        * setter baseMR
        *
        * @param int bmr: stat base MR
        * @return
        */

        void setBaseMR(int bmr){
            baseMR = bmr;
        }

        /*
        * setter baseAR
        *
        * @param int bar: stat base AR
        * @return
        */

        void setBaseAR(int bar){
            baseAR = bar;
        }

        /*
        * setter baseHPR
        *
        * @param double bhpr: stat base HPR
        * @return
        */

        void setBaseHPR(double bhpr){
            baseHPR = bhpr;
        }

        /*Getters de nombreChamp, oro, vida, mana, baseAD,
         * baseAP, baseMS, baseMR, baseAR, baseHPR
         */

        /*
        * getter nombreChamp
        *
        * @param
        * @return string con el nombre del champ
        */

        string getNombreChamp(){
            return nombreChamp;
        }

        /*
        * getter oro
        *
        * @param
        * @return int con el oro del campeon
        */

        int getOro(){
            return oro;
        }

        /*
        * getter vida
        *
        * @param
        * @return int con la vida del campeon
        */

        int getVida(){
            return vida;
        }

        /*
        * getter mana
        *
        * @param
        * @return int con el mana del campeon
        */

        int getMana(){
            return mana;
        }

        /*
        * getter baseAP
        *
        * @param
        * @return int con el stat base AP del campeon
        */

        int getBaseAP(){
            return baseAP;
        }

        /*
        * getter baseAD
        *
        * @param
        * @return int con el stat base AD del campeon
        */

        int getBaseAD(){
            return baseAD;
        }

        /*
        * getter baseMS
        *
        * @param
        * @return int con el stat base MS del campeon
        */

        int getBaseMS(){
            return baseMS;
        }

        /*
        * getter baseMR
        *
        * @param
        * @return int con el stat base MR del campeon
        */

        int getBaseMR(){
            return baseMR;
        }

        /*
        * getter baseAR
        *
        * @param
        * @return int con el stat base AR del campeon
        */

        int getBaseAR(){
            return baseAR;
        }

        /*
        * getter baseHPR
        *
        * @param
        * @return double con el stat base HPR del campeon
        */

        double getBaseHPR(){
            return baseHPR;
        }

        //Metodos de la clase Champ

        /*
        * Imprime las stats del campeon
        * 
        *
        * @param Objeto de la clase Champ
        * @return
        */
        void imprimirStats(Champ &a){
            cout << a.getNombreChamp() << endl;
            cout << "Oro: " << a.getOro() << endl;
            cout << "Vida: " << a.getVida() << endl;
            cout << "Mana: " << a.getMana() << endl;
            cout << "AP: " << a.getBaseAP() << endl;
            cout << "AD: " << a.getBaseAD() << endl;
            cout << "Velocidad de movimiento: " << a.getBaseMS() << endl;
            cout << "Resistencia magica: " << a.getBaseMR() << endl;
            cout << "Armadura: " << a.getBaseAR() << endl;
            cout << "Regeneracion de vida: " << a.getBaseHPR() << endl;

        }

        /*
        * Le pide valores al usuario para crear un objeto de la clase champ
        * (El usuario ingresa los datos)
        *
        * @param Objeto de la clase Champ
        * @return
        */

        void pedirValores(Champ &c1){
            string nm;
            cout<<"Ingresa el nombre del campeon: "; cin>> nm;
            c1.setNombreChamp(nm);

            int o;
            cout<<"Ingresa el oro del campeon: "; cin>> o;
            c1.setOro(o);

            int vc;
            cout<<"Ingresa la vida del campeon "; cin>> vc;
            c1.setVida(vc);

            int m;
            cout<<"Ingresa el mana del campeon "; cin>> m;
            c1.setMana(m);

            int bad;
            cout<<"Ingresa el AD del campeon: "; cin>> bad;
            c1.setBaseAD(bad);

            int bap;
            cout<<"Ingresa el AP del campeon: "; cin>> bap;
            c1.setBaseAP(bap);

            int bms;
            cout<<"Ingresa la velocidad de movimiento del campeon: "; cin>> bms;
            c1.setBaseMS(bms);

            int bmr;
            cout<<"Ingresa la resistencia magica del campeon: "; cin>> bmr;
            c1.setBaseMR(bmr);

            int ar;
            cout<<"Ingresa la armadura del campeon: "; cin>> ar;
            c1.setBaseAR(ar);

            double hpr;
            cout<<"Ingresa la regeneracion de vida del campeon: "; cin>> hpr;
            c1.setBaseHPR(hpr);
        };     

};

#endif //! CHAMP_H