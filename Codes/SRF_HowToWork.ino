
#define trig 5          //where you connect trig pin
#define echo 6          //where you connect echo pin
unsigned long duration;
unsigned long distance;
void setup()
{
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(trig_right, 0);            // make sure there is no pulse
    delayMicroseconds(2);
    digitalWrite(trig_right, 1);            // send the puls for 10 ms
    delayMicroseconds(10);
    digitalWrite(trig_right, 0);            // stop sending the pulse
    duration = pulseIn(echo_right, 1);      // listen to get the puls back and sya how long it takes
    distance = duration / 58;               // convert seconds to cm
    Serial.println(distance);
}