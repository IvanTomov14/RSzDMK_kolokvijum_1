/*
 * pinovi.c
 *
 *  Created on: May 16, 2021
 *      Author: Pavilion

#include <LiquidCrystal.h>
#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

char keypadScan()

{

    unsigned char row, tmp;
    char key = 0;


    MCUCR &= ~0x10;     //PUD = 0 (pull-up otpornici su ukljuceni)
    tmp = UCSR0B;
    UCSR0B &= ~0x18;    //iskljucenje TxD i RxD pina
    PORTD = 0x0f;       //pull-up otpornici ukljuceni na niza 4 bita


    for(row = 0x80; row != 0x08; row >>= 1)
    {
        DDRD = row;    //aktiviranje vrste
        _delay_ms(2);

        //visi nibl predstavlja vrstu, a nizi stanja tastera:

        switch (row | ((~PIND) & 0x0f))
        {
            //prva vrsta:

            case 0x88:
                key = '1'; break;

            case 0x84:
                key = '2'; break;

            case 0x82:
                key = '3'; break;

            case 0x81:
                key = 'A'; break;


                //druga vrsta:

            case 0x48:
                key = '4'; break;

            case 0x44:
                key = '5'; break;

            case 0x42:
                key = '6'; break;

            case 0x41:
                key = 'B'; break;


                //treca vrsta:

            case 0x28:
                key = '7'; break;

            case 0x24:
                key = '8'; break;

            case 0x22:
                key = '9'; break;

            case 0x21:
                key = 'C'; break;


                //cetvrta vrsta:

            case 0x18:

                key = '*'; break;

            case 0x14:

                key = '0'; break;

            case 0x12:

                key = '#'; break;

            case 0x11:

                key = 'D'; break;

        }

    }



    UCSR0B = tmp;   //ukljucenje TxD i RxD pina

    return key;
}
*/


