# include<stdio.h>

int  main ()
{
    int y = 0 ;
    do
    {
        printf ( "\n Champions League 2019 \n " );
        printf ( "\n Selecciona alguno de tu preferencia: \n " );
        printf ( "\n 1- Octavos de final \n " );
        printf ( "\n 2- Cuartos de final \n " );
        printf ( "\n 3- Semifinal \n " );
        printf ( "\n 4- Final \n " );
        printf ( "\n 5- Ganador \n " );
        printf ( "\n 6- Salir \n" );
        scanf ( "\n % d " , & y);
        switch (y)
        {
            case  1 :
                printf ( " \n \n " );
                printf ( "\n Octavos de final " );
                printf ( "\n 1- M. UNITED (0) VS (2) PSG \n " );
                printf ( "\n 2- ROMA (2) VS (1) OPORTO \n " );
                printf ( "\n 3- TOTTENHAM (3) VS (0) B. DORTMUND \n " );
                printf ( "\n 4- AJAX (1) VS (2) REAL MADRID\n " );
                printf ( "\n 5- LYON (0) VS (0) BARCELONA \n " );
                printf ( "\n 6- LIVERPOOL (0) VS (0) BAYERN \n " );
                printf ( "\n 7- ATLETICO (2) VS (0) JUVENTUS \n " );
                printf ( "\n 8- SCHALKE 04 (2) VS (3) M. CITY \n " );
                printf ( " \n \n " );
                break ;
            case  2 :
                printf ( " \n \n " );
                printf ( "\n Cuartos de Final \n " );
                printf ( "\n 1- TOTTENHAM (3) VS (4) MAN.CITY \n " );
                printf ( "\n 2- AJAX (2) VS (1) JUVENTUS \n " );
                printf ( "\n 3 M. UNITED (0) VS (3) BARCELONA \n " );
                printf ( "\n 4- LIVERPOOL (4) VS (1) OPORTO \n " );
                printf ( " \n \n " );
                break ;
            case  3 :
                printf ( " \n \n " );
                printf ( "\n Semifina \n " );
                printf ( "\n 1- TOTTENHAM (3) VS (2) AJAX \n " );
                printf ( "\n 2- FC BARCELONA (0) VS (4) LIVERPOOL \n " );
                printf ( " \n \n " );
                break ;
            case  4 :
                printf ( " \n \n " );
                printf ( "\n Final \ n " );
                printf ( "\n 1- TOTTENHAM (0) VS (2) LIVERPOOL \n " );
                printf ( " \n \n " );
                break ;
            case  5 :
                printf ( "\n Ganador \n " );
                printf ( "\n LIVERPOOL \n " );
                printf ( " \n \n " );
                break ;
                default :
                printf ( "\n FINALIZO EL PROGRAMA \n " );
                printf ( " \n \n " );
        }
        
    } while (y <= 5 && y> 0 );
    return 0 ;
}
