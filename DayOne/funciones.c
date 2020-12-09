#include "funciones.h"
#include <stdio.h>

unsigned int obtenerCombinacion2020(unsigned int *pExpRep)
{
    unsigned int *auxExpRep = pExpRep;
    unsigned int result = -1;
    int cantElem;
    //Array termina en 0

    while(*pExpRep)
    {
        cantElem = 1;

        while(cantElem)
        {
            if (auxExpRep == pExpRep) auxExpRep++;

            if ( ((*auxExpRep) + (*pExpRep)) == 2020 )
            {
                result = (*auxExpRep)*(*pExpRep);
                printf("Ans: %u\n", result);
            }

            if(*auxExpRep)
            {
                cantElem++;
                auxExpRep++;
            }
            else
            {
                auxExpRep -= cantElem;
                cantElem = 0;
            }
        }

        pExpRep++;
    }



    printf("Ans: %u\n", result);
    return result;
}

unsigned int obtenerCombinacionTriple2020(unsigned int *pExpRep_1)
{
    unsigned int *pExpRep_2;
    unsigned int *pExpRep_3;
    unsigned int result = -1;
    int cantElem;
    //Array termina en 0

    while(*pExpRep_1)
    {
        cantElem = 1;
        pExpRep_2 = pExpRep_1+1;
        pExpRep_3 = pExpRep_2+1;

        while(*pExpRep_2)
        {

            while(*pExpRep_3)
            {

                if ( ((*pExpRep_1) + (*pExpRep_2) + (*pExpRep_3)) == 2020 )
                {
                    result = (*pExpRep_1)*(*pExpRep_2)*(*pExpRep_3);
                }

                ++pExpRep_3;
            }

            ++pExpRep_2;
        }

        ++pExpRep_1;
    }

    return result;
}
