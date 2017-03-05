void setup(){
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
}

int delay_time_on = 500;
int delay_time_off = 0;

void loop(){
   digitalWrite(2, HIGH);
   delay(delay_time_on);
   digitalWrite(2, LOW);
   delay(delay_time_off);
   digitalWrite(3, HIGH);
   delay(delay_time_on);
   digitalWrite(3, LOW);
   delay(delay_time_off);
   digitalWrite(4, HIGH);
   delay(delay_time_on);
   digitalWrite(4, LOW);
   delay(delay_time_off);
   digitalWrite(5, HIGH);
   delay(delay_time_on);
   digitalWrite(5, LOW);
   delay(delay_time_off);
   digitalWrite(6, HIGH);
   delay(delay_time_on);
   digitalWrite(, LOW);
   delay(delay_time_off);
  }
