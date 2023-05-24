################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/rng/yarrow.c 

OBJS += \
./Core/Src/rng/yarrow.o 

C_DEPS += \
./Core/Src/rng/yarrow.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/rng/%.o Core/Src/rng/%.su Core/Src/rng/%.cyclo: ../Core/Src/rng/%.c Core/Src/rng/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-rng

clean-Core-2f-Src-2f-rng:
	-$(RM) ./Core/Src/rng/yarrow.cyclo ./Core/Src/rng/yarrow.d ./Core/Src/rng/yarrow.o ./Core/Src/rng/yarrow.su

.PHONY: clean-Core-2f-Src-2f-rng

