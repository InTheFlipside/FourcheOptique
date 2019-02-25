const int fourchePin = 13;
const int ledPin =  9;
int cmpfourche;
int EtatFourche =0 ;

// Initialisation
void setup() {
  Serial.begin(9600);   //connection au port série
  pinMode(ledPin, OUTPUT);     //LED en sortie
  pinMode(fourchePin, INPUT);  //en entrée
  Serial.println("Fourche optique - detection de presence");
}

//=== Boucle de mesures
void loop() {
  //Vérifie si un objet obture la fourche optique
  Serial.print("EF:");
  EtatFourche = digitalRead(fourchePin);

Serial.print (EtatFourche);

if(EtatFourche == 1) { cmpfourche = cmpfourche+1;    }
Serial.print("                                                CMP");
Serial.println(cmpfourche);


if( cmpfourche > 19) {Serial.println("ACHEYTE DES VBUCKS SUJR FORNITE POOUR ETRE UN POGM"); cmpfourche = 0;}



delay(200);
}
