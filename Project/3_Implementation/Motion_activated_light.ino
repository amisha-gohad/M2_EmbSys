#define trigPin 10
#define echoPin 9
#define relay 4

int counter;
float duration;
float distance;
unsigned long time;

void setup() 
{
  Serial.begin ( 9600);
  pinMode( trigPin, OUTPUT );
  pinMode( echoPin, INPUT );
  pinMode(relay, OUTPUT);
}

void loop() 
{
  digitalWrite( trigPin, LOW ); 
  delayMicroseconds( 2 );
 
  digitalWrite( trigPin, HIGH );
  delayMicroseconds( 10 );
  digitalWrite( trigPin, LOW );
  
  duration = pulseIn( echoPin, HIGH ); 

  distance = ( duration/2 ) * 0.0344;
  



  if     ( distance > 400 ||  distance < 2 )
	 {
		
 		digitalWrite(relay, LOW);
  Serial.println( " Light is off" );
	}

  else                     
	{  
 		digitalWrite(relay, HIGH);
 		Serial.println( " Light is on" );

	}

  delay( 1000 );

}
