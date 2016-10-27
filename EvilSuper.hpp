/*
 * EvilSuper.hpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#ifndef EVILSUPER_HPP_
#define EVILSUPER_HPP_

#include "Evil.hpp"
#include "SuperHuman.hpp"

class EvilSuper: public SuperHuman, public Evil  {
public:
	EvilSuper();
	virtual ~EvilSuper();
	virtual string whoami(void);
	int rank;
	virtual int getRank(void);
};

#endif /* EVILSUPER_HPP_ */
