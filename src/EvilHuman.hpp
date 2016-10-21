/*
 * EvilHuman.hpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#ifndef EVILHUMAN_HPP_
#define EVILHUMAN_HPP_

#include "Evil.hpp"
#include "Human.hpp"

class EvilHuman: public Human, public Evil {
public:
	EvilHuman();
	virtual ~EvilHuman();
	virtual string whoami(void);
//	void evilAct(Humanoid *);
	int rank;
	int getRank(void);
};

#endif /* EVILHUMAN_HPP_ */
