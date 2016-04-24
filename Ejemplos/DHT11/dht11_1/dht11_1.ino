#include <dht.h>

dht DHT;

#define DHT11_PIN 5

void setup()
{

  Serial.begin(9600);
  Serial.println("SENSOR DE HUMEDAD Y TEMPERATURA DHT ");
  Serial.println();
  Serial.println("Type,\tstatus,\tHumidity (%),\tTemperature (C)");
}

void loop()
{
   // READ DATA
    Serial.print("DHT11, \t");
    int chk = DHT.read11(DHT11_PIN);

    if(chk == DHTLIB_OK)
    {
      Serial.print("OK,\t"); 
      Serial.print(DHT.humidity, 1);
      Serial.print(",\t");
      Serial.println(DHT.temperature, 1);
    }
    else
    {
        Serial.println("ERROR AL LEER LA HUMEDAD"); 
    }

 delay(2000);
}
