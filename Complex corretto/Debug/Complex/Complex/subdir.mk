################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Complex/Complex/Complex.cpp \
../Complex/Complex/ComplexMain.cpp 

OBJS += \
./Complex/Complex/Complex.o \
./Complex/Complex/ComplexMain.o 

CPP_DEPS += \
./Complex/Complex/Complex.d \
./Complex/Complex/ComplexMain.d 


# Each subdirectory must supply rules for building sources it contributes
Complex/Complex/%.o: ../Complex/Complex/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


