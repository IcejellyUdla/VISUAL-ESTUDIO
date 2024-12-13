//Juego de Azar (Adivinar Numero) (Variante de tres intentos unicos) Sebastian Yaguana
#include <stdio.h> //Para printf y scanf
#include <time.h> //Para time().
#include <stdlib.h> //Para srand() y rand().
int Numero, NumeroAdivinar, Contador=0; //Declaracion de Variables
srand(time(NULL));
Numero=rand()%100; //Generacion de numero aleatorio.
printf("Juguemos :).\n");
while(Contador<3) { //Creacion de Bucle de 3 intentos unicos.
int main() {
}
}
}
printf("Adivina el numero del 0 al 99 en el que estoy pensando: ");
scanf("%d", &NumeroAdivinar);
if (NumeroAdivinar<0||NumeroAdivinar>99){ //Validacion de variables dentro del rango correcto (0 a 99).
do{ //Bucle que Valida las Variables hasta ser correctas.
printf("Recuerda que estamos jugando con numeros del 0 al 99.\nIngresa de nuevo el numero: ");
scanf("%d", &NumeroAdivinar);
} while (NumeroAdivinar<0||NumeroAdivinar>99);
if(NumeroAdivinar<Numero) { //Pista de numero en caso de ser mayor.
printf("Creo haber escuchado por ahí que el numero es mayor al que acabas de poner.\n");
}else if (NumeroAdivinar>Numero){ //Pista de numero en caso de ser menor.
printf("Creo haber escuchado por ahí que el numero es menor al que acabas de poner.\n");
}else{ //Respuesta en caso de acierto.
printf("Lo lograste\nAl fin...\nAdivinaste el numero %d en %d intento(s).\n", Numero, Contador + 1);
Contador-Contador+1; //Suma a contador para sumar intentos.
if (NumeroAdivinar!=Numero){ //Respuesta en caso de falta de intentos (FINAL).
printf("Se acabaron los intentos: (.\nEl numero era %d\n", Numero);
printf("Gracias por jugar. Nos vemos en la proxima :)\n"); //Mensaje de despedida.
return 0;