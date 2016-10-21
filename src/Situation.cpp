/*
 * Situation.cpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#include "Situation.hpp"
#include "Humanoid.hpp"

Situation::Situation() {
	// TODO Auto-generated constructor stub

}

Situation::~Situation() {
	// TODO Auto-generated destructor stub
}
void Situation::fight(Humanoid &a, Humanoid &b){

	//	if(newEvilHuman->getRank() > newGoodHuman->getRank()){
	//				cout << "True\n";
	//			}
		if (a.getRank() > b.getRank()){
			cout << a.whoami() << " has killed " << b.whoami() << endl;
		}//if
		else if (a.getRank() < b.getRank()){
			cout << b.whoami() << " has killed " << a.whoami() << endl;
		}//else if
		else if ( a.getRank() == b.getRank()){
			cout << "No fight here!\n";
		}

	}
}
