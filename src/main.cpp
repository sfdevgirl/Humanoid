//*****************
//
////Project Name: Chapter/Question or Project-Name
//
////Project Description: A description of the project/program
//
////Project Author: Smith, Shannon 
//
////Is this an extra credit Project: No
//
////Date completed: 10/ /16 
//
////Operating system used:  Linux
//
////IDE Used:  Eclipse 
//
////*****************
#include <iostream>
#include<vector>
#include "Human.hpp"
#include "Humanoid.hpp"
#include "SuperHuman.hpp"
#include "GoodHuman.hpp"
#include "EvilHuman.hpp"
#include "EvilSuper.hpp"
#include "GoodSuper.hpp"
using namespace std;

int main() {

//		vector<Humanoid *> myHumanoids;

//		Human *myHuman = new Human();
//		superHuman *mySuperHuman = new superHuman();
//
//		myHumanoids.push_back(myHuman);
//		myHumanoids.push_back(mySuperHuman);
//
//		for (int i=0; i < myHumanoids.size(); i++){
//			cout << myHumanoids[i]->whoami() << endl;
//			if (myHumanoids[i]->whoami() == "SuperHero" ) {
//				static_cast<superHuman*>(myHumanoids[i])->fly();
//
//			}
//			else{}
//
//		}//for
//		for (unsigned int i  =0; i < myHumanoids.size(); i++){
//			delete myHumanoids[i];
//		}
	//3. evil super human 2. good super 1. evil human 0. good human
		EvilHuman *newEvilHuman = new EvilHuman();
		GoodHuman *newGoodHuman = new GoodHuman();
		EvilSuper *newEvilSuper = new EvilSuper();
		GoodSuper *newGoodSuper = new GoodSuper();
		fight(newEvilHuman, newSuperHuman);

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
