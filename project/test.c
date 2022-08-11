#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

void menu();
void view_lis();
void edit(register int seq);
void transact(register int seq);
int new_acc(register int seq);

struct Client
{
    char user[256];
    char anniversaire[256];
    int argent;
    char password[256];
};

int main(){
    
    menu();
    return 0;
}

struct Client c[MAX];


int new_acc(register int seq) {
    
    int inc = seq;
    
    printf("\n"); 
    
    printf("Entrer votre UserClient: ");
    scanf("%s", c[inc].user);
    printf("\n");
    
    printf("Entrer votre date d'anniversaire: ");
    scanf("%s", c[inc].anniversaire);
    printf("\n");

    printf("Argent sur le compte: ");
    scanf("%d", &c[inc].argent);
    printf("\n");

    inc++;
    return inc;
}

void view_list(register int seq){
    int i; 
    printf("\n");
    for ( i = 0; i < seq; i++)
    {
        printf("[%d]: %s\t | %s\t | %d$\t", i, c[i].user, c[i].anniversaire, c[i].argent);
        printf("\n");
    }
}


void edit(register int seq){
    char user[256];
    int i;
    int answer;
    int tmp = 0;

    printf("\n");
    printf("Entrer le nom d'utilisateur:");
    scanf("%s", &user);
    
    for (i = 0; i < seq; i++)
    {
        if(strcmp(user, c[i].user) == 0)
        {
            tmp = 1;
            break;
        }
    }
    
    if(tmp == 0){
        printf("Erreur : Compte non trouvé.\n");
        return 0;
    }
       
    printf("numero ID: %d | %s\n", i , c[i].user);
    printf("Vous voulez modifier vos informations ? (1 = yes | 0 = no)");
    scanf("%d", &answer);
    
    if(answer == 1)
    {
        printf("\n");

        printf("Entrer votre UserClient: ");
        scanf("%s", c[i].user);
        printf("%s", c[i].user);
        printf("\n");

        printf("Entrer votre date d'anniversaire: ");
        scanf("%s", c[i].anniversaire);
        printf("\n");
    }
    else
    {
        printf("Annulation de la modification");
    }
    
}


void transact(register int seq){
    
    int i;
    int send = 0;
    int moneyDeposit = 0;    
    int answer;
    int tmp = 0;
    char user[256];

    printf("\n");
    printf("Entrer le nom d'utilisateur:");
    scanf("%s", &user);

    for (i = 0; i < seq; i++)
    {
        if(strcmp(user, c[i].user) == 0)
        {
            tmp = 1;
            break;
        }
    }

    if(tmp == 0){
        printf("Erreur.\n");
        return 0;
    }

     
    printf("Veuillez selectionner une option: \n");
    printf("1.Deposer de l'argent\n");
    printf("2.Envoyer de l'argent\n");
    scanf("%d", &send);
    switch(send)
    {
        case 1:
            printf("=== Vous avez sélectionné : déposer de l'argent\n");
            printf("Combien vous voulez déposer ?\n");
            scanf("%d", &moneyDeposit);
            printf("Vous voulez vraiment déposer %d $ sur votre compte ? (Yes = 1 ou No = 0)\n", moneyDeposit);
            scanf("%d", &answer);
            if(answer == 1)
            {
                c[i].argent += moneyDeposit;
                printf("Argent envoyé.\n");
                printf("Vous avez maintenant : %d $\n ", c[i].argent);
            }
            else if(answer == 0)
                printf("Annulation de la transaction...\n");
            else
                printf("Erreur - annulation de la transaction...\n"); 
            break;
        case 2:
            printf("config\n");
            break;
        default:
            printf("Erreur\n");
            break;
    }

}


void menu() {
   
    int value, test;
    register int seq = 0; 

    while(test != -1)
    {
        printf("1 - Create new account\n");
        printf("2 - Update information of existing account\n");
        printf("3 - For transaction\n");
        printf("4 - Check the details of existing account\n");
        printf("5 - Removing existing account\n");
        printf("6 - View customer's list\n");
        printf("7 - Exit\n");
        printf("\n");
        printf("Entrer votre choix: ");
        printf("\n");       
        
        scanf("%d", &value);
        
        switch(value){
            case 1:
                printf("=== Vous avez sélectionné : Nouveau compte ===\n");
                seq = new_acc(seq);
                printf("\n");
                printf("==============================================\n");
                break;
            case 2:
                printf("=== Vous avez Sélectionné : Mettre à jour mes informations ===\n");
                edit(seq); 
                break;
            case 3:
                printf("=== Vous avez Sélectionné : Transaction ===\n");
                transact(seq);
                break;
            case 4:
                printf("=== Vous avez Sélectionné : Mes informations ===\n");
                break;
            case 5:
                printf("=== Vous avez Sélectionné : Supprimer mon compte ===\n");
                break;    
            case 6:
                printf("=== Vous avez Sélectionné : Voir les comptes ===\n"); 
                view_list(seq);
                printf("==============================================\n");
                break;
            case 7:
                printf("=== Vous avez Sélectionné : Exit ===\n");
                test = -1;
                break;
            default:
                break; 
        }
    }            
                
}
