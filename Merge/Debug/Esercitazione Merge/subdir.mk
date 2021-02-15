################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Esercitazione\ Merge/main.cpp 

OBJS += \
./Esercitazione\ Merge/main.o 

CPP_DEPS += \
./Esercitazione\ Merge/main.d 


# Each subdirectory must supply rules for building sources it contributes
Esercitazione\ Merge/main.o: ../Esercitazione\ Merge/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Esercitazione Merge/main.d" -MT"Esercitazione\ Merge/main.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


