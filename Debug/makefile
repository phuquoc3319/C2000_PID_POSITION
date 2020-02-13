################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./DRIVER/adc.obj" \
"./DRIVER/asysctl.obj" \
"./DRIVER/can.obj" \
"./DRIVER/cla.obj" \
"./DRIVER/clb.obj" \
"./DRIVER/cmpss.obj" \
"./DRIVER/cputimer.obj" \
"./DRIVER/dac.obj" \
"./DRIVER/dcsm.obj" \
"./DRIVER/device.obj" \
"./DRIVER/dma.obj" \
"./DRIVER/ecap.obj" \
"./DRIVER/emif.obj" \
"./DRIVER/epwm.obj" \
"./DRIVER/eqep.obj" \
"./DRIVER/flash.obj" \
"./DRIVER/gpio.obj" \
"./DRIVER/hrpwm.obj" \
"./DRIVER/i2c.obj" \
"./DRIVER/interrupt.obj" \
"./DRIVER/mcbsp.obj" \
"./DRIVER/memcfg.obj" \
"./DRIVER/sci.obj" \
"./DRIVER/sdfm.obj" \
"./DRIVER/spi.obj" \
"./DRIVER/sysctl.obj" \
"./DRIVER/upp.obj" \
"./DRIVER/usb.obj" \
"./DRIVER/version.obj" \
"./DRIVER/xbar.obj" \
"./ENCODER/encoder.obj" \
"./PID/PID_C3.obj" \
"./PWM/pwm.obj" \
"./TIMER/timer.obj" \
"../2837xD_FLASH_lnk_cpu1.cmd" \
"../F2837xD_Headers_nonBIOS_cpu1.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include DRIVER/subdir_vars.mk
-include ENCODER/subdir_vars.mk
-include PID/subdir_vars.mk
-include PWM/subdir_vars.mk
-include TIMER/subdir_vars.mk
-include subdir_rules.mk
-include DRIVER/subdir_rules.mk
-include ENCODER/subdir_rules.mk
-include PID/subdir_rules.mk
-include PWM/subdir_rules.mk
-include TIMER/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
POSITION.out \

EXE_OUTPUTS__QUOTED += \
"POSITION.out" \

BIN_OUTPUTS += \
POSITION.hex \

BIN_OUTPUTS__QUOTED += \
"POSITION.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "POSITION.out"

# Tool invocations
POSITION.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --define=CPU1 --define=_LAUNCHXL_F28379D --define=_FLASH -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"POSITION.map" --stack_size=0x200 --warn_sections -i"C:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/lib" -i"C:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="POSITION_linkInfo.xml" --rom_model -o "POSITION.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

POSITION.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C2000 Hex Utility'
	"C:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/bin/hex2000"  -o "POSITION.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "DRIVER\adc.obj" "DRIVER\asysctl.obj" "DRIVER\can.obj" "DRIVER\cla.obj" "DRIVER\clb.obj" "DRIVER\cmpss.obj" "DRIVER\cputimer.obj" "DRIVER\dac.obj" "DRIVER\dcsm.obj" "DRIVER\device.obj" "DRIVER\dma.obj" "DRIVER\ecap.obj" "DRIVER\emif.obj" "DRIVER\epwm.obj" "DRIVER\eqep.obj" "DRIVER\flash.obj" "DRIVER\gpio.obj" "DRIVER\hrpwm.obj" "DRIVER\i2c.obj" "DRIVER\interrupt.obj" "DRIVER\mcbsp.obj" "DRIVER\memcfg.obj" "DRIVER\sci.obj" "DRIVER\sdfm.obj" "DRIVER\spi.obj" "DRIVER\sysctl.obj" "DRIVER\upp.obj" "DRIVER\usb.obj" "DRIVER\version.obj" "DRIVER\xbar.obj" "ENCODER\encoder.obj" "PID\PID_C3.obj" "PWM\pwm.obj" "TIMER\timer.obj" 
	-$(RM) "main.d" "DRIVER\adc.d" "DRIVER\asysctl.d" "DRIVER\can.d" "DRIVER\cla.d" "DRIVER\clb.d" "DRIVER\cmpss.d" "DRIVER\cputimer.d" "DRIVER\dac.d" "DRIVER\dcsm.d" "DRIVER\device.d" "DRIVER\dma.d" "DRIVER\ecap.d" "DRIVER\emif.d" "DRIVER\epwm.d" "DRIVER\eqep.d" "DRIVER\flash.d" "DRIVER\gpio.d" "DRIVER\hrpwm.d" "DRIVER\i2c.d" "DRIVER\interrupt.d" "DRIVER\mcbsp.d" "DRIVER\memcfg.d" "DRIVER\sci.d" "DRIVER\sdfm.d" "DRIVER\spi.d" "DRIVER\sysctl.d" "DRIVER\upp.d" "DRIVER\usb.d" "DRIVER\version.d" "DRIVER\xbar.d" "ENCODER\encoder.d" "PID\PID_C3.d" "PWM\pwm.d" "TIMER\timer.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

