#include <stdio.h>
#include <stdlib.h>
int main()
{
    int largeur;
    int longueur;
    int i=0;
    int j=0;


    printf("Entrez la longueur de votre carre \n");
    scanf("%d",&longueur);

    printf("Entrez la largeur de votre carre \n");
    scanf("%d",&largeur);

    for(i=0;i<longueur;i++)
        {
            for(j=0;j<largeur;j++)
                {
                    if((i!=0) && (i!=longueur-1) && (j!=0) && (j!=largeur-1))
                    {
                        printf("�");
                    }
        else        {
                        printf("o");
                    }
                }
                        printf("\n");
        }
    return 0;
}


/* Algorithme: carr�
    BUT: creer un carr� avec des bordures dont les longueur et largeur ont des caract�res diff�rents
    ENTREE: longueur et largeur
    SORTIE: un  carr�

        VAR: largeur, longueur, i, j: ENTIER

    DEBUT
            ECRIRE " Entrez la longueur de votre carr�"
            LIRE longueur

            ECRIRE "Entrez la largeur de votre carr�"
            LIRE largeur

                POUR ((i ->0) ET (j<longueur) ET (i->i+1))
                    POUR j  ((j ->0) ET (j<largeur) ET (j->j+1))
                            SI ((i<> 0) ET (i<> longueur-1) ET (j <> largeur-1))
                                ECRIRE "�"
                                SINON
                                ECRIRE "o"

    FIN


*/
