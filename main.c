#include <stdio.h>                                                                                                          //libary für Standard Studio
#include <stdbool.h>                                                                                                        //Libary für Boolean Studio
#include <string.h>                                                                                                         //Libary für string comannds
#include <math.h>                                                                                                           //Libary für Mathe Funktionen
#include <ctype.h>                                                                                                          //Libary für String types
// https://www.youtube.com/watch?v=87SH2Cn0s9A&t=1569s


void shakira_shakira();                                                                                                     //Funktionen Prototypes sind kurz Form um alles übersichtlicher zu machen
                                                                                                                            //Kann unter Main gepackt werden
void geburtstag(char[], int);

double hoch_age(double);

int findmax(int, int);

// void funktionstest(char rankup, char rankstore[1000]);

int main(){

    printf(" Hallo\t\'Alexis\' :) \n ");
    printf("Neue\t Zeile\t bitte!");
    printf("\n 1\t 2\t 3\n 4\t 5\t 6\n 7\t 8\t 9\n \t 0\n");
                                                                                                                            /* \n = escape sequence neue Zeile
                                                                                                                             * \t = escape sequence tab
                                                                                                                             * \ geht auch mit " ' " kann auch für double quote's verwenden zb. printf("\"hallo"\ Welt")
                                                                                                                             */

    int x;                                                                                                                  // declaration
    x = 123;                                                                                                                // initialization
    int y = 231;                                                                                                            // declaration + initialization
                                                                                                                            // "const" um floats und int als nicht änderbar zu markieren (zb. const float pi = 3.14159265359;)
    int age = 25;                                                                                                           // integer                                              %d  (dezimal)
    float psize = 2.05;                                                                                                     // float                                                %f  (float)
    char TrackerGrade = 'S';                                                                                                // Single Charackter                                    %c (charackter)
    char name[] = "Jack";                                                                                                   // Array of Charackters (kommt noch später mehr dazu)   %s (string)
    char cora[] = "Coras Penis ist gigantisch";
    const double pi = 3.14159265359;                                                                                        // Double ist für float mit mehr als 8 Nachkommastellen %lf (longfloat)+
    bool toilette = false;                                                                                                  // Boolean, brauch ich nichts zu schreiben              %d
    char at = 64;                                                                                                           // Char kann nummern mit Ascii umwandeln
    unsigned char test = 255;                                                                                               // 1bytes (0 bis 255)                                   %d oder %c
    short int test1 = -32767;                                                                                               // 2bytes (-32,768 bis +32,768)
    unsigned short int test2 = 65000;                                                                                       // 2bytes (0 bis +65,535)
    int langez = 2000000;                                                                                                   // 4bytes (-2,147,483,648 bis +2,147,483,648)           %d
    unsigned int langez1 = 4000000;                                                                                         // 4bytes (0 bis 4,294,967,295)                         %u
    long long int megalang = 9000000000;                                                                                    // 8bytes (-9 bis +9 Quintillionen)                     %lld
    unsigned long long int megalang1 = 908987987897;                                                                        // 8bytes (+18 Quintillionen)                           %llu
    double radius1;
    double umfang1;
    double Flaesche1;
    double SeiteA1;
    double SeiteB1;
    double SeiteC1;
    bool Sonne = true;
    int max = findmax(3, 4);

    // String funktions zum testen einfach kommentar slashes entefernen :)
    //strlwr(name);                                                                                                         //setzt alles auf klein buchstaben inerhalb des strings
    //strupr(name);                                                                                                         //setzt alles auf groß buchstaben inerhalb des strings
    //strcat(name, cora);                                                                                                   //fügt den letzten string auf zum ersten hinzu
    //strncat(name, cora, 4);                                                                                               //fügt den letzten string dem ersten hinzu aber nur die vorgebene länge
    //strncpy(name, cora);                                                                                                  //wird benutzt um string "cora" auf string "name" zu kopieren
    strncpy(name, cora, 1);                                                                                               //Kopiert nur die angebenen buchstaben von String "cora" auf "name
    //strset(name, '!');                                                                                                    //ersetzt die buchstaben mit dem Charakter den du vorgebene hast
    //strnset(name, 'x', 1);                                                                                                //Ersetzt den char den du numerisch auswählst mit dem Buchstaben oder char den du auswählst
    //strrev(name);                                                                                                         //dreht den string um


    printf("%s", name);

    printf("\nMax zwischen 3 und 4 ist: %d\n", max);
    printf("Cora, ich bin %d Jahre alt\n",age);
    printf("Meine name ist %s \n",name);
    printf("Mein Tracker Performance war gerade bei %c\n",TrackerGrade);
    printf("Mein Penis ist ganze %f cm Groß\n",psize);
    printf("%s meiner aber nicht\n",cora);
    printf("die Kreizahl pi ist %lf\n",pi);
    printf("Bei ja = 1 bei nein = 0 Muss ich Kacken?%d\n",toilette);
    printf("jsaering%cgmail.com\n",at);
    printf("%d",test);
    printf("%d",test1);
    printf("%d",test2);
    printf("%d\n",langez);
    printf("%u\n",langez1);
    printf("%lld\n",megalang);
    printf("%llu\n",megalang1);

    float item1 = 10.70;
    float item2 = 20.15;
    float item3 = 299.99;
    float summe = y % x;                                                                                                    // +/- (* /) Mathe operationen (%) modulus gibt dir den wert der übrig ist (++ increments -- decrements)

    printf("Item 1: $%.2f\n", item1);                                                                                // %.2 um die nach kommastellen festzulegen
    printf("Item 2: $%-8f\n", item2);                                                                                // %- Nach links alignen (wenn die Zahl zu lange ist)
    printf("Item 3: $%1f\n", item3);                                                                                 // %1 Die width nach vorne
    printf("%.1f\n", summe);

    int x1 = 5;                                                                                                             // Variablen rechnung kann gekürzt werden mit x+= 5                      //x1 = x1 *2;
    x1*=5;                                                                                                                  // beispiel für ungekürzte variable x1 = x1 *2;

    printf("%d\n", x1);

    // USER INPUT
    char name_input[25];
    int age_input;
    char boobies;
    char operandie;
    double num1;
    double num2;
    double summe2;
    char einheit;
    float temp;
    char shakira;
    char rankup;
    char rankstore[1000];                                                                                                   //NF


    printf("\nspielst du valo?");
    scanf("%c", &rankup);


    printf("\nIst die Temperatur in F (fahrenheit) oder C (Celsius)?");                                              // Temperatur umwandeln - Print und scanf und Mathe Operationen können innerhalb eines "if statements" geschehen
    scanf("%c", &einheit);

    einheit = toupper(einheit);

    if(einheit == 'C'){
        printf("\nWie viel grad Celsius?");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nDas wäre dann %.1f Fahrenheit!", temp);
    }
    else if(einheit == 'F'){
        printf("\nWie viel Grad Fahrenheit?");
        scanf("%f", &temp);
        temp = ((temp - 32) *5) / 9;
        printf("\nDas wäre dann %.1f Celsius!", temp);
    }
    else{
        printf("Keine Einheit gefunden.");
    }

    fflush(stdin);

                                                                                                                            //Taschenrechner überspringen :)
    printf("\nGib mir ein Operandie ( - + / *)");                                                                    // So programmiert man ein Taschenrechner :P
    scanf("%c", &operandie);

    printf("\nGib mir die Erste Zahl");
    scanf("%lf", &num1);

    printf("\nGib mir die zweite Zahl");
    scanf("%lf", &num2);

    switch (operandie){
        case '+':
            summe2 = num1 + num2;
            printf("\nSumme= %.2lf", summe2);
            break;
        case '-':
            summe2 = num1 - num2;
            printf("\nSumme= %.2lf", summe2);
            break;
        case '/':
            summe2 = num1 / num2;
            printf("\nSumme= %.2lf", summe2);
            break;
        case '*':
            summe2 = num1 * num2;
            printf("\nSumme= %.2lf", summe2);
            break;
        default:
            printf("%c is not valid", operandie);
    }


    fflush(stdin);

    printf("\nWie ist dein name?:");
    fgets(name_input, 25, stdin);                                                                         //fgets berücksichtig auch leerzeichen sscanf auch

    printf("Hallo User, wie alt bist?:");
    scanf("%d", &age_input);                                                                                          //scanf für user input &=speichermedium für ausgabe oder weiterverarbeitung
    if(age_input >= 18){
        printf("https://www.amazon.de/Heiliges-Heilwasser-Fluss-Jordan-Flasche/dp/B09D2ZP291/");                      //If statement, selbst erklärend :)
    }
    else if(age_input < 0){                                                                                                  // else if wird verwendet um neue Parameter einzugeben inerhalb eines If statements
        printf("Verarsch mich nicht Brudi!");
    }
    else{
        printf("du bist zu jung fuer eine NSFW Nachicht :)");                                                         //else was passieren soll wenn die vorraussetzungen für "if" nicht erfüllt sind
    }

    printf("\nDu bist %d jahre alt!\n", age_input);
    printf("Dein name ist %s\n", name_input);

    fflush(stdin);                                                                                                      // Bei buffer overflow
    printf("\nWelche Brust groesse hast du?");
    scanf("%c", &boobies);

    boobies = toupper(boobies);                                                                                          // Der Input wird automatisch zum Großbuchstaben

    switch (boobies) {                                                                                                      // Switch wird verwendet anstatt else if wenn mehr als nur einmal ein if zustande kommt
        case 'A':
            printf("geht schon >.> probably good personality");
            break;
        case 'B':
            printf("Sieht nice aus c:");
            break;
        case 'C':
            printf("Cum on your tiddys?");
            break;
        case 'D':
            printf("DAYUUUUUUUUUUM");
            break;
        case 'E':
            printf("Puperty did you very good, or just fat");
            break;
        case 'F':
            printf("FUCK MY LIFE! Back Pain Inc");
            break;
        case 'G':
            printf("GOD DAYUUUUUUUUUUUM");
            break;
        case 'H':
            printf("HEEEEEEEELLLLLLL NOOOOOOO");
            break;
        default:
            printf("Bitte nur A-H ");
    }

    printf("\nGib mir ein Radius eines kreises");
    scanf("%lf", &radius1);


    umfang1 = 2 * pi * radius1;                                                                                             //mit user input kann auch Mathe aufgaben gelöst werden
    Flaesche1 = pi * radius1 * radius1;

    printf("\numfang: %.2lf",umfang1);                                                                               //hierzu brauch man die Formel und mann muss sachen bestimmen um Formeln zu lösen
    printf("\nFlaeche: %.2lf", Flaesche1);

    printf("\nWas ist die Laenge der seite A?(bei einem Dreieck)");
    scanf("%lf",&SeiteA1);

    printf("\nWas ist die Laenge der seite B?(bei einem Dreieck)");
    scanf("%lf",&SeiteB1);

    SeiteC1 = sqrt(SeiteA1*SeiteA1 + SeiteB1*SeiteB1);
    printf("\nDie Seite C ist: %lf\n",SeiteC1);
    fflush(stdin);



    printf("Willst du den refrain von Shakira? (Y/N)");                                                               // Beispiel für die verwendung von funktionen
    scanf("%c", &shakira);

    shakira = toupper(shakira);
    switch (shakira) {
        case 'Y':
            shakira_shakira();
            break;
        case 'N':
            printf("Schade, vllt beim naechsten mal :c");
            break;
        default:
            printf("keine eingabe erkannt");
    }
    fflush(stdin);




    //USER INPUT ENDE

    if(temp >= 0 && temp <=30 && Sonne == true){                                                                            // Logical operator && AND fügt neue Paremeter bei einer If abfrage hinzu in dem fall ein UND
        printf("\nSchönes Wetter heute");
    }
    else{
        printf("\nSchlechtes Wetter heute");
    }

    if(age_input == 17 || age_input == 25){                                                                                 // Logical Operator || OR wird benutzt wenn einer der beiden Parameter erfüllt sein muss
        printf("\nKann doch wieder nur Cora oder Jack Sein die mich benutzt haben !");
    }
    else{
        printf("\nheute mal jemand neues der mich benutzt hat oder einfach faul gewesen !");
    }

    if(!Sonne){                                                                                                             // Logical Operator (!) NOT wird benutzt um ein Boolean wert zu reversen
        printf("\nIst ziemlich bewölkt heute!");
    }
    else{
        printf("\nUUUUH SONNE!");
    }




    double wurzel1 = sqrt(9);                                                                                            // wurzel ziehen
    double hoch = pow(10, 10);                                                                                        // 2 hoch 10 zb
    int runden = round(299.42);                                                                                             // Runden
    int hochrunden = ceil(2.12);                                                                                         // hochrunden
    int runterrunden = floor(2.99);                                                                                      // runter runden
    double Absolutezahl = fabs(-12);                                                                                     // die absolute zahl also der wert is 0
    double logrythm = log(10000);                                                                                        // logrythm
    double sinus = sin(4);                                                                                               // Sinus wert
    double cosinus = cos(10);                                                                                            // Cosinus wert
    double tangens = tan(11);                                                                                            // Tangens wert

    printf("\n%.2lf", logrythm);

    double xy = hoch_age(25);
    printf("\n%.2lf", xy);

    geburtstag(name_input, age_input);                                                                                      // Funktion mit "user input" wichtig user input muss immer vorher ermittelt worden sein!

    return 0;                                                                                                               // Return 0 bei fehler return 1 weil nicht bis line gekommen
}

void shakira_shakira()
{                                                                                                                           // Funktion wird genutzt um codes nicht 100mal schreiben zu müssen mit "name"(); kann die funktion abgerufen werden
    printf("\nI never really knew that she could dance like this (Hey)");
    printf("\nShe make a man wanna speak Spanish");
    printf("\n¿Cómo se llama? (¡Sí!), ¿bonita? (¡Sí!)");
    printf("\nMi casa (Shakira, Shakira), su casa");
    printf("\nOh, baby, when you talk like that (Huh-uh; yeah)");
    printf("\nYou make a woman go mad (Oh)");
    printf("\nSo be wise (¡Sí!), and keep on (¡Sí!)");
    printf("\nReading the signs of my body (Uno, dos, tres, cuatro)");
    printf("\nNo fightin'");
}

void geburtstag(char name_input[25], int age_input)
{                                                                                                                           // Funktionen können gespeicherte werte verarbeiden welche aber in der Funktion und in der "call line" angegeben werden müssen
    printf("\nAlles gute zum Gebutstag %s", name_input);
    printf("Du bist jetzt %d Jahre alt!", age_input);
}

double hoch_age(double xy)                                                                                                  // return gibt auch sachen zurück die in ihren Funktionen
{
    return xy * xy;
}

int findmax(int x, int y)                                                                                                   // Ternary operator return value if true brauch wie alle anderen werte
{                                                                                                                           // Er fragt ob false oder true ist wen ja gibt die value aus
    return (x > y) ? x : y;                                                                                                 // Kann man auch in langer vor mit (if) und (if else) schreiben
}

void funktionstest (char rankup, char rankstore[1000]) {                                                                    //NF

    switch (rankup) {
        case 'Y':

            printf("\nwelchen rank hast du?(iron/bronze/silver/gold/platin/diamond/ascendent/immortal/radiant");
            scanf("%s", &rankstore);

            switch (rankstore[1000]) {
                case 'iron':
                    printf("\ngrow a brain ");
                    break;
                case 'bronze':
                    printf("\naimlabs is free and youtube tutorials too :)");
                    break;
                case 'silver':
                    printf("\nno aim just brain");
                    break;
                case 'gold':
                    printf("\nno brain anymore");
                    break;
                case 'platin':
                    printf("\nget ur ego out of the sky");
                    break;
                case 'diamond':
                    printf("\nstop having 10 e kittens at the same time (meow)");
                    break;
                case 'ascendent':
                    printf("\nhardstuck?");
                    break;
                case 'radiant':
                    printf("\n Radiant but still less than place 100? sadge");
                    break;
                default:
                    printf("\nUnranked? Get your fucking ass up ffs");

            }
        case 'N':
            printf("Schade:c");
            break;

    }
}