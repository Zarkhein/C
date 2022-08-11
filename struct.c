#include <stdio.h>
#define HEURES 3600
#define MIN 60
struct temps{
    unsigned heures;
    unsigned minutes;
    double secondes;
};



int main(){
    
    
    struct temps t = {12,45,50.64};
    struct temps t2 = {13,30,35.48};
    
    

    printf("Premiere mesure: %d:%d:%.2f\n", t.heures, t.minutes, t.secondes);
    printf("Deuxieme mesure: %d:%d:%.2f\n", t2.heures, t2.minutes, t2.secondes);
    printf("Difference temps en secondes entre les deux mesures : %.2f",
            ((t2.heures*HEURES)-(t.heures*HEURES))+((t2.minutes*MIN)-(t.minutes*MIN))+((t2.secondes)-(t.secondes)));



    return 0;
}


