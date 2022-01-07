#define SensorPin A0  // used for Arduino and ESP8266
//#define SensorPin 4  // used for ESP32
//On 3.3V operating voltage : value 2 - 8 (Dry soil)
//On 3.3V operating voltage : value 14 - 21 (Wet)

void setup() { 
  Serial.begin(9600);
}

void loop() {
  float MoistureValue = analogRead(SensorPin);
  Serial.print("Moisture level:");
  Serial.println(MoistureValue);

  if(MoistureValue <= 2 && MoistureValue <= 8){Serial.println("Dry Soil");}
  if(MoistureValue > 8 && MoistureValue < 14){Serial.println("Medium moisture soil");}
  if(MoistureValue >= 14 && MoistureValue <= 21){Serial.println("Wet Soil");}
  
  delay(1000);
} 
