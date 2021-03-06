#pragma once
#include "CJednoslad.h"

CJednoslad::CJednoslad(CParametryDynGlob ObDyn, double x, double y, double XX, double YY, CMapa xMapa)
{
	nadaj_wartosc_param(ObDyn);
	 X = x;
	 Y = y;
	 poczX = x;
	 poczY = y;
	 celX = XX;
	 celY = YY;
	 NaZakrecie = 0;
	 WTrakcieManewru = 0;
	 CzasZ = 1;
	 Trasa.tworz_trase(x, y, XX, YY, xMapa);
}

void CJednoslad::nadaj_wartosc_param(CParametryDynGlob ObDyn)
{
	 UtrzyOdle = ObDyn.wypisz_wartosc_para_dyn_glob(3) *0.8;
	 Szybkosc = ObDyn.wypisz_wartosc_para_dyn_glob(4) * 1.2;
}
