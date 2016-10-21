/*
 * superHuman.hpp
 *
 *  Created on: Oct 18, 2016
 *      Author: linuxuser
 */

#ifndef SUPERHUMAN_HPP_
#define SUPERHUMAN_HPP_
#include <string>
#include "Humanoid.hpp"

class SuperHuman: public Humanoid {
public:
	SuperHuman();
	virtual ~SuperHuman();
	virtual int getRank(void) = 0; //pure
	bool fly(void);
	virtual string whoami(void) = 0; //pure


};

#endif /* SUPERHUMAN_HPP_ */
