
#define trig 5          //where you connect trig pin
#define echo 6          //where you connect echo pin

int readSRF();
void setup()
{
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    Serial.begin(9600);
}

void loop()
{
    Serial.println(readSRF());
}

int readSRF(){
    digitalWrite(trig_right, 0);
    delayMicroseconds(2);
    digitalWrite(trig_right, 1);
    delayMicroseconds(10);
    digitalWrite(trig_right, 0);
    return pulseIn(echo_right, 1)/58;
}
