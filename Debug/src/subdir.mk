################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Evil.cpp \
../src/EvilHuman.cpp \
../src/EvilSuper.cpp \
../src/Good.cpp \
../src/GoodHuman.cpp \
../src/GoodSuper.cpp \
../src/Human.cpp \
../src/Humanoid.cpp \
../src/Situation.cpp \
../src/SuperHuman.cpp \
../src/main.cpp 

O_SRCS += \
../src/Evil.o \
../src/EvilHuman.o \
../src/EvilSuper.o \
../src/Good.o \
../src/GoodHuman.o \
../src/GoodSuper.o \
../src/Human.o \
../src/Humanoid.o \
../src/SuperHuman.o \
../src/main.o \
../src/superHuman.o 

OBJS += \
./src/Evil.o \
./src/EvilHuman.o \
./src/EvilSuper.o \
./src/Good.o \
./src/GoodHuman.o \
./src/GoodSuper.o \
./src/Human.o \
./src/Humanoid.o \
./src/Situation.o \
./src/SuperHuman.o \
./src/main.o 

CPP_DEPS += \
./src/Evil.d \
./src/EvilHuman.d \
./src/EvilSuper.d \
./src/Good.d \
./src/GoodHuman.d \
./src/GoodSuper.d \
./src/Human.d \
./src/Humanoid.d \
./src/Situation.d \
./src/SuperHuman.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


