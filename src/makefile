+CXX = g++
+CXXFLAGS = -Wall -g

all: main.o Humanoid.o Human.o SuperHuman.o Good.o Evil.o EvilHuman.o\
	GoodHuman.o EvilSuper.o GoodSuper.o Situation.o
	$(CXX) $(CXXFLAGS) -o Humanoid main.o SuperHuman.o Human.o Humanoid.o EvilHuman.o\
		EvilSuper.o GoodSuper.o GoodHuman.o Good.o Evil.o Situation.o 

main.o: main.cpp Humanoid.hpp Human.hpp SuperHuman.hpp GoodHuman.hpp \
		EvilHuman.hpp EvilSuper.hpp GoodSuper.hpp Situation.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp 

SuperHuman.o: SuperHuman.hpp Humanoid.hpp 

Humanoid.o: Humanoid.hpp   

Human.o: Human.hpp Humanoid.hpp

Good.o: Good.hpp

Evil.o: Evil.hpp  

EvilHuman.o: EvilHuman.hpp Evil.hpp Human.hpp
 
GoodHuman.o: GoodHuman.hpp Good.hpp Human.hpp

EvilSuper.o: EvilSuper.hpp Evil.hpp SuperHuman.hpp

GoodSuper.o: GoodSuper.hpp Good.hpp SuperHuman.hpp

Situation.o: Situation.hpp Humanoid.hpp

clean:
 	rm *.o Humanoid