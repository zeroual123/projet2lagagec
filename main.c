#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{
    printf("mohamed  \n zeroual");

     printf("bonjour je suis %s \n" , "mohamed");
      printf("j'ai %d ans \n" ,18);

       printf("salut je suis %s , j'ai %.2f   ans \n", "mohamed zeroual",18.558);

        printf("le cod octal pour %d est: %o \n",14 , 14);

        int y,x;
        float z = 3.2;
        char prenom[] = "mohamed";
        x=10;
        y = 12;
        printf("y = %d \n x = %d \n z = %.2f \n prenom = %s",y,x,z,prenom);

                                   /* constante */
        float rayon = 4,surface;
        surface = rayon*rayon*pi;
        printf("la surface est %.2f ", surface);

                            /*caractre de fin de chaine*/
        char jour[6] ="lu\0di";
        printf("\n%s",jour);

                            /* les opérateures arithmétiques*/
        int h=10,e=2,r;
         r=h+e;
         printf("\n%d",r);

                            /* les opérateures d'assignation*/
         int t =15;
         t+=5;
         printf("\n%d",t);

                            /* les opérateures conditionnel*/
        int m = 48,k=6,p;
        p = (m > k)? 1: 0;
        printf("\n %d",p);
                            /*cpmaraison*/

         p = (m != k)? 1:0;
         printf("\n%d",p);
                            /*logiques*/

         int l = 55 , d = 2 , n;
         n = !(l > d || l  < 55)? 1 :0;
         printf("\n%d",n);

                            /*d'incémentation*/

         int c=100;
         printf("\n%d",c);
         c++  ;
         printf("\n%d",c);

                            /* scanf */

          printf("\nentrer la valeur de x: \t");
          scanf("%d" ,&x);
          printf("\nentrer la valeur de y: \t");
          scanf("%d" ,&y);
           printf("\n resultat%d",x+y);

                            /* if* */
              // pin a numbre between 1000 and 9999
           int pin;
           printf("\n enter your pin code: \t");
           scanf("%d",pin);
           if(pin==1888){
            printf("\n unlocked!");

            }else{
                printf("please verify your pin code. \n");
            }







        return 0;
  }

