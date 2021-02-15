################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Esercitazione\ PrintListBackWords/main.cpp 

OBJS += \
./Esercitazione\ PrintListBackWords/main.o 

CPP_DEPS += \
./Esercitazione\ PrintListBackWords/main.d 


# Each subdirectory must supply rules for building sources it contributes
Esercitazione\ PrintListBackWords/main.o: ../Esercitazione\ PrintListBackWords/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Esercitazione PrintListBackWords/main.d" -MT"Esercitazione\ PrintListBackWords/main.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


