//Latihan  Traffic Lights
int LampuHijau1 = 2;
int LampuKuning1 = 3;
int LampuMerah1 = 4;
int LampuHijau2 = 5;
int LampuKuning2 = 6;
int LampuMerah2 = 7;

void setup() {
  pinMode(LampuHijau1,OUTPUT);
  pinMode(LampuKuning1,OUTPUT);
  pinMode(LampuMerah1,OUTPUT);
  pinMode(LampuHijau2,OUTPUT);
  pinMode(LampuKuning2,OUTPUT);
  pinMode(LampuMerah2,OUTPUT);

}

void loop() {
  digitalWrite(LampuHijau1, 1);
  digitalWrite(LampuKuning1, 0);
  digitalWrite(LampuMerah1, 0);
  digitalWrite(LampuHijau2, 0);
  digitalWrite(LampuKuning2, 0);
  digitalWrite(LampuMerah2, 1);
  delay(1000);

  digitalWrite(LampuHijau1, 0);
  digitalWrite(LampuKuning1, 1);
  digitalWrite(LampuMerah1, 0);
  digitalWrite(LampuHijau2, 0);
  digitalWrite(LampuKuning2, 0);
  digitalWrite(LampuMerah2, 1);
  delay(300); 

  digitalWrite(LampuHijau1, 0);
  digitalWrite(LampuKuning1, 0);
  digitalWrite(LampuMerah1, 1);
  digitalWrite(LampuHijau2, 1);
  digitalWrite(LampuKuning2, 0);
  digitalWrite(LampuMerah2, 0);
  delay(1000);

    digitalWrite(LampuHijau1, 0);
  digitalWrite(LampuKuning1, 0);
  digitalWrite(LampuMerah1, 1);
  digitalWrite(LampuHijau2, 0);
  digitalWrite(LampuKuning2, 1);
  digitalWrite(LampuMerah2, 0);
  delay(300);

}
