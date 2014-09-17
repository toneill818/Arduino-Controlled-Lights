const int CHANNEL1 = 2;
const int CHANNEL2 = 3;
const int CHANNEL3 = 4;
const int CHANNEL4 = 5;
const int CHANNEL5 = 6;
const int CHANNEL6 = 7;
const int CHANNEL7 = 8;
const int CHANNEL8 = 9;

int vixenInput[8];

void setup(){
  Serial.begin(9600); 
  pinMode(CHANNEL1, OUTPUT);
  pinMode(CHANNEL2, OUTPUT);
  pinMode(CHANNEL3, OUTPUT);
  pinMode(CHANNEL4, OUTPUT);
  pinMode(CHANNEL5, OUTPUT);
  pinMode(CHANNEL6, OUTPUT);
  pinMode(CHANNEL7, OUTPUT);
  pinMode(CHANNEL8, OUTPUT);
}

void loop() {
  if (Serial.available() >= 8){
    for(int i = 0; i < 15; i++){
       vixenInput[i] = Serial.read(); 
    }
    
    digitalWrite(CHANNEL1, vixenInput[0]);
    digitalWrite(CHANNEL2, vixenInput[1]);
    digitalWrite(CHANNEL3, vixenInput[2]);
    digitalWrite(CHANNEL4, vixenInput[3]);
    digitalWrite(CHANNEL5, vixenInput[4]);
    digitalWrite(CHANNEL6, vixenInput[5]);
    digitalWrite(CHANNEL7, vixenInput[6]);
    digitalWrite(CHANNEL8, vixenInput[7]);
  }
}
