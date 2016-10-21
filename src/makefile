all: main.o SuperHuman.o Human.o Humanoid.o EvilHuman.o EvilSuper.o GoodHuman.o GoodSuper.o Good.o Evil.o Situation.o
	g++ -o Humanoid main.o SuperHuman.o Human.o Humanoid.o EvilHuman.o EvilSuper.o GoodSuper.o GoodHuman.o Good.o Evil.o Situation.o 

main.o: main.cpp SuperHuman.o Human.o Humanoid.o EvilHuman.o EvilSuper.o GoodSuper.o GoodHuman.o Evil.o Good.o Situation.o
	g++ -c main.cpp 
Humanoid.o: Humanoid.cpp                                                        
	      g++ -c Humanoid.cpp
SuperHuman.o: SuperHuman.cpp  Humanoid.o
	g++ -c SuperHuman.cpp

Human.o: Human.cpp Humanoid.o
	g++ -c Human.cpp

Good.o: Good.cpp
	      g++ -c Good.cpp

Evil.o: Evil.cpp
	                                                                                   
	g++ -c Evil.cpp																					                                                                     

EvilHuman.o: EvilHuman.cpp  Human.o Evil.o
	g++ -c EvilHuman.cpp

GoodHuman.o: GoodHuman.cpp Human.o Good.o
	g++ -c GoodHuman.cpp

EvilSuper.o: EvilSuper.cpp Evil.o SuperHuman.o
	g++ -c EvilSuper.cpp

GoodSuper.o: GoodSuper.cpp Good.o SuperHuman.o
	g++ -c GoodSuper.cpp

Situation.o: Situation.cpp 
	g++ -c Situation.cpp


Clean:
	rm *.o Humanoid
