

void setup() {
  SerialUSB.begin(9600);
  SerialUSB.println("Starting...");
  
  pinMode(2, OUTPUT); // Step X
  pinMode(3, OUTPUT); // Step Y
  pinMode(4, OUTPUT); // Step Z
  pinMode(5, OUTPUT); // Dir X
  pinMode(6, OUTPUT); // Dir Y
  pinMode(7, OUTPUT); // Dir Z
  pinMode(8, OUTPUT); // Enable


  pinMode(9, INPUT_PULLUP);  // Lim X
  pinMode(10, INPUT_PULLUP);  // Lim Y
  pinMode(12, INPUT_PULLUP);  // Lim Z
  pinMode(A5, INPUT_PULLUP);  // Lim Probe
  
}

void loop() {
  digitalWrite(2, HIGH); 
  digitalWrite(3, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH); 
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH); 
  digitalWrite(8, HIGH); 
  delay(100);            
  digitalWrite(2, LOW);  
  digitalWrite(3, LOW);  
  digitalWrite(4, LOW);  
  digitalWrite(5, LOW);  
  digitalWrite(6, LOW);  
  digitalWrite(7, LOW);  
  digitalWrite(8, LOW);  
  delay(1000);   


  // Reed Switches
  int LimX = digitalRead(9);
  int LimY = digitalRead(10);
  int LimZ = digitalRead(12);
  int Probe = analogRead(A5);
  
  SerialUSB.print("LimX: ");
  SerialUSB.println(LimX);  
  SerialUSB.print("LimY: ");
  SerialUSB.println(LimY);  
  SerialUSB.print("LimZ: ");
  SerialUSB.println(LimZ);  
  SerialUSB.print("Probe: ");
  SerialUSB.println(Probe);  
}
