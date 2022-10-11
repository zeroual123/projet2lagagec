#include <stdio.h>
#include <stdlib.h>
  const float _pi =3.14;  // les constants
int main()
{

    printf("bonjour je suis %s , j'ai %.2f ans ", "mohamed ", 18.5);
                            // octal
    printf("\nle code octal pour %d est : %o \n ", 14,14);
                            //hexadécimal
     printf(" le code hexadecimal pour %d est: %x \n", 16 , 16);
                            // les variables
       int x ,y;
       float z;
       char prenom [8] = "moh\0med";
       x = 15;
       y = 13;
       z = 1.5;
        printf(" y =%d \n x = %d \n z =%.2f \n prenom = %s",x ,y ,z,prenom);
                            // les constantes

        float rayon = 4 , surface;
        surface  = rayon * rayon * _pi;
        printf("\nla surface est %.2f", surface);
                            //les opérateurs arithmétiques
         int p = 10 , o = 2 , r ;
        r = p % o;
        printf (" \n%d", r );
                            // les opérateurs d'assignation
          x = 10;
          x +=2;
          printf("\n %d",x);

                            //les opérateurs conditionnel
            int m =100,a =55,e;
            e = (m >= a)? 1 : 0;
            printf("\n%d",e);
                            // logique
            e = !(m > a ||a > m)? 1:0;
            printf("\n%d", e);
                            // d'incrémentation
             x =100;
             printf  ("\n%d",x);
             x++;
             printf  ("\n%d",x);
             x--;
             printf  ("\n%d",x);
                            // scanf

             int w,q,u;
             printf("\nentrer la valeur de w: \t");
             scanf("\n%d",&w);
             printf("\nentrer la valeur de q: \t");
             scanf("\n%d",&q);
             printf("Resultat de w +q: %d", w+q);

                            // switch





    return 0;
}

