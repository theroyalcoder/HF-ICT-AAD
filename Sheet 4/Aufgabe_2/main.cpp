/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *
 *    ██████╗ ██╗     ██╗   ██╗███████╗    ███╗   ███╗██╗███╗   ██╗██╗   ██╗███████╗
 *    ██╔══██╗██║     ██║   ██║██╔════╝    ████╗ ████║██║████╗  ██║██║   ██║██╔════╝
 *    ██████╔╝██║     ██║   ██║███████╗    ██╔████╔██║██║██╔██╗ ██║██║   ██║███████╗
 *    ██╔═══╝ ██║     ██║   ██║╚════██║    ██║╚██╔╝██║██║██║╚██╗██║██║   ██║╚════██║
 *    ██║     ███████╗╚██████╔╝███████║    ██║ ╚═╝ ██║██║██║ ╚████║╚██████╔╝███████║
 *    ╚═╝     ╚══════╝ ╚═════╝ ╚══════╝    ╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚══════╝
 *
 * @Version:	1.0.5
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		08.10.2017
 *
 * @Description:
 *				Implementieren Sie eine Methode analyseArray welche als Parameter einen vector mit Integer
 *				Werten bekommt. Diese Werte sind entweder Positiv, Negativ oder Null. Die Methode soll nun
 *				berechnen, wie viel Prozent der Werte Positiv, Negativ resp. Null sind. Diese drei Werte werden als
 *				Objekt der Klasse Result zurückgeliefert.
 *
 * Beispiel:
 *				Input: 1, 10, 0, -6, -9, 2, 5
 *				Lösung: [nPositive: 57.1%; nZero: 14.3%; nNegative: 28.6%]
 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

#include <bits/stdc++.h> //Alle benötigten Includes

#include "debug.h"
#include "result.h"
#include "arrayutil.h"

using namespace std;
using namespace std::chrono;

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));
	vector<int> myVec{1, 10, 0, -6, -9, 2, 5};
	vector<int> myVec2;
	for(unsigned int i = 0; i < 100000000; i++){
		myVec2.push_back(rand()%100-50);
	}

	auto start = high_resolution_clock::now();
	Result result = ArrayUtil::analyseArray(myVec);
	ArrayUtil::printArray(result, myVec.size());
	auto ende  = high_resolution_clock::now();

		//<-- Asgabe der Zeitmessung -->
	cout << endl << "Zeit: " << std::chrono::duration_cast<nanoseconds>(ende-start).count() << " Nanoseconds"<<endl;
	cout << "Zeit: " << std::chrono::duration_cast<microseconds>(ende-start).count() << " Microseconds"<<endl;
	cout << "Zeit: " << std::chrono::duration_cast<milliseconds>(ende-start).count() << " Milliseconds"<<endl;
	cout << "Zeit: " << std::chrono::duration_cast<seconds>(ende-start).count() << " Seconds"<<endl;

	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ V2 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

	start = high_resolution_clock::now();
	Result result2 = ArrayUtil::analyseArray(myVec2);
	ArrayUtil::printArray(result2, myVec2.size());
	ende  = high_resolution_clock::now();

		//<-- Asgabe der Zeitmessung -->
	cout << endl << "Zeit: " << std::chrono::duration_cast<nanoseconds>(ende-start).count() << " Nanoseconds"<<endl;
	cout << "Zeit: " << std::chrono::duration_cast<microseconds>(ende-start).count() << " Microseconds"<<endl;
	cout << "Zeit: " << std::chrono::duration_cast<milliseconds>(ende-start).count() << " Milliseconds"<<endl;
	cout << "Zeit: " << std::chrono::duration_cast<seconds>(ende-start).count() << " Seconds"<<endl;

	return 0;
}


