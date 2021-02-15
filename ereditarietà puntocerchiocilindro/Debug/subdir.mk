################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../cerchio.cpp \
../cilindro.cpp \
../driver.cpp \
../punto.cpp 

OBJS += \
./cerchio.o \
./cilindro.o \
./driver.o \
./punto.o 

CPP_DEPS += \
./cerchio.d \
./cilindro.d \
./driver.d \
./punto.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


