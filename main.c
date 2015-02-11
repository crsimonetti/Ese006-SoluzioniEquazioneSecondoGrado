#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calcoloDelta(float a,float b, float c){
    float risultato;
    
    risultato = b * b - (4 * a * c);
    
    return risultato;
}
int esistonoSoluzioniReali(float a, float b,float c){
    float delta;
    
     delta = calcoloDelta(a,b,c);
    
    if(delta > 0)
    
        return 1;
    else
        
        return 0;
}
float soluzione1(float a, float b, float c){
    float risultato;
    float delta = calcoloDelta(a,b,c);
    
    delta = sqrt(delta);
    
    risultato = ((b * -1) + delta) / (2 * a);
    
    return risultato;
}

float soluzione2(float a, float b, float c){
    float risultato;
    float delta = calcoloDelta(a,b,c);
    
    delta = sqrt(delta);
    
    risultato = ((b * -1) - delta) / (2 * a);
    
    return risultato;
}

void stampa(float x1,float x2){
 
    printf("Il valore di x1 Ã¨: %f\n",x1);
    
    printf("Il valore di x2 Ã¨: %f\n",x2);
   
}
int main(int argc, char** argv) {
float a,b,c,risultato1,risultato2;
    
printf("inserisci il primo coefficiente");
 scanf("%f",&a);
 
 printf("inserisci il secondo coefficiente");
 scanf("%f",&b);
 
 printf("inserisci il terzo coefficiente");
 scanf("%f",&c);
 
 if ( esistonoSoluzioniReali(a,b,c) ){
    
     risultato1 = soluzione1(a,b,c);
    
     risultato2 = soluzione2(a,b,c);
    
     stampa(risultato1,risultato2);
    }
 else {
     printf ("equazione impossibile");
 }
 

return (EXIT_SUCCESS);
}


