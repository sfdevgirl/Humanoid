/*
 * GoodSuper.hpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#ifndef GOODSUPER_HPP_
#define GOODSUPER_HPP_

#include "Good.hpp"
#include "SuperHuman.hpp"

class GoodSuper: public SuperHuman, public Good  {
public:
	GoodSuper();
	virtual ~GoodSuper();
	void goodAct();
	virtual string whoami(void);
	int rank;
	virtual int getRank(void);
};

#endif /* GOODSUPER_HPP_ */
