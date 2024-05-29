#include <DHT.h>

DHT dht(5, DHT11); 
float temperature,humidity;  


void setup() {

  dht.begin();
  Serial.begin(9600);
}


 
void loop() {  
humidity = dht.readHumidity(); // Read the humidity value  
temperature =dht.readTemperature(); // Read the temperature value  
Serial.print("Humidity: ");     
Serial.print(humidity);     
    
Serial.print("  Temperature ");    
 Serial.println(temperature);   
delay(2000); }
