#include <stdio.h>

int main (int argc, char *argv[]) {

    int Bryan, Jhon, Pablo, Francis, Sebas;
    int opc;
    char repetir;
    do {
        
    
        printf ("Seleccione el nombre que te parezca gay\n");
        printf ("1. Bryan\n");
        printf ("2. Jhon\n");
        printf ("3. Pablo\n");
        printf ("4. Francis\n");
        printf ("5. Sebas\n");
        printf (">>");
        scanf ("%d", &opc);
        switch (opc)
        {
            case 1:
            printf ("Obviamente jajaja\n");
            break;

            case 2:
            printf ("Tiene novia pero lo oculta\n");
            break;

            case 3:
            printf ("El mejor, 100 hetero\n");
            break;

            case 4:
            printf ("Debatible, anda con colicos por el negro de 2 latas\n");
            break;

            case 5:
            printf ("Le gusta ChatGPT y por eso compro el premium\n");
            break;

        }

        printf ("Piensa que otro es gay?\n");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S');

    return 0;
}