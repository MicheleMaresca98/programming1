################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../__MACOSX/Complex/._Complex.cpp \
../__MACOSX/Complex/._ComplexMain.cpp 

OBJS += \
./__MACOSX/Complex/._Complex.o \
./__MACOSX/Complex/._ComplexMain.o 

CPP_DEPS += \
./__MACOSX/Complex/._Complex.d \
./__MACOSX/Complex/._ComplexMain.d 


# Each subdirectory must supply rules for building sources it contributes
__MACOSX/Complex/%.o: ../__MACOSX/Complex/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


