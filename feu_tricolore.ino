//Déclaration des constantes
const int ledRouge = 13; //Définir la constante LedRouge pour désigner le pin 13
const int ledJaune = 12; //Définir la constante LedJaune pour désigner le pin 12
const int ledVert = 11;  //Définir la constante LedVert pour désigner le pin 11

void setup() {
  // Initialisation des 3 pins utilisés 13,12 et 11
  pinMode(ledRouge, OUTPUT);
  pinMode(ledJaune, OUTPUT);
  pinMode(ledVert, OUTPUT);
}

void loop() {
  digitalWrite(ledVert, HIGH);  // Allumer la LED Verte
  delay(3000);                 // Attendre 3 seconde
  digitalWrite(ledVert, LOW);   // Éteindre la LED Verte
  digitalWrite(ledJaune, HIGH);  // Allumer la LED Jaune
  delay(500);                 // Attendre 0.5 seconde
  digitalWrite(ledJaune, LOW);   // Éteindre la LED Jaune
  digitalWrite(ledRouge, HIGH);  // Allumer la LED Rouge
  delay(1000);                 // Attendre 1 seconde
  digitalWrite(ledRouge, LOW);   // Éteindre la LED Rouge
  delay(100);                // Attendre 0.1 seconde
}
