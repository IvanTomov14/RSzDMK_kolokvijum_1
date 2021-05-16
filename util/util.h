/*
 * util.h
 *
 *  Created on: May 16, 2021
 *      Author: Pavilion
 */

#ifndef UTIL_H_
#define UTIL_H_

/**
 * Funkcija SORT treba da sortira niz array duzine array length, na nacin
 * odabran paramterom mode. Parametar mode moze imati vrednost konstanti UP
 * i DOWN definisanih pomocu makroa. Ukoliko mode ima vrednost UP, sortira niz
 * od najveceg do najmanjeg elementa, dok u slucaju vrednosti DOWN sortira
 * niz od najmanjeg do najveceg elementa.
 */

 void Sort(int16_t *array, int16_t array_length, int8_t mode);

/**
 * Funkcija CHECK vrsi promenu da li je niz geometrijski.
 * @TRUE ili FALSE, definisane kao makro konstante za 1 i 0
 */

 int8_t Check(int16_t *array);

#endif /* UTIL_H_ */
