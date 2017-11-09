#include <iBUStelemetry.h>

iBUStelemetry telemetry(4);

byte i;

void setup(){
  telemetry.begin(115200);
  telemetry.addSensor(2);
}

void loop(){
  telemetry.setSensorMeasurement(1, i++);
  delay(1000);
}
