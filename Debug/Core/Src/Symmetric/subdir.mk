################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Symmetric/aes.c \
../Core/Src/Symmetric/blowfish.c \
../Core/Src/Symmetric/des.c \
../Core/Src/Symmetric/des3.c \
../Core/Src/Symmetric/rc6.c \
../Core/Src/Symmetric/symmetric.c \
../Core/Src/Symmetric/twofish.c 

OBJS += \
./Core/Src/Symmetric/aes.o \
./Core/Src/Symmetric/blowfish.o \
./Core/Src/Symmetric/des.o \
./Core/Src/Symmetric/des3.o \
./Core/Src/Symmetric/rc6.o \
./Core/Src/Symmetric/symmetric.o \
./Core/Src/Symmetric/twofish.o 

C_DEPS += \
./Core/Src/Symmetric/aes.d \
./Core/Src/Symmetric/blowfish.d \
./Core/Src/Symmetric/des.d \
./Core/Src/Symmetric/des3.d \
./Core/Src/Symmetric/rc6.d \
./Core/Src/Symmetric/symmetric.d \
./Core/Src/Symmetric/twofish.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Symmetric/%.o Core/Src/Symmetric/%.su Core/Src/Symmetric/%.cyclo: ../Core/Src/Symmetric/%.c Core/Src/Symmetric/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Symmetric

clean-Core-2f-Src-2f-Symmetric:
	-$(RM) ./Core/Src/Symmetric/aes.cyclo ./Core/Src/Symmetric/aes.d ./Core/Src/Symmetric/aes.o ./Core/Src/Symmetric/aes.su ./Core/Src/Symmetric/blowfish.cyclo ./Core/Src/Symmetric/blowfish.d ./Core/Src/Symmetric/blowfish.o ./Core/Src/Symmetric/blowfish.su ./Core/Src/Symmetric/des.cyclo ./Core/Src/Symmetric/des.d ./Core/Src/Symmetric/des.o ./Core/Src/Symmetric/des.su ./Core/Src/Symmetric/des3.cyclo ./Core/Src/Symmetric/des3.d ./Core/Src/Symmetric/des3.o ./Core/Src/Symmetric/des3.su ./Core/Src/Symmetric/rc6.cyclo ./Core/Src/Symmetric/rc6.d ./Core/Src/Symmetric/rc6.o ./Core/Src/Symmetric/rc6.su ./Core/Src/Symmetric/symmetric.cyclo ./Core/Src/Symmetric/symmetric.d ./Core/Src/Symmetric/symmetric.o ./Core/Src/Symmetric/symmetric.su ./Core/Src/Symmetric/twofish.cyclo ./Core/Src/Symmetric/twofish.d ./Core/Src/Symmetric/twofish.o ./Core/Src/Symmetric/twofish.su

.PHONY: clean-Core-2f-Src-2f-Symmetric

