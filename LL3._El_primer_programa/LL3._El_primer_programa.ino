/*************************************************************************************************
**                                                                                              **
**                              Descripció del programa                                         **
**                                                                                              **
*************************************************************************************************/

//******  Includes  ******************************************************************************


//******  Variables   ****************************************************************************


//******  Setup  *********************************************************************************


void setup() {
  // inicialitza el programa indicant que el pin 13 es una sortida.
  pinMode(13, OUTPUT);
}

// comença amb la sortida en 1 durant un segon, després la para durant 1 segon i torna a fer el mateix procés indefinidament
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
