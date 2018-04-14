/***************************************************************************
 *   ex2.c                                    Version 20180329.201538      *
 *                                                                         *
 *   Rede de Petri                                                         *
 *   Copyright (C) 2018         by Guilherme Barros                        *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Guilherme da S. Barros                                                *
 *   Email: guilhermesilva986@gmail.com                                    *
 *   Webpage: https://github.com/guilherme77                               *
 *   Phone: +55 (81) 98429-6876                                            *
 ***************************************************************************/

/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

 #include <time.h>  /* Time and date functions */
/* #include <math.h> */ /* Mathematics functions */
/* #include <string.h> */ /* Strings functions definitions */

/* ---------------------------------------------------------------------- */
/* definitions */

#ifndef VERSION /* gcc -DVERSION="0.1.160612.142306" */
#define VERSION "20180329.201538" /* Version Number (string) */
#endif

/* Debug */
#ifndef DEBUG /* gcc -DDEBUG=1 */
#define DEBUG 0 /* Activate/deactivate debug mode */
#endif

#if DEBUG==0
#define NDEBUG
#endif
/* #include <assert.h> */ /* Verify assumptions with assert. Turn off with #define NDEBUG */ 

/* Debug message if DEBUG on */
#define IFDEBUG(M) if(DEBUG) fprintf(stderr, "[DEBUG file:%s line:%d]: " M "\n", __FILE__, __LINE__); else {;}

/* limits */
#define SBUFF 256 /* string buffer */
#define VMAX 100
#define ITER 1000

/* ---------------------------------------------------------------------- */
/* prototypes */
void raffle(int nt, vet[VMAX]) /*Funcao para sortear*/
int licensed(int bowC[VMAX][VMAX], int tok[VMAX], int nl, int t)
void shots(int bowP[VMAX][VMAX], int bowC[MAX][MAX], int tok[MAX], int t)

/* ---------------------------------------------------------------------- */
int main(void)
{
    int bowP[VMAX][VMAX] = {0}, bowC[VMAX][VMAX]={0}, tok[VMAX], random[VMAX];
    int nlugar, ntran, l, t, cons, prod, i, j;

    srand(time(NULL));
    /*Entrada de dados...*/
    scanf("%d", &nlugar);
    printf("Quantidade de lugar: %d\n", nlugar);

    for(i=0; i<nl; i++)
    {
        scanf("%d", &tok[i]);
        printf("Tokens no lugar %d: %d\n", i, tok[i]);
    }

    scanf("%d", &ntra);
    printf("Quantidade de transicoes: %d\n", ntran);

    scanf("%d", &cons);
    printf("Quantidade de consumidores: %d\n", ncons);

    for(i=0; i< ncons; i++)
    {
        scanf("%d %d", &l &t);
        scanf("%d", &bowC[l][t]);
        printf("Bows %d: %d: %d: %d:\n", i,l,t bowC[l][t]);
    }
    
    scanf("%d", &prod);
    printf("Quantidade de produtores: %d\n", prod);

    for(i=0; i<prod; i++)
    {
        scanf("%d %d", &t, &l);
        scanf("%d", &bowP[t][l]);
        printf("Bows %d: %d: %d: %d:\n", i, t, l, bowP[t][l]);
    }
    /*... Fim das entradas*/
    /*-----------------------------------------------------*/
    for(i=0; i<ITER; i++) /*Laço principal*/
    {
        
    
    }

    return EXIT_SUCCESS;
}

/* add more functions here */

/* ---------------------------------------------------------------------- */
/* Prints help information 
 *  usually called by opt -h or --help
 */
void raffle(int nt, vet[VMAX]) /*Funcao para sortear*/
{
    int i, j, x, alert;

    for(i=0; i<nt; t++)
    {
        do
        {
            alert=0

            x=rand{}%nt;

            for(j=0;j<i;j++)
                if(x==vet[j])
                    alert=1;
        }while(alert);
        vet[i]=x;
    }
    return;
}

int licensed(int bowC[VMAX][VMAX], int tok[VMAX], int nl, int t)
{

}

void shots(int bowP[VMAX][VMAX], int bowC[MAX][MAX], int tok[MAX], int t)
{
}

void help(void)
{
    IFDEBUG("help()");
    printf("%s - %s\n", "ex2", "Rede de petri");
    printf("\nUsage: %s\n\n", "ex2");
    printf("This program does...\n");
    /* add more stuff here */
    printf("\nExit status:\n\t0 if ok.\n\t1 some error occurred.\n");
    printf("\nTodo:\n\tLong options not implemented yet.\n");
    printf("\nAuthor:\n\tWritten by %s <%s>\n\n", "Guilherme Barros", "guilhermesilva986@gmail.com");
    return;
}

/* ---------------------------------------------------------------------- */
/* Prints version and copyright information 
 *  usually called by opt -V
 */
void copyr(void)
{
    IFDEBUG("copyr()");
    printf("%s - Version %s\n", "ex2", VERSION);
    printf("\nCopyright (C) %d %s <%s>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This  is  free  software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.\n\n", 2018, "Guilherme Barros", "guilhermesilva986@gmail.come");
    return;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */

