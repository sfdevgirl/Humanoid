/*
 * Humanoid.hpp

 *
 *  Created on: Oct 18, 2016
 *      Author: linuxuser
 */

using namespace std;

#ifndef HUMANOID_HPP_
#define HUMANOID_HPP_
#include<string>
#include <iostream>
using namespace std;
class Humanoid {
public:
	Humanoid();
	virtual ~Humanoid();
	virtual string whoami(void) = 0; //pure virtual function
	void fight(Humanoid *, Humanoid *);
	virtual int getRank(void) = 0;
protected:
	int height; //inches
		int weight; //lbs
		string eyeColor;
		char gender;
		int numArms;
		int numLegs;

};
#endif /* HUMANOID_HPP_ */
