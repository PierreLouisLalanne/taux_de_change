deps_config := \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/app_update/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/aws_iot/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/esp8266/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/freertos/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/libsodium/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/log/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/lwip/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/mdns/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/mqtt/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/newlib/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/pthread/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/ssl/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/tcpip_adapter/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/wpa_supplicant/Kconfig \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/bootloader/Kconfig.projbuild \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/esptool_py/Kconfig.projbuild \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/components/partition_table/Kconfig.projbuild \
	/home/vagrant/esp-rt/ESP8266_RTOS_SDK/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
