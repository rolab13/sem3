////////////////////////////////////////////////////////////////
//
// JP3 - zadanie 2 - kod morsa.
//
// Program umozliwiajacy wypikiawnie ciagow znakow w postaci kodu morsa.
//
// Autor - Mateusz Krzeszewski
//
// 02.11.2018 - utworzenie programu.
//
// UPDATES
//
// 03.11.2018 - utworzenie osobnego rozwiazania do zamiany liter na kod morsa o nazwie morsedecoding - zawarte w morse.h
// 
////////////////////////////////////////////////////////////////
#include "morse.h"

int main() {
	morse m;
	m.setFrequency(1000);
	m.setPause(50);
	m.setDotTime(100);
	m.setDashTime(200);
	m.setCharPause(100);
	m << "Ala ma kota";
	long i = 0x5a5a5a5a;
	double d = 1.23456789;
	m << i << pause << d;
	return 0;
}