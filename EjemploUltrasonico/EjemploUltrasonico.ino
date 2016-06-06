#include "Ultrasonico_Borra.h"
Ultrasonico UltrasonicoA;  //Crea un ultrasonico llamado UltrasonicoA

int distancia;  //Crea una variable para guardar la distancia

void setup() {
  UltrasonicoA.attach(1,2); //Define los pines del ultrasonico
                            //Echo,Trigger
  Serial.begin(9600);  //inicializa la comunicacion Serial 
}

void loop() {
  distancia = UltrasonicoA.GetDis();  //Guarda en distancia la distancia del ultrasonico
  Serial.print("Distancia = ");      //Imprime
  Serial.println(distancia);          //El valor de la distancia
  delay(50);
}
