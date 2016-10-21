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
	virtual int getRank(void);
	bool fly(void);
	virtual string whoami(void);
	int rank;

};

#endif /* SUPERHUMAN_HPP_ */
