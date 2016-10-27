/*
 * GoodHuman.hpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#ifndef GOODHUMAN_HPP_
#define GOODHUMAN_HPP_

#include "Good.hpp"
#include "Human.hpp"

class GoodHuman: public Human, public Good  {
public:
	GoodHuman();
	virtual ~GoodHuman();
	virtual void goodAct(void);
	virtual string whoami(void);
	int rank;
	virtual int getRank(void);
};

#endif /* GOODHUMAN_HPP_ */
