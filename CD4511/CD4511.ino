void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char input;
  if(Serial.available() > 0){
  	input = Serial.read();
  	switch(input){  //判断从串口输入的数字
  	  case '0':
      	digital_zero(); //数码管置0
      	break;
      case '1':
        digital_one(); //数码管置1
      	break;
      case '2':
      	digital_two(); //数码管置2
      	break;
      case '3':
      	digital_three(); //数码管置3
      	break;
      case '4':
      	digital_four(); //数码管置4
      	break;
      case '5':
      	digital_five(); //数码管置5
      	break;
      case '6':
      	digital_six(); //数码管置5
      	break;
      case '7':
      	digital_seven(); //数码管置7
      	break;
      case '8':
      	digital_eight(); //数码管置8
     	break;
      case '9':
      	digital_nine(); //数码管置9
      	break;
      default:
      	break;
    }
  }
}

void digital_zero(){
  digitalWrite(2,LOW);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
}

void digital_one(){
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
}

void digital_two(){
  digitalWrite(2,LOW);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
}

void digital_three(){
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
}

void digital_four(){
  digitalWrite(2,LOW);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
}

void digital_five(){
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
}

void digital_six(){
  digitalWrite(2,LOW);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
}

void digital_seven(){
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
}

void digital_eight(){
  digitalWrite(2,LOW);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(5,HIGH);
  delay(100);
}

void digital_nine(){
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(5,HIGH);
  delay(100);
}