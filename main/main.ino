
//INCLUSÃO DE BIBLIOTECAS -------------------------------------------------------------------------------------------------

//#include <Ultrasonic.h>//ultrassonico
//#include <AFMotor.h>//motores

//DECLARAÇÃO DOS SENSORES & CIA -------------------------------------------------------------------------------------------

//SENSOR IR
#define pin_S4 49 //Direita 90
#define pin_S3 51 //Direita
#define pin_S2 47 //Esquerda
#define pin_S1 53 //Esquerda 90
#define pin_S0 52 //Centro


void setup(){
  
//Pinos dos Sensores Segue Linha
  pinMode(pin_S3, INPUT);       
  pinMode(pin_S0, INPUT);      
  pinMode(pin_S2, INPUT);      

//Setup Serial Monitor
  Serial.begin(9600); 

}

//executa os voids e todas as demais programações Segue Linha, Verde, Motor, etc
void loop() {
  
  seguelinha();
     
}
