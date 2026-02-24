#include<stdio.h>
#include<string.h>
#define MAX_LETTRES 1024
int main()
{   
    int nb_mot, i, j,choix,k,m;
    char espace[3]="  ";
    char *temp[MAX_LETTRES];
    char *token = NULL;
    char mot[MAX_LETTRES];  
    const char majAlphabet[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    const char alphabe[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    const char *morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","-.---","--.."};
    int l = 0;
        printf("choisissez le convertiseur :\n");
        printf("\t 1 pour alphabet-->morse\t\t 2 pour morse-->alphabet\n");
        printf("votre choix :");
        scanf("%d",&choix); // le \n persiste
        getchar(); // pour consommer \n

        if (choix==1)
        {
            printf("Entrer le mot a convertir :");
            scanf("%[^\n]",mot); //ce type ^\n permet de prendre en compte les espaces et s'arrete jusqu'a un saut de ligne(\n)
            //fgets(mot,100,stdin);
            nb_mot=strlen(mot) -1 ; 
            for ( j = 0; j <= nb_mot; j++) 
            {   
                int trouve = 0;
                if (espace[0]==mot[j])
                {
                    printf("%s/",espace);// l'adresse d'espace est la sa valeur piusque c'est un pointeur et &escape[1]=\0
                    trouve = 1;
                }
                else
                {
                    for ( i = 0; i <=26; i++)
                    {
                        if (alphabe[i]==mot[j] || majAlphabet[i]==mot[j])//(strcmp(alphabe[i],mot[j])==0)
                        {
                            printf("%s/",morse[i]);
                            trouve = 1;
                            break;
                        }
                    }
                }
                if (trouve == 0 && mot[j] != '\0' && mot[j] != '\n') {
                    printf("%c/", mot[j]); // Affiche le symbole inconnu
                }
            }
            printf("\n");
        }
        else if (choix==2)
        {
                k=1;
                printf("Entrer la morse a convertir :");
                scanf("%[^\n]",mot);
                token=strtok(mot,"/");
                temp[0]=token; // on prend le premier
                while (token!=NULL) 
                {
                    token=strtok(NULL,"/");
                    temp[k]=token;
                    k++;     // apres la premiere boucle Strtok vas retourner le deuxieme morceau
                }
                l=0;
                //nb_nombre=strlen(*temp);// le probleme avec strlen c'est qu'il compte le nombre de caracteres contenue dans 1seul token au lieu de compter les token
                //printf("%d",nb_nombre);
                do
                {
                    int trouve_m = 0;
                    if (espace[0]==*temp[l])
                    {
                        printf("%s",espace);
                        trouve_m = 1;
                    }
                    else{
                        for ( m = 0; m <26; m++)
                        {   if((strcmp(temp[l],morse[m])==0))
                            {
                                printf("%c",alphabe[m]);
                                trouve_m = 1;
                                break;
                            }
                        }
                    }

                    if (trouve_m == 0) {
                        printf("%s",temp[l]); // Affiche le symbole inconnu
                    }
                    l++;
                }while (temp[l]!= NULL);
                printf("\n");
        }   
        
    return (0);
}
