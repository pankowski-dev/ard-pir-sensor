int sensor = 8;   //Steckerpin nummer für sensorsignal
int speed = 9600; //UART Geschwindigkeit
 
void setup(){
  Serial.begin(speed);      //Initialisierung für UART Kommunikation
  pinMode(sensor, INPUT);   //Signal Pin onfiguration
  
  Serial.println("---- Bewegungssensortest ----"); 
}
 
void loop(){
  int signal = digitalRead(sensor);      //Lesesignal
  if(signal == HIGH)                     //hoches Signal = Bewegung erkannt   
  {                                    
    Serial.println("!-!-!-Bewegung-!-!-!");
  }
  else  {Serial.println("---keine Bewegung---");}
  
  delay(700);                         //Zeitverzögerung für die Signalauslesung
}