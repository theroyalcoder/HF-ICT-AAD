/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *

 *
 * @Version:        1.0.0
 * @Author:         Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:           01.1.2017
 *
 * @Description:

 *
 * Beispiel:

 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

#define DEBUG

#include <iostream>
#include "priorityqueue.h"


using namespace std;

int main() {
	priorityQueue pq;
	pq.insertRandom(50);
	pq.extractMin(); //Hier ist noch ein Fehler.. 18 ist am ende, der letzte wird nicht sortiert nach extract
	pq.printPriotityQueue();
	cout << "height --> " << pq.getHeight() << "\n";
	return 0;
}

