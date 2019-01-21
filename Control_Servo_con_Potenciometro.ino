/*************************************************Capitulo 6 - Servomotores********************************************************
*                                                                                                                                 *
*     En este sexto capitulo aprenderemos a utilizar los servomotores. Para utilizar un servomotor necesitamos conectarlo         *                                                                      *
*  a uno de los pines PWM debido a su funcionamiento ya que con un pin digital que nos distribuye un voltaje continuo de 5V.      *
*  Tambien es importante saber que los servomotores solo pueden ser utilizados como maximo 2 con el voltaje de arduino, si se     *
*  necesitan usar mas de 2 es necesario una fuente externa y unificar las tierras (GND) entre el arduino y la fuente.             *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 Servomotor.                                                                                                                 *
*  -1 Potenciometro                                                                                                               *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/ 

#include <Servo.h> //Importamos la libreria de Servo

Servo servo1; //Declaramos nuestro objeto servo

int pinServo = 6; //Declaramos la variable que usaremos para el pin 6
int potenciometro = 0; //Declaramos la variable que usaremos para la entrada analoga
int valor;  //Valor que almacenara la lectura analoga 
int angulo; //Valor que almacenara el angulo 

void setup(){
  servo1.attach(6); // Declaramos el pin 6 como salida al servo
  }
  void loop(){
valor = analogRead(potenciometro); //Leemos la lectura del potenciometro y la almacenamos en valor
angulo = map(valor, 0, 1023, 0, 180); //Almacenamos el valor del angulo
//la funcion map hace una equivalencia con los dos rangos ingresados.
servo1.write(angulo); //Posicionamos el servo segun el valor resultante de la variable angulo
delay(15);
    }
