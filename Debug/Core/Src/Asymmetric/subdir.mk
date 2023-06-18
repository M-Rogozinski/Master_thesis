################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Asymmetric/asn1.c \
../Core/Src/Asymmetric/asymmetric.c \
../Core/Src/Asymmetric/curve25519.c \
../Core/Src/Asymmetric/curve448.c \
../Core/Src/Asymmetric/dh.c \
../Core/Src/Asymmetric/dsa.c \
../Core/Src/Asymmetric/ec.c \
../Core/Src/Asymmetric/ec_curves.c \
../Core/Src/Asymmetric/ecdh.c \
../Core/Src/Asymmetric/ecdsa.c \
../Core/Src/Asymmetric/ed25519.c \
../Core/Src/Asymmetric/ed448.c \
../Core/Src/Asymmetric/eddsa.c \
../Core/Src/Asymmetric/hmac.c \
../Core/Src/Asymmetric/mpi.c \
../Core/Src/Asymmetric/oid.c \
../Core/Src/Asymmetric/rsa.c \
../Core/Src/Asymmetric/shake.c \
../Core/Src/Asymmetric/x25519.c \
../Core/Src/Asymmetric/x448.c 

OBJS += \
./Core/Src/Asymmetric/asn1.o \
./Core/Src/Asymmetric/asymmetric.o \
./Core/Src/Asymmetric/curve25519.o \
./Core/Src/Asymmetric/curve448.o \
./Core/Src/Asymmetric/dh.o \
./Core/Src/Asymmetric/dsa.o \
./Core/Src/Asymmetric/ec.o \
./Core/Src/Asymmetric/ec_curves.o \
./Core/Src/Asymmetric/ecdh.o \
./Core/Src/Asymmetric/ecdsa.o \
./Core/Src/Asymmetric/ed25519.o \
./Core/Src/Asymmetric/ed448.o \
./Core/Src/Asymmetric/eddsa.o \
./Core/Src/Asymmetric/hmac.o \
./Core/Src/Asymmetric/mpi.o \
./Core/Src/Asymmetric/oid.o \
./Core/Src/Asymmetric/rsa.o \
./Core/Src/Asymmetric/shake.o \
./Core/Src/Asymmetric/x25519.o \
./Core/Src/Asymmetric/x448.o 

C_DEPS += \
./Core/Src/Asymmetric/asn1.d \
./Core/Src/Asymmetric/asymmetric.d \
./Core/Src/Asymmetric/curve25519.d \
./Core/Src/Asymmetric/curve448.d \
./Core/Src/Asymmetric/dh.d \
./Core/Src/Asymmetric/dsa.d \
./Core/Src/Asymmetric/ec.d \
./Core/Src/Asymmetric/ec_curves.d \
./Core/Src/Asymmetric/ecdh.d \
./Core/Src/Asymmetric/ecdsa.d \
./Core/Src/Asymmetric/ed25519.d \
./Core/Src/Asymmetric/ed448.d \
./Core/Src/Asymmetric/eddsa.d \
./Core/Src/Asymmetric/hmac.d \
./Core/Src/Asymmetric/mpi.d \
./Core/Src/Asymmetric/oid.d \
./Core/Src/Asymmetric/rsa.d \
./Core/Src/Asymmetric/shake.d \
./Core/Src/Asymmetric/x25519.d \
./Core/Src/Asymmetric/x448.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Asymmetric/%.o Core/Src/Asymmetric/%.su Core/Src/Asymmetric/%.cyclo: ../Core/Src/Asymmetric/%.c Core/Src/Asymmetric/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Asymmetric

clean-Core-2f-Src-2f-Asymmetric:
	-$(RM) ./Core/Src/Asymmetric/asn1.cyclo ./Core/Src/Asymmetric/asn1.d ./Core/Src/Asymmetric/asn1.o ./Core/Src/Asymmetric/asn1.su ./Core/Src/Asymmetric/asymmetric.cyclo ./Core/Src/Asymmetric/asymmetric.d ./Core/Src/Asymmetric/asymmetric.o ./Core/Src/Asymmetric/asymmetric.su ./Core/Src/Asymmetric/curve25519.cyclo ./Core/Src/Asymmetric/curve25519.d ./Core/Src/Asymmetric/curve25519.o ./Core/Src/Asymmetric/curve25519.su ./Core/Src/Asymmetric/curve448.cyclo ./Core/Src/Asymmetric/curve448.d ./Core/Src/Asymmetric/curve448.o ./Core/Src/Asymmetric/curve448.su ./Core/Src/Asymmetric/dh.cyclo ./Core/Src/Asymmetric/dh.d ./Core/Src/Asymmetric/dh.o ./Core/Src/Asymmetric/dh.su ./Core/Src/Asymmetric/dsa.cyclo ./Core/Src/Asymmetric/dsa.d ./Core/Src/Asymmetric/dsa.o ./Core/Src/Asymmetric/dsa.su ./Core/Src/Asymmetric/ec.cyclo ./Core/Src/Asymmetric/ec.d ./Core/Src/Asymmetric/ec.o ./Core/Src/Asymmetric/ec.su ./Core/Src/Asymmetric/ec_curves.cyclo ./Core/Src/Asymmetric/ec_curves.d ./Core/Src/Asymmetric/ec_curves.o ./Core/Src/Asymmetric/ec_curves.su ./Core/Src/Asymmetric/ecdh.cyclo ./Core/Src/Asymmetric/ecdh.d ./Core/Src/Asymmetric/ecdh.o ./Core/Src/Asymmetric/ecdh.su ./Core/Src/Asymmetric/ecdsa.cyclo ./Core/Src/Asymmetric/ecdsa.d ./Core/Src/Asymmetric/ecdsa.o ./Core/Src/Asymmetric/ecdsa.su ./Core/Src/Asymmetric/ed25519.cyclo ./Core/Src/Asymmetric/ed25519.d ./Core/Src/Asymmetric/ed25519.o ./Core/Src/Asymmetric/ed25519.su ./Core/Src/Asymmetric/ed448.cyclo ./Core/Src/Asymmetric/ed448.d ./Core/Src/Asymmetric/ed448.o ./Core/Src/Asymmetric/ed448.su ./Core/Src/Asymmetric/eddsa.cyclo ./Core/Src/Asymmetric/eddsa.d ./Core/Src/Asymmetric/eddsa.o ./Core/Src/Asymmetric/eddsa.su ./Core/Src/Asymmetric/hmac.cyclo ./Core/Src/Asymmetric/hmac.d ./Core/Src/Asymmetric/hmac.o ./Core/Src/Asymmetric/hmac.su ./Core/Src/Asymmetric/mpi.cyclo ./Core/Src/Asymmetric/mpi.d ./Core/Src/Asymmetric/mpi.o ./Core/Src/Asymmetric/mpi.su ./Core/Src/Asymmetric/oid.cyclo ./Core/Src/Asymmetric/oid.d ./Core/Src/Asymmetric/oid.o ./Core/Src/Asymmetric/oid.su ./Core/Src/Asymmetric/rsa.cyclo ./Core/Src/Asymmetric/rsa.d ./Core/Src/Asymmetric/rsa.o ./Core/Src/Asymmetric/rsa.su ./Core/Src/Asymmetric/shake.cyclo ./Core/Src/Asymmetric/shake.d ./Core/Src/Asymmetric/shake.o ./Core/Src/Asymmetric/shake.su ./Core/Src/Asymmetric/x25519.cyclo ./Core/Src/Asymmetric/x25519.d ./Core/Src/Asymmetric/x25519.o ./Core/Src/Asymmetric/x25519.su ./Core/Src/Asymmetric/x448.cyclo ./Core/Src/Asymmetric/x448.d ./Core/Src/Asymmetric/x448.o ./Core/Src/Asymmetric/x448.su

.PHONY: clean-Core-2f-Src-2f-Asymmetric

