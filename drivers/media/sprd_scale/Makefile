ifeq ($(CONFIG_ARCH_SCX15),y)
ccflags-y += -Idrivers/media/sprd_dcam/scx15
else
ccflags-y += -Idrivers/media/sprd_dcam/sc8830
endif

ifeq ($(CONFIG_ARCH_SCX35),y)
ifeq ($(CONFIG_ARCH_SCX30G),y)
DEFS = -DVERSION3T=1
ccflags-y += $(DEFS)
else ifeq ($(CONFIG_ARCH_SCX35L),y)
DEFS = -DVERSION3L=1
ccflags-y += $(DEFS)
endif
ccflags-y  += -Idrivers/media/sprd_scale/common -Idrivers/media/sprd_scale/sc8830 -Idrivers/media/sprd_dcam/common

sprd_scale-objs := common/sin_cos.o common/gen_scale_coef.o common/img_scale.o  sc8830/scale_drv.o
obj-y += sprd_scale.o
endif

