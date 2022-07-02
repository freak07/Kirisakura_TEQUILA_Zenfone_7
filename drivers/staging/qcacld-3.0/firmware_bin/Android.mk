LOCAL_PATH := $(call my-dir)

ifeq ($(ASUS_BUILD_PROJECT),ZS661KS)
$(shell cp $(LOCAL_PATH)/bdwlan.e17 $(TARGET_OUT_VENDOR)/firmware)
$(shell cp $(LOCAL_PATH)/CNbdwlan.e17 $(TARGET_OUT_VENDOR)/firmware)
#$(shell cp $(LOCAL_PATH)/amss20.bin $(TARGET_OUT_VENDOR)/firmware)
#$(shell cp $(LOCAL_PATH)/m3.bin $(TARGET_OUT_VENDOR)/firmware)
else
$(shell cp $(LOCAL_PATH)/bdwlan.e15 $(TARGET_OUT_VENDOR)/firmware/bdwlan.elf)
$(shell cp $(LOCAL_PATH)/amss20.bin $(TARGET_OUT_VENDOR)/firmware)
$(shell cp $(LOCAL_PATH)/m3.bin $(TARGET_OUT_VENDOR)/firmware)
$(shell cp $(LOCAL_PATH)/Data.msc $(TARGET_OUT_VENDOR)/firmware)
endif

$(shell cp $(LOCAL_PATH)/regdb.bin $(TARGET_OUT_VENDOR)/firmware)

ifeq ($(TARGET_SKU),CN)
$(shell cp $(LOCAL_PATH)/WCNSS_qcom_cfg_CN.ini $(TARGET_OUT_VENDOR)/firmware/wlan/qca_cld/qca6390/WCNSS_qcom_cfg.ini)
else
$(shell cp $(LOCAL_PATH)/WCNSS_qcom_cfg.ini $(TARGET_OUT_VENDOR)/firmware/wlan/qca_cld/qca6390/WCNSS_qcom_cfg.ini)
endif

