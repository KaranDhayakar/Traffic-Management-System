const int ir1N = 22; //ir sensor to detect the north going vehicle
const int ir2N = 23; //ir sensor to detect the north going vehicle
const int ir3N = 24; //ir sensor to detect the north going vehicle
const int ir4W = 25; //ir sensor to detect the west going vehicle
const int ir5W = 26; //ir sensor to detect the west going vehicle
const int ir6W = 27; //ir sensor to detect the west going vehicle
const int ir7S = 28; //ir sensor to detect the south going vehicle
const int ir8S = 29; //ir sensor to detect the south going vehicle
const int ir9S = 30; //ir sensor to detect the south going vehicle
const int ir10E = 31; //ir sensor to detect the east going vehicle
const int ir11E = 32; //ir sensor to detect the east going vehicle
const int ir12E = 33; //ir sensor to detect the east going vehicle
const int rled1N = 34; //stop led at north
const int rled1S = 35; //stop led at south
const int rled1E = 36; //stop led at east
const int rled1W = 37; //stop led at west
const int aled2N = 38; //slow led at north
const int aled2S = 39; //slow led at north
const int aled2E = 40; //slow led at north
const int aled2W = 41; //slow led at north
const int gled3N = 42; //go led at north
const int gled3S = 43; //go led at south
const int gled3E = 44; //go led at east
const int gled3W = 45; //go led at west
int tim = 0;
int in = 0;
void setup()
{
  // put your setup code here, to run once:
  pinMode(ir1N, INPUT); //ir sensor pins of the arduino set as input ports to detect the vehicle
  pinMode(ir2N, INPUT);
  pinMode(ir3N, INPUT);
  pinMode(ir4W, INPUT);
  pinMode(ir5W, INPUT);
  pinMode(ir6W, INPUT);
  pinMode(ir7S, INPUT);
  pinMode(ir8S, INPUT);
  pinMode(ir9S, INPUT);
  pinMode(ir10E, INPUT);
  pinMode(ir11E, INPUT);
  pinMode(ir12E, INPUT);
  pinMode(rled1N, OUTPUT); //led pins of the arduino are set as output ports to control the flow of traffic
  pinMode(rled1S, OUTPUT);
  pinMode(rled1E, OUTPUT);
  pinMode(rled1W, OUTPUT);
  pinMode(aled2N, OUTPUT);
  pinMode(aled2S, OUTPUT);
  pinMode(aled2E, OUTPUT);
  pinMode(aled2W, OUTPUT);
  pinMode(gled3N, OUTPUT);
  pinMode(gled3S, OUTPUT);
  pinMode(gled3E, OUTPUT);
  pinMode(gled3W, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  void trafstaN(); //to find the desity of the traffic and decide the delay time to glow the green light at north
  tim = 0;
  void trafstaE(); //to find the desity of the traffic and decide the delay time to glow the green light at east
  tim = 0;
  void trafstaS(); //to find the desity of the traffic and decide the delay time to glow the green light at south
  tim = 0;
  void trafstaW(); //to find the desity of the traffic and decide the delay time to glow the green light at west
}
void trafstaN()
{
  digitalWrite(rled1N, 1);
  digitalWrite(rled1S, 1);
  digitalWrite(rled1E, 1);
  digitalWrite(rled1W, 1);
  delay(1000);
  digitalWrite(rled1N, 0);
  digitalWrite(aled2N, 1);
  delay(3000);
  void densdelN();
  digitalWrite(aled2N, 0);
  digitalWrite(gled3N, 1);
  delay(tim);
  digitalWrite(gled3N, 0);
  digitalWrite(rled1N, 1);
}
void trafstaE()
{
  digitalWrite(rled1N, 1);
  digitalWrite(rled1S, 1);
  digitalWrite(rled1E, 1);
  digitalWrite(rled1W, 1);
  delay(1000);
  digitalWrite(rled1E, 0);
  digitalWrite(aled2E, 1);
  delay(3000);
  void densdelE();
  digitalWrite(aled2E, 0);
  digitalWrite(gled3E, 1);
  delay(tim);
  digitalWrite(gled3E, 0);
  digitalWrite(rled1E, 1);
}
void trafstaS()
{
  digitalWrite(rled1N, 1);
  digitalWrite(rled1S, 1);
  digitalWrite(rled1E, 1);
  digitalWrite(rled1W, 1);
  delay(1000);
  digitalWrite(rled1S, 0);
  digitalWrite(aled2S, 1);
  delay(3000);
  void densdelS();
  digitalWrite(aled2S, 0);
  digitalWrite(gled3S, 1);
  delay(tim);
  digitalWrite(gled3S, 0);
  digitalWrite(rled1S, 1);
}
void trafstaW()
{
  digitalWrite(rled1N, 1);
  digitalWrite(rled1S, 1);
  digitalWrite(rled1E, 1);
  digitalWrite(rled1W, 1);
  delay(1000);
  digitalWrite(rled1W, 0);
  digitalWrite(aled2W, 1);
  delay(3000);
  void densdelW();
  digitalWrite(aled2W, 0);
  digitalWrite(gled3W, 1);
  delay(tim);
  digitalWrite(gled3W, 0);
  digitalWrite(rled1W, 1);
}
void densdelN()
{
  in = ((digitalRead(ir3N) * 4) + (digitalRead(ir2N) * 2) + (digitalRead(ir1N) * 1));
  if (in == 3)
    tim = 5000;
  else if (in == 1)
    tim = 10000;
  else if (in == 0)
    tim = 15000;
  else
    tim = 0;
}
void densdelW()
{
  in = ((digitalRead(ir6W) * 4) + (digitalRead(ir5W) * 2) + (digitalRead(ir4W) * 1));
  if (in == 3)
    tim = 5000;
  else if (in == 1)
    tim = 10000;
  else if (in == 0)
    tim = 15000;
  else
    tim = 0;
}
void densdelS()
{
  in = ((digitalRead(ir9S) * 4) + (digitalRead(ir8S) * 2) + (digitalRead(ir7S) * 1));
  if (in == 3)
    tim = 5000;
  else if (in == 1)
    tim = 10000;
  else if (in == 0)
    tim = 15000;
  else
    tim = 0;
}
void densdelE()
{
  in = ((digitalRead(ir10E) * 4) + (digitalRead(ir11E) * 2) + (digitalRead(ir12E) * 1));
  if (in == 3)
    tim = 5000;
  else if (in == 1)
    tim = 10000;
  else if (in == 0)
    tim = 15000;
  else
    tim = 0;
}
