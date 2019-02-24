//initialisations
int values[10],flagarr[10];
int threshold=100;
int inputpins[10]={A0,A1,A2,A3,A4,A5,A6,A7,A8,A9};
char message[]={'A','B','C','D','E','F','G','H','I','J'};


void setup() {
Serial.begin(9600);
//setup the pinmodes of the analog pins as input
for(int i=0;i<10;i++)
{
  pinMode(inputpins[i],INPUT);
}
}

void loop() {
  //read values from analog pins and make flag array depending on the threshold value;
  for(int i=0;i<10;i++)
  {
    values[i]=analogRead(inputpins[i]);
    if(values[i]>threshold)
    {
      flagarr[i]=1;
    }
    else
    {
      flagarr[i]=0;
    }
  //use lookup table to select the text required and send it for speech conversion 
  }
  for(int i=0;i<10;i++)
  {
    if(flagarr[i]==1)
      {
        texttospeech(message[i]);
        break;
      }
  }
  
delay(1000);
}
