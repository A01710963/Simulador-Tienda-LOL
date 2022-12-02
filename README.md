# Simulador-Tienda-LOL
Este programa es una simulacion de la tienda de el juego "League of legends", en la cual podras comprar y vender diferentes tipos de objetos, con el fin de hacer mas amigable el funcionamiento de la tienda a los nuevos usuarios del juego

#Contexto

Un nuevo jugador de League of legends se encuentra abrumado por el funcionamiento de la tienda, por lo que decide desarrollar un simulador de la tienda para comprender de mejor forma el funcionamiento de este. Los objetos estan divididos en 3 tipos: Pasiva activa, pasiva comun y consumibles. Los 3 objetos se pueden comprar y vender, los objetos de tipo pasiva activa pueden activar su pasiva y los consumibles se pueden consumir, los objetos de tipo pasiva comun no pueden realizar funciones mas que comprar y vender

#Funcionalidad

El programa permite al usuario elegir por medio de un menu que es lo que desea hacer
El programa solo permite crear objetos y campeones
El programa solo permite vender, comprar y enseñar las estadisticas de los objetos declarados
El programa no acepta espacios, por lo que si se desea poner un espacio en el nombre de un objeto o campeon se recomienda usar una barra baja "_"

#Consideraciones

El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos
Compilar con: "g++activa.h pasiva.h consumible.h Objeto.h champ.h main.cpp"
Correr en linux: "/a.out"
Correr en windows: "a.exe"

#Correciones

Para este programa se relizaron las siguientes correcciones:

1.- Se modifico el UML

2.-Se modifico el ciclo while para que el main funcionara de forma correcta
