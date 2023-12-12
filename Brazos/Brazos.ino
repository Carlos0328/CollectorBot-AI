

// Incluímos la librería para poder controlar el servo
#include <Servo.h>


// Declaramos la variable para controlar el servo
Servo servoMotor1;
Servo servoMotor2;
Servo servoMotor3;
Servo servoMotor4;
String mensaje;

// Pin de datos y de reloj para el HX711


void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(115200);

  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor1.attach(10);
  servoMotor2.attach(11);
  servoMotor3.attach(12);
  servoMotor4.attach(13);

  //Posicion por defecto
  servoMotor1.write(0);
  servoMotor2.write(113);
  servoMotor3.write(14);
  servoMotor4.write(27);
  /*
  delay(5000);
    // Inicialización del sensor HX711
  bascula.begin(pinData, pinClk);
  bascula.set_scale(factor_calibracion);
  bascula.tare();

  */
}
/*
//Cerrar Brazos
void cerrarBrazos() {
  servoMotor3.write(30);
  servoMotor4.write(12);
  delay(1000);
}

//Subir Brazos
void subirBrazos() {
  servoMotor1.write(100);
  servoMotor2.write(10);
  delay(1000);
}

//Bajar Brazos
void bajarBrazos() {
  servoMotor1.write(2);
  servoMotor2.write(111);
  delay(1000);
}

//Abrir Brazos
void abrirBrazos() {
  servoMotor3.write(14);
  servoMotor4.write(27);
  delay(1000);
}
*/
void loop() {

  if (Serial.available() > 0) {
    mensaje = Serial.read();
    
    Serial.println(mensaje);

//    String comando = Serial.readStringUntil('\n');

    /*
    if (comando == "cerrar_brazos") {
      cerrarBrazos();
    } else if (comando == "subir_brazos") {
      subirBrazos();
    } else if (comando == "bajar_brazos") {
      bajarBrazos();
    } else if (comando == "abrir_brazos") {
      abrirBrazos();
    }
    */
    if (mensaje == "cerrar_brazos") {
      Serial.println("uno");
      servoMotor3.write(30);
      servoMotor4.write(12);
      
    } if (mensaje == 'subir_brazos') {
      servoMotor1.write(100);
      servoMotor2.write(10);
      
    } if (mensaje == 'bajar_brazos') {
      servoMotor1.write(2);
      servoMotor2.write(111);
      servoMotor3.write(14);
      servoMotor4.write(27);
      
    } if (mensaje == 'abrir_brazos') {
      servoMotor1.write(0);
      servoMotor2.write(113);
      servoMotor3.write(30);
      servoMotor4.write(12);
      
    }
  }
  
}




//----------------------------------------
//       Movimientos predefinidos
//NO MODIFICAR LOS VALORES DE LOS ÁNGULOS
//----------------------------------------






/*
//Cerrar Brazos
  servoMotor3.write(30);
  servoMotor4.write(12);
  delay(1000);

//Subir Brazos
  servoMotor1.write(100);
  servoMotor2.write(10);
  delay(1000);

//Bajar Brazos
  servoMotor1.write(2);
  servoMotor2.write(111);
  servoMotor3.write(14);
  servoMotor4.write(27);
  delay(1000);


  servoMotor1.write(0);
  servoMotor2.write(113);
  servoMotor3.write(30);
  servoMotor4.write(12);
  delay(1000);
*/
