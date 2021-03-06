/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *
 *     ██╗        █████╗ ██╗  ██╗████████╗██╗███████╗███╗   ██╗██╗  ██╗██╗   ██╗██████╗ ███████╗███████╗
 *    ███║       ██╔══██╗██║ ██╔╝╚══██╔══╝██║██╔════╝████╗  ██║██║ ██╔╝██║   ██║██╔══██╗██╔════╝██╔════╝
 *    ╚██║       ███████║█████╔╝    ██║   ██║█████╗  ██╔██╗ ██║█████╔╝ ██║   ██║██████╔╝███████╗█████╗
 *     ██║       ██╔══██║██╔═██╗    ██║   ██║██╔══╝  ██║╚██╗██║██╔═██╗ ██║   ██║██╔══██╗╚════██║██╔══╝
 *     ██║██╗    ██║  ██║██║  ██╗   ██║   ██║███████╗██║ ╚████║██║  ██╗╚██████╔╝██║  ██║███████║███████╗
 *     ╚═╝╚═╝    ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝╚══════╝╚═╝  ╚═══╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝
 *
 *
 * @Version:	1.0.0
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		02.09.2017
 *
 * @Description:
 *				In dieser Aufgabe soll eine Methode implementiert werden,
 *				welche als Parameter einen Array enthalt.
 *				Dieser Array beinhaltet die Aktienpreise eines bestimmten Unternehmen fur einen Tag.
 *				Der Arrayin-dex ist dabei die Minute seit Start (Börse ̈offnet um 09:00 und schliesst um 17:30).
 *
 * Beispiel:
 *				stockprices[0] = 100 // Wert der Aktie um 09:00
 *				stockprices[1] = 101 // Wert der Aktie um 09:01
 *				stockprices[10] = 89 // Wert der Aktie um 09:10
 *				stockprices[70] = 75 // Wert der Aktie um 10:10
 *				stockprices[440] = 110 // Wert der Aktie um 16:20
 *
 * Anmerkung:
 *				Finden Sie den maximalem Gewinn der an diesem Tag erzielt werden konnte.
 *				ACHTUNG:"shorting"(Verkauf bevor Kauf) ist nicht erlaubt.
 *				Ebenso ist es nicht erlaubt die Aktienzum gleichen Zeitpunkt zu kaufen und zu verkaufen.
 *				Es kann durchaus m ̈oglich sein, dass der Gewinnnegativ ist.
 *  *
 *==============================================[ EOF RDM ]=============================================================================*/
#include <iostream>
#include <ctime>

#include "trader.h"
#include "data.h"

using namespace std;

int main()
{
	Trader trader;
	double startTime(9.00), endTime(17.50);
	static int maxTime(0);
	int result(0);
	clock_t start,stop;


	maxTime = (endTime-startTime)*60; //Zeit in minuten

	int stockprices[maxTime], *returnValue;

	returnValue = trader.fillTraderScale(maxTime);


	start = clock();
	result = Trader::calculateMaxProfit(returnValue,maxTime);
	stop = clock();
	if(result > 0){
		cout <<"Der Gewinn ist:\t "<<result<<endl;
	}else{
		cout <<"Der Verlust ist:\t "<<result<<endl;
	}
	cout<<"---------------\nBenoetigte Berechnungszeit: " <<(double)(stop-start)/CLOCKS_PER_SEC<<endl;



	return 0;
}
