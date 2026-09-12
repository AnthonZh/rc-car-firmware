#include <Arduino.h>

#define MOTOR_ONE_PIN_ONE 19
#define MOTOR_ONE_PIN_TWO 20
#define MOTOR_TWO_PIN_ONE 22
#define MOTOR_TWO_PIN_TWO 24
#define MOTOR_ONE_ENABLE 21
#define MOTOR_TWO_ENABLE 23

void test_motors();

void setup() {
    pinMode(MOTOR_ONE_ENABLE,  OUTPUT);
    pinMode(MOTOR_ONE_PIN_ONE, OUTPUT);
    pinMode(MOTOR_ONE_PIN_TWO, OUTPUT);
    pinMode(MOTOR_TWO_ENABLE,  OUTPUT);
    pinMode(MOTOR_TWO_PIN_ONE, OUTPUT);
    pinMode(MOTOR_TWO_PIN_TWO, OUTPUT);

    digitalWrite(MOTOR_ONE_PIN_ONE, LOW);
    digitalWrite(MOTOR_ONE_PIN_TWO, LOW);
    digitalWrite(MOTOR_ONE_ENABLE, HIGH);
    digitalWrite(MOTOR_TWO_PIN_ONE, LOW);
    digitalWrite(MOTOR_TWO_PIN_TWO, LOW);
    digitalWrite(MOTOR_TWO_ENABLE, HIGH);

    test_motors();
}

void test_motors() {
    digitalWrite(MOTOR_ONE_PIN_ONE, HIGH);
    delay(2000);
    digitalWrite(MOTOR_ONE_PIN_ONE, LOW);

    digitalWrite(MOTOR_ONE_PIN_TWO, HIGH);
    delay(2000);
    digitalWrite(MOTOR_ONE_PIN_TWO, LOW);

    digitalWrite(MOTOR_TWO_PIN_ONE, HIGH);
    delay(2000);
    digitalWrite(MOTOR_TWO_PIN_ONE, LOW);

    digitalWrite(MOTOR_TWO_PIN_TWO, HIGH);
    delay(2000);
    digitalWrite(MOTOR_TWO_PIN_TWO, LOW);
}

void loop() {

}