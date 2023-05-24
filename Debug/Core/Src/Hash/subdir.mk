################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Hash/sha1.c \
../Core/Src/Hash/sha256.c \
../Core/Src/Hash/sha384.c \
../Core/Src/Hash/sha512.c \
../Core/Src/Hash/whirlpool.c 

OBJS += \
./Core/Src/Hash/sha1.o \
./Core/Src/Hash/sha256.o \
./Core/Src/Hash/sha384.o \
./Core/Src/Hash/sha512.o \
./Core/Src/Hash/whirlpool.o 

C_DEPS += \
./Core/Src/Hash/sha1.d \
./Core/Src/Hash/sha256.d \
./Core/Src/Hash/sha384.d \
./Core/Src/Hash/sha512.d \
./Core/Src/Hash/whirlpool.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Hash/%.o Core/Src/Hash/%.su Core/Src/Hash/%.cyclo: ../Core/Src/Hash/%.c Core/Src/Hash/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Hash

clean-Core-2f-Src-2f-Hash:
	-$(RM) ./Core/Src/Hash/sha1.cyclo ./Core/Src/Hash/sha1.d ./Core/Src/Hash/sha1.o ./Core/Src/Hash/sha1.su ./Core/Src/Hash/sha256.cyclo ./Core/Src/Hash/sha256.d ./Core/Src/Hash/sha256.o ./Core/Src/Hash/sha256.su ./Core/Src/Hash/sha384.cyclo ./Core/Src/Hash/sha384.d ./Core/Src/Hash/sha384.o ./Core/Src/Hash/sha384.su ./Core/Src/Hash/sha512.cyclo ./Core/Src/Hash/sha512.d ./Core/Src/Hash/sha512.o ./Core/Src/Hash/sha512.su ./Core/Src/Hash/whirlpool.cyclo ./Core/Src/Hash/whirlpool.d ./Core/Src/Hash/whirlpool.o ./Core/Src/Hash/whirlpool.su

.PHONY: clean-Core-2f-Src-2f-Hash

