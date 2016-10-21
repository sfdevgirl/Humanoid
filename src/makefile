all: main.o Humanoid.o Human.o SuperHuman.o Good.o Evil.o EvilHuman.o\
	GoodHuman.o EvilSuper.o GoodSuper.o Situation.o
	g++ -o Humanoid main.o SuperHuman.o Human.o Humanoid.o EvilHuman.o EvilSuper.o GoodSuper.o GoodHuman.o Good.o Evil.o Situation.o 

main.o: main.cpp Humanoid.hpp Human.hpp SuperHuman.hpp GoodHuman.hpp \
		EvilHuman.hpp EvilSuper.hpp GoodSuper.hpp Situation.hpp
	g++ -c main.cpp 

Humanoid.o: Humanoid.hpp                                                
	g++ -c Humanoid.cpp

Human.o: Human.hpp
	g++ -c Human.cpp

SuperHuman.o: SuperHuman.hpp  
	g++ -c SuperHuman.cpp

Good.o: Good.hpp
	g++ -c Good.cpp

Evil.o: Evil.hpp                                                                                   
	g++ -c Evil.cpp

EvilHuman.o: EvilHuman.hpp
	g++ -c EvilHuman.cpp

GoodHuman.o: GoodHuman.hpp
	g++ -c GoodHuman.cpp

EvilSuper.o: EvilSuper.hpp
	g++ -c EvilSuper.cpp

GoodSuper.o: GoodSuper.hpp
	g++ -c GoodSuper.cpp

Situation.o: Situation.hpp Humanoid.hpp
	g++ -c Situation.cpp

Clean:
	rm *.o Humanoid
