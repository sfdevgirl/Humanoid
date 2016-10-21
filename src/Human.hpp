/*
 * Human.hpp
 *
 *  Created on: Oct 18, 2016
 *      Author: linuxuser
 */

#ifndef HUMAN_HPP_
#define HUMAN_HPP_

#include "Humanoid.hpp"


class Human: public Humanoid {
public:
	Human();
	virtual ~Human();
	virtual string whoami(void);
protected:

};

#endif /* HUMAN_HPP_ */
