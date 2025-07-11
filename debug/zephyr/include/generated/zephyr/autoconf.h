#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 2048
#define CONFIG_BT_LONG_WQ_STACK_SIZE 2560
#define CONFIG_MAIN_STACK_SIZE 2048
#define CONFIG_SERIAL 1
#define CONFIG_SPI 1
#define CONFIG_NET_IPV6 1
#define CONFIG_NUM_IRQS 75
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 96000000
#define CONFIG_FLASH_SIZE 1024
#define CONFIG_FLASH_BASE_ADDRESS 0x10000000
#define CONFIG_MP_MAX_NUM_CPUS 1
#define CONFIG_SOC_RESET_HOOK 1
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 10000
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_XIP 1
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_COUNTER 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_CORTEX_M_SYSTICK 1
#define CONFIG_CLOCK_CONTROL_INIT_PRIORITY 30
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_TIMESLICE_SIZE 20
#define CONFIG_FLASH_LOAD_OFFSET 0x0
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_FLASH_FILL_BUFFER_SIZE 32
#define CONFIG_FLASH 1
#define CONFIG_NET_UDP_CHECKSUM 1
#define CONFIG_BT_BUF_EVT_RX_COUNT 16
#define CONFIG_BT_BUF_ACL_TX_COUNT 12
#define CONFIG_NXP_RF_IMU 1
#define CONFIG_MCUX_FLASH_K4_API 1
#define CONFIG_BT_HCI_SET_PUBLIC_ADDR 1
#define CONFIG_HCI_NXP_RX_THREAD 1
#define CONFIG_GPIO 1
#define CONFIG_SOC_FLASH_MCUX 1
#define CONFIG_NET_L2_IEEE802154 1
#define CONFIG_LOG 1
#define CONFIG_DCACHE_LINE_SIZE 32
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 4
#define CONFIG_LOG_DOMAIN_NAME ""
#define CONFIG_UART_USE_RUNTIME_CONFIGURE 1
#define CONFIG_CONSOLE 1
#define CONFIG_COMMON_LIBC_MALLOC_ARENA_SIZE -1
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_FLASH_INIT_PRIORITY 50
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_SRAM_OFFSET 0x0
#define CONFIG_ARCH_IRQ_VECTOR_TABLE_ALIGN 4
#define CONFIG_SPI_NOR 1
#define CONFIG_ISR_TABLES_LOCAL_DECLARATION_SUPPORTED 1
#define CONFIG_BT_BUF_CMD_TX_COUNT 1
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_ICACHE_LINE_SIZE 32
#define CONFIG_BT_BUF_CMD_TX_SIZE 65
#define CONFIG_BT_BUF_EVT_RX_SIZE 68
#define CONFIG_BT_BUF_ACL_TX_SIZE 27
#define CONFIG_BT_BUF_ACL_RX_SIZE 27
#define CONFIG_DT_HAS_ARM_ARMV8M_MPU_ENABLED 1
#define CONFIG_DT_HAS_ARM_ARMV8M_SYSTICK_ENABLED 1
#define CONFIG_DT_HAS_ARM_CORTEX_M33F_ENABLED 1
#define CONFIG_DT_HAS_ARM_V8M_NVIC_ENABLED 1
#define CONFIG_DT_HAS_FIXED_PARTITIONS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_KEYS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_LEDS_ENABLED 1
#define CONFIG_DT_HAS_JEDEC_SPI_NOR_ENABLED 1
#define CONFIG_DT_HAS_MMIO_SRAM_ENABLED 1
#define CONFIG_DT_HAS_NXP_ELE_TRNG_ENABLED 1
#define CONFIG_DT_HAS_NXP_FLEXCAN_ENABLED 1
#define CONFIG_DT_HAS_NXP_FXLS8974_ENABLED 1
#define CONFIG_DT_HAS_NXP_HCI_BLE_ENABLED 1
#define CONFIG_DT_HAS_NXP_KINETIS_GPIO_ENABLED 1
#define CONFIG_DT_HAS_NXP_KINETIS_TPM_ENABLED 1
#define CONFIG_DT_HAS_NXP_LPC_LPADC_ENABLED 1
#define CONFIG_DT_HAS_NXP_LPI2C_ENABLED 1
#define CONFIG_DT_HAS_NXP_LPSPI_ENABLED 1
#define CONFIG_DT_HAS_NXP_LPTMR_ENABLED 1
#define CONFIG_DT_HAS_NXP_LPUART_ENABLED 1
#define CONFIG_DT_HAS_NXP_MCXW_IEEE802154_ENABLED 1
#define CONFIG_DT_HAS_NXP_MSF1_ENABLED 1
#define CONFIG_DT_HAS_NXP_NBU_ENABLED 1
#define CONFIG_DT_HAS_NXP_PORT_PINCTRL_ENABLED 1
#define CONFIG_DT_HAS_NXP_PORT_PINMUX_ENABLED 1
#define CONFIG_DT_HAS_NXP_RTC_ENABLED 1
#define CONFIG_DT_HAS_NXP_SCG_K4_ENABLED 1
#define CONFIG_DT_HAS_NXP_VREF_ENABLED 1
#define CONFIG_DT_HAS_NXP_WDOG32_ENABLED 1
#define CONFIG_DT_HAS_PWM_LEDS_ENABLED 1
#define CONFIG_DT_HAS_SOC_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_MEMORY_REGION_ENABLED 1
#define CONFIG_TAINT_BLOBS 1
#define CONFIG_ZEPHYR_ACPICA_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_MODULE 1
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_ZEPHYR_CMSIS_DSP_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_NN_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_6_MODULE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_ZEPHYR_FATFS_MODULE 1
#define CONFIG_ZEPHYR_ADI_MODULE 1
#define CONFIG_ZEPHYR_HAL_AFBR_MODULE 1
#define CONFIG_ZEPHYR_HAL_AMBIQ_MODULE 1
#define CONFIG_ZEPHYR_ATMEL_MODULE 1
#define CONFIG_ZEPHYR_HAL_BOUFFALOLAB_MODULE 1
#define CONFIG_ZEPHYR_HAL_ESPRESSIF_MODULE 1
#define CONFIG_ZEPHYR_HAL_ETHOS_U_MODULE 1
#define CONFIG_ZEPHYR_HAL_GIGADEVICE_MODULE 1
#define CONFIG_ZEPHYR_HAL_INFINEON_MODULE 1
#define CONFIG_ZEPHYR_HAL_INTEL_MODULE 1
#define CONFIG_ZEPHYR_MICROCHIP_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_ZEPHYR_NUVOTON_MODULE 1
#define CONFIG_ZEPHYR_HAL_NXP_MODULE 1
#define CONFIG_HAS_MCUX 1
#define CONFIG_ZEPHYR_HAL_NXP_MODULE_BLOBS 1
#define CONFIG_ZEPHYR_OPENISA_MODULE 1
#define CONFIG_ZEPHYR_QUICKLOGIC_MODULE 1
#define CONFIG_ZEPHYR_HAL_RENESAS_MODULE 1
#define CONFIG_ZEPHYR_HAL_RPI_PICO_MODULE 1
#define CONFIG_ZEPHYR_HAL_SILABS_MODULE 1
#define CONFIG_ZEPHYR_HAL_ST_MODULE 1
#define CONFIG_ZEPHYR_HAL_STM32_MODULE 1
#define CONFIG_ZEPHYR_HAL_TDK_MODULE 1
#define CONFIG_ZEPHYR_HAL_TELINK_MODULE 1
#define CONFIG_ZEPHYR_TI_MODULE 1
#define CONFIG_ZEPHYR_HAL_WCH_MODULE 1
#define CONFIG_ZEPHYR_HAL_WURTHELEKTRONIK_MODULE 1
#define CONFIG_ZEPHYR_XTENSA_MODULE 1
#define CONFIG_MBEDTLS_SSL_MAX_CONTENT_LEN 1500
#define CONFIG_ZEPHYR_HOSTAP_MODULE 1
#define CONFIG_ZEPHYR_LIBLC3_MODULE 1
#define CONFIG_ZEPHYR_LIBMCTP_MODULE 1
#define CONFIG_ZEPHYR_LIBMETAL_MODULE 1
#define CONFIG_ZEPHYR_LITTLEFS_MODULE 1
#define CONFIG_ZEPHYR_LORAMAC_NODE_MODULE 1
#define CONFIG_ZEPHYR_LVGL_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_PSA_CRYPTO_CLIENT 1
#define CONFIG_PSA_WANT_ALG_ECB_NO_PADDING 1
#define CONFIG_PSA_WANT_KEY_TYPE_AES 1
#define CONFIG_MBEDTLS 1
#define CONFIG_MBEDTLS_BUILTIN 1
#define CONFIG_MBEDTLS_CFG_FILE "config-mbedtls.h"
#define CONFIG_MBEDTLS_PSK_MAX_LEN 32
#define CONFIG_MBEDTLS_SOME_AEAD_CIPHER_ENABLED 1
#define CONFIG_MBEDTLS_SOME_CIPHER_ENABLED 1
#define CONFIG_MBEDTLS_CIPHER_AES_ENABLED 1
#define CONFIG_MBEDTLS_CIPHER_MODE_CBC_ENABLED 1
#define CONFIG_MBEDTLS_SHA256 1
#define CONFIG_MBEDTLS_SHA256_SMALLER 1
#define CONFIG_MBEDTLS_CTR_DRBG_ENABLED 1
#define CONFIG_MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG 1
#define CONFIG_MBEDTLS_PSA_CRYPTO_C 1
#define CONFIG_MBEDTLS_USE_PSA_CRYPTO 1
#define CONFIG_MBEDTLS_PSA_CRYPTO_CLIENT 1
#define CONFIG_MBEDTLS_PSA_STATIC_KEY_SLOTS 1
#define CONFIG_MBEDTLS_PSA_KEY_SLOT_COUNT 16
#define CONFIG_MBEDTLS_LOG_LEVEL_DEFAULT 1
#define CONFIG_MBEDTLS_LOG_LEVEL 3
#define CONFIG_MBEDTLS_INIT 1
#define CONFIG_APP_LINK_WITH_MBEDTLS 1
#define CONFIG_ZEPHYR_MCUBOOT_MODULE 1
#define CONFIG_ZEPHYR_MIPI_SYS_T_MODULE 1
#define CONFIG_ZEPHYR_NRF_WIFI_MODULE 1
#define CONFIG_ZEPHYR_OPEN_AMP_MODULE 1
#define CONFIG_ZEPHYR_OPENTHREAD_MODULE 1
#define CONFIG_ZEPHYR_PERCEPIO_MODULE 1
#define CONFIG_ZEPHYR_PICOLIBC_MODULE 1
#define CONFIG_ZEPHYR_SEGGER_MODULE 1
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_ZEPHYR_TINYCRYPT_MODULE 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_A_MODULE 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE 1
#define CONFIG_ZEPHYR_UOSCORE_UEDHOC_MODULE 1
#define CONFIG_ZEPHYR_ZCBOR_MODULE 1
#define CONFIG_ZEPHYR_NRF_HW_MODELS_MODULE 1
#define CONFIG_BOARD "frdm_mcxw71"
#define CONFIG_BOARD_REVISION ""
#define CONFIG_BOARD_TARGET "frdm_mcxw71/mcxw716c"
#define CONFIG_BOARD_FRDM_MCXW71 1
#define CONFIG_BOARD_FRDM_MCXW71_MCXW716C 1
#define CONFIG_BOARD_QUALIFIERS "mcxw716c"
#define CONFIG_SOC "mcxw716c"
#define CONFIG_SOC_SERIES "mcxw"
#define CONFIG_SOC_FAMILY "nxp_mcx"
#define CONFIG_SOC_PART_NUMBER "MCXW716CMFTA"
#define CONFIG_SOC_FAMILY_NXP_MCX 1
#define CONFIG_SOC_SERIES_MCXW 1
#define CONFIG_SOC_MCXW716C 1
#define CONFIG_SOC_PART_NUMBER_MCXW716CMFTA 1
#define CONFIG_ARMV8_1_M_PMU_EVENTCNT 8
#define CONFIG_ARM_SECURE_FIRMWARE 1
#define CONFIG_NXP_NBU 1
#define CONFIG_GPIO_INIT_PRIORITY 40
#define CONFIG_SOC_LOG_LEVEL_DEFAULT 1
#define CONFIG_SOC_LOG_LEVEL 3
#define CONFIG_ARCH "arm"
#define CONFIG_NET_TX_STACK_SIZE 1200
#define CONFIG_NET_RX_STACK_SIZE 1500
#define CONFIG_ARCH_HAS_SINGLE_THREAD_SUPPORT 1
#define CONFIG_CPU_CORTEX 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 32
#define CONFIG_MPU_ALLOW_FLASH_WRITE 1
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_FP16 1
#define CONFIG_FP16_IEEE 1
#define CONFIG_CPU_CORTEX_M33 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_SPLIM 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_CPU_CORTEX_M_HAS_CMSE 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV8_M_SE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_ARMV8_M_DSP 1
#define CONFIG_NULL_POINTER_EXCEPTION_DETECTION_NONE 1
#define CONFIG_ARM_TRUSTZONE_M 1
#define CONFIG_CUSTOM_SECTION_MIN_ALIGN_SIZE 32
#define CONFIG_CPU_HAS_ARM_SAU 1
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_ARM_MPU 1
#define CONFIG_ARCH_LOG_LEVEL_DEFAULT 1
#define CONFIG_ARCH_LOG_LEVEL 3
#define CONFIG_LITTLE_ENDIAN 1
#define CONFIG_SRAM_SIZE 104
#define CONFIG_SRAM_BASE_ADDRESS 0x30000000
#define CONFIG_TRUSTED_EXECUTION_SECURE 1
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_ARCH_DEVICE_STATE_ALIGN 4
#define CONFIG_IRQ_VECTOR_TABLE_JUMP_BY_ADDRESS 1
#define CONFIG_EXCEPTION_DEBUG 1
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_TRUSTED_EXECUTION 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_VECTOR_TABLE_RELOCATION 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP_THREADS 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP_STACK_PTR 1
#define CONFIG_ARCH_SUPPORTS_ARCH_HW_INIT 1
#define CONFIG_ARCH_SUPPORTS_ROM_START 1
#define CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO 1
#define CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE 1
#define CONFIG_ARCH_HAS_SUSPEND_TO_RAM 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_ARCH_HAS_CODE_DATA_RELOCATION 1
#define CONFIG_CPU_HAS_TEE 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_MPU 1
#define CONFIG_MPU_LOG_LEVEL_DEFAULT 1
#define CONFIG_MPU_LOG_LEVEL 3
#define CONFIG_MPU_REQUIRES_NON_OVERLAPPING_REGIONS 1
#define CONFIG_MPU_GAP_FILLING 1
#define CONFIG_SRAM_REGION_PERMISSIONS 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_KERNEL_LOG_LEVEL_DEFAULT 1
#define CONFIG_KERNEL_LOG_LEVEL 3
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_SCHED_SIMPLE 1
#define CONFIG_WAITQ_SIMPLE 1
#define CONFIG_LIBC_ERRNO 1
#define CONFIG_ERRNO 1
#define CONFIG_CURRENT_THREAD_USE_TLS 1
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_BANNER_STRING "Booting Zephyr OS build"
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_SYSTEM_WORKQUEUE_WORK_TIMEOUT_MS 0
#define CONFIG_BARRIER_OPERATIONS_ARCH 1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_POLL 1
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_EVENTS 1
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS 365
#define CONFIG_STACK_POINTER_RANDOM 0
#define CONFIG_ARCH_MEM_DOMAIN_SUPPORTS_ISOLATED_STACKS 1
#define CONFIG_MEM_DOMAIN_ISOLATED_STACKS 1
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_THREAD_LOCAL_STORAGE 1
#define CONFIG_TOOLCHAIN_SUPPORTS_STATIC_INIT_GNU 1
#define CONFIG_DEVICE_DEINIT_SUPPORT 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_LIBC 35
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_SOC_EARLY_INIT_HOOK 1
#define CONFIG_BT_DRIVERS 1
#define CONFIG_BT_NXP 1
#define CONFIG_BT_HCI_INIT_PRIORITY 50
#define CONFIG_HCI_NXP_RX_STACK_SIZE 512
#define CONFIG_HCI_NXP_RX_MSG_QUEUE_SIZE 4
#define CONFIG_HEAP_MEM_POOL_ADD_SIZE_BT_NXP_RX_THREAD 768
#define CONFIG_BT_DIS_MANUF_NAME 1
#define CONFIG_BT_DIS_MANUF_NAME_STR "NXP"
#define CONFIG_BT_BUF_EVT_DISCARDABLE_SIZE 84
#define CONFIG_HEAP_MEM_POOL_ADD_SIZE_BT_NXP 256
#define CONFIG_BT_HCI_SETUP 1
#define CONFIG_BT_DRV_TX_STACK_SIZE 256
#define CONFIG_BT_DRV_RX_STACK_SIZE 512
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL_DEFAULT 1
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL 3
#define CONFIG_CLOCK_CONTROL_MCUX_SCG_K4 1
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_CONSOLE_INIT_PRIORITY 60
#define CONFIG_UART_CONSOLE 1
#define CONFIG_UART_CONSOLE_LOG_LEVEL_DEFAULT 1
#define CONFIG_UART_CONSOLE_LOG_LEVEL 3
#define CONFIG_COUNTER_INIT_PRIORITY 60
#define CONFIG_COUNTER_LOG_LEVEL_DEFAULT 1
#define CONFIG_COUNTER_LOG_LEVEL 3
#define CONFIG_COUNTER_MCUX_RTC 1
#define CONFIG_COUNTER_MCUX_LPTMR 1
#define CONFIG_COUNTER_NATIVE_POSIX_FREQUENCY 1000
#define CONFIG_COUNTER_NATIVE_POSIX_NBR_CHANNELS 4
#define CONFIG_ENTROPY_GENERATOR 1
#define CONFIG_ENTROPY_LOG_LEVEL_DEFAULT 1
#define CONFIG_ENTROPY_LOG_LEVEL 3
#define CONFIG_ENTROPY_INIT_PRIORITY 50
#define CONFIG_ENTROPY_NXP_ELE_TRNG 1
#define CONFIG_ENTROPY_HAS_DRIVER 1
#define CONFIG_FLASH_HAS_DRIVER_ENABLED 1
#define CONFIG_FLASH_HAS_EX_OP 1
#define CONFIG_FLASH_HAS_EXPLICIT_ERASE 1
#define CONFIG_FLASH_HAS_PAGE_LAYOUT 1
#define CONFIG_FLASH_JESD216 1
#define CONFIG_FLASH_PAGE_LAYOUT 1
#define CONFIG_SPI_NOR_SFDP_MINIMAL 1
#define CONFIG_SPI_NOR_INIT_PRIORITY 80
#define CONFIG_SPI_NOR_CS_WAIT_DELAY 0
#define CONFIG_SPI_NOR_SLEEP_WHILE_WAITING_UNTIL_READY 1
#define CONFIG_SPI_NOR_SLEEP_ERASE_MS 50
#define CONFIG_SPI_NOR_FLASH_LAYOUT_PAGE_SIZE 65536
#define CONFIG_FLASH_LOG_LEVEL_DEFAULT 1
#define CONFIG_FLASH_LOG_LEVEL 3
#define CONFIG_GPIO_LOG_LEVEL_DEFAULT 1
#define CONFIG_GPIO_LOG_LEVEL 3
#define CONFIG_GPIO_MCUX 1
#define CONFIG_I2C 1
#define CONFIG_I2C_INIT_PRIORITY 50
#define CONFIG_I2C_LOG_LEVEL_DEFAULT 1
#define CONFIG_I2C_LOG_LEVEL 3
#define CONFIG_I2C_MCUX_LPI2C 1
#define CONFIG_IEEE802154 1
#define CONFIG_IEEE802154_MCXW 1
#define CONFIG_IEEE802154_MCXW_INIT_PRIO 80
#define CONFIG_IEEE802154_MCXW_RX_STACK_SIZE 800
#define CONFIG_IEEE802154_MCXW_CSL_ACCURACY 100
#define CONFIG_IEEE802154_DRIVER_LOG_LEVEL_DEFAULT 1
#define CONFIG_IEEE802154_DRIVER_LOG_LEVEL 3
#define CONFIG_INTC_INIT_PRIORITY 40
#define CONFIG_INTC_LOG_LEVEL_DEFAULT 1
#define CONFIG_INTC_LOG_LEVEL 3
#define CONFIG_PINCTRL 1
#define CONFIG_PINCTRL_LOG_LEVEL_DEFAULT 1
#define CONFIG_PINCTRL_LOG_LEVEL 3
#define CONFIG_PINCTRL_NXP_PORT 1
#define CONFIG_SENSOR 1
#define CONFIG_SENSOR_LOG_LEVEL_DEFAULT 1
#define CONFIG_SENSOR_LOG_LEVEL 3
#define CONFIG_SENSOR_INIT_PRIORITY 90
#define CONFIG_FXLS8974 1
#define CONFIG_FXLS8974_TRIGGER_NONE 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_ASYNC 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_SERIAL_INIT_PRIORITY 50
#define CONFIG_UART_LOG_LEVEL_DEFAULT 1
#define CONFIG_UART_LOG_LEVEL 3
#define CONFIG_UART_MCUX_LPUART 1
#define CONFIG_SPI_INIT_PRIORITY 50
#define CONFIG_SPI_COMPLETION_TIMEOUT_TOLERANCE 200
#define CONFIG_SPI_LOG_LEVEL_DEFAULT 1
#define CONFIG_SPI_LOG_LEVEL 3
#define CONFIG_SPI_NXP_LPSPI 1
#define CONFIG_SPI_NXP_LPSPI_CPU 1
#define CONFIG_SPI_NXP_LPSPI_TXFIFO_WAIT_CYCLES 10000
#define CONFIG_TIMER_HAS_64BIT_CYCLE_COUNTER 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_SYSTEM_TIMER_HAS_DISABLE_SUPPORT 1
#define CONFIG_CORTEX_M_SYSTICK_INSTALL_ISR 1
#define CONFIG_CORTEX_M_SYSTICK_64BIT_CYCLE_COUNTER 1
#define CONFIG_CORTEX_M_SYSTICK_LPM_TIMER_NONE 1
#define CONFIG_NRF_USBD_COMMON_LOG_LEVEL_DEFAULT 1
#define CONFIG_NRF_USBD_COMMON_LOG_LEVEL 3
#define CONFIG_USBC_LOG_LEVEL_DEFAULT 1
#define CONFIG_USBC_LOG_LEVEL 3
#define CONFIG_VIRTIO_LOG_LEVEL_DEFAULT 1
#define CONFIG_VIRTIO_LOG_LEVEL 3
#define CONFIG_NET_MGMT_EVENT_STACK_SIZE 800
#define CONFIG_NET_TC_TX_COUNT 0
#define CONFIG_NET_INTERFACE_NAME_LEN 8
#define CONFIG_NET_MGMT_EVENT_QUEUE_SIZE 5
#define CONFIG_FULL_LIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC_SUPPORTED 1
#define CONFIG_NEWLIB_LIBC_SUPPORTED 1
#define CONFIG_PICOLIBC_SUPPORTED 1
#define CONFIG_PICOLIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_COMMON_LIBC_ABORT 1
#define CONFIG_COMMON_LIBC_TIME 1
#define CONFIG_COMMON_LIBC_MALLOC 1
#define CONFIG_COMMON_LIBC_CALLOC 1
#define CONFIG_COMMON_LIBC_REALLOCARRAY 1
#define CONFIG_PICOLIBC_USE_TOOLCHAIN 1
#define CONFIG_PICOLIBC_IO_FLOAT 1
#define CONFIG_STDOUT_CONSOLE 1
#define CONFIG_NEED_LIBC_MEM_PARTITION 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_SYS_HEAP_ARRAY_SIZE 0
#define CONFIG_SYS_HEAP_SMALL_ONLY 1
#define CONFIG_NET_BUF 1
#define CONFIG_NET_BUF_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_BUF_LOG_LEVEL 3
#define CONFIG_NET_BUF_ALIGNMENT 0
#define CONFIG_ZVFS_OPEN_MAX 4
#define CONFIG_MPSC_PBUF 1
#define CONFIG_CBPRINTF_COMPLETE 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_CBPRINTF_FP_SUPPORT 1
#define CONFIG_CBPRINTF_PACKAGE_LOG_LEVEL_DEFAULT 1
#define CONFIG_CBPRINTF_PACKAGE_LOG_LEVEL 3
#define CONFIG_CBPRINTF_CONVERT_CHECK_PTR 1
#define CONFIG_POSIX_AEP_CHOICE_NONE 1
#define CONFIG_POSIX_OPEN_MAX 4
#define CONFIG_POSIX_PAGE_SIZE 0x40
#define CONFIG_XSI_SINGLE_PROCESS_LOG_LEVEL_DEFAULT 1
#define CONFIG_XSI_SINGLE_PROCESS_LOG_LEVEL 3
#define CONFIG_TC_PROVIDES_POSIX_C_LANG_SUPPORT_R 1
#define CONFIG_LIBGCC_RTLIB 1
#define CONFIG_RING_BUFFER 1
#define CONFIG_BT 1
#define CONFIG_BT_HCI 1
#define CONFIG_BT_OBSERVER 1
#define CONFIG_BT_BUF_ACL_RX_COUNT_EXTRA 0
#define CONFIG_BT_BUF_ACL_RX_COUNT 0
#define CONFIG_BT_BUF_EVT_DISCARDABLE_COUNT 3
#define CONFIG_BT_ASSERT 1
#define CONFIG_BT_ASSERT_VERBOSE 1
#define CONFIG_BT_DEBUG_NONE 1
#define CONFIG_BT_HCI_HOST 1
#define CONFIG_BT_HCI_TX_STACK_SIZE 1024
#define CONFIG_BT_HCI_TX_PRIO 7
#define CONFIG_BT_RECV_WORKQ_BT 1
#define CONFIG_BT_RX_STACK_SIZE 1200
#define CONFIG_BT_RX_PRIO 8
#define CONFIG_BT_DRIVER_RX_HIGH_PRIO 6
#define CONFIG_BT_HOST_CRYPTO 1
#define CONFIG_BT_HOST_CRYPTO_PRNG 1
#define CONFIG_BT_CONN_TX_USER_DATA_SIZE 16
#define CONFIG_BT_BACKGROUND_SCAN_INTERVAL 2048
#define CONFIG_BT_BACKGROUND_SCAN_WINDOW 18
#define CONFIG_BT_DEVICE_NAME "Zephyr"
#define CONFIG_BT_DEVICE_APPEARANCE 0
#define CONFIG_BT_ID_MAX 1
#define CONFIG_BT_LOG 1
#define CONFIG_BT_LOG_LEVEL_DEFAULT 1
#define CONFIG_BT_LOG_LEVEL 3
#define CONFIG_BT_HCI_DRIVER_LOG_LEVEL_INHERIT 1
#define CONFIG_BT_HCI_DRIVER_LOG_LEVEL 3
#define CONFIG_BT_RPA_LOG_LEVEL_INHERIT 1
#define CONFIG_BT_RPA_LOG_LEVEL 3
#define CONFIG_BT_ATT_LOG_LEVEL_INHERIT 1
#define CONFIG_BT_ATT_LOG_LEVEL 3
#define CONFIG_BT_GATT_LOG_LEVEL_INHERIT 1
#define CONFIG_BT_GATT_LOG_LEVEL 3
#define CONFIG_BT_L2CAP_LOG_LEVEL_INHERIT 1
#define CONFIG_BT_L2CAP_LOG_LEVEL 3
#define CONFIG_BT_HCI_CORE_LOG_LEVEL_INHERIT 1
#define CONFIG_BT_HCI_CORE_LOG_LEVEL 3
#define CONFIG_BT_KEYS_LOG_LEVEL_INHERIT 1
#define CONFIG_BT_KEYS_LOG_LEVEL 3
#define CONFIG_BT_SERVICE_LOG_LEVEL_INHERIT 1
#define CONFIG_BT_SERVICE_LOG_LEVEL 3
#define CONFIG_BT_COMPANY_ID 0x05F1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_CPU_LOAD_LOG_PERIODICALLY 0
#define CONFIG_CPU_LOAD_LOG_LEVEL_DEFAULT 1
#define CONFIG_CPU_LOAD_LOG_LEVEL 3
#define CONFIG_LOG_CORE_INIT_PRIORITY 0
#define CONFIG_LOG_MODE_DEFERRED 1
#define CONFIG_LOG_FLUSH_SLEEP_US 10000
#define CONFIG_LOG_DEFAULT_LEVEL 3
#define CONFIG_LOG_OVERRIDE_LEVEL 0
#define CONFIG_LOG_MAX_LEVEL 4
#define CONFIG_LOG_PRINTK 1
#define CONFIG_LOG_MODE_OVERFLOW 1
#define CONFIG_LOG_PROCESS_TRIGGER_THRESHOLD 10
#define CONFIG_LOG_PROCESS_THREAD 1
#define CONFIG_LOG_PROCESS_THREAD_STARTUP_DELAY_MS 0
#define CONFIG_LOG_PROCESS_THREAD_SLEEP_MS 1000
#define CONFIG_LOG_PROCESS_THREAD_STACK_SIZE 768
#define CONFIG_LOG_BUFFER_SIZE 1024
#define CONFIG_LOG_TRACE_SHORT_TIMESTAMP 1
#define CONFIG_LOG_FUNC_NAME_PREFIX_DBG 1
#define CONFIG_LOG_BACKEND_SHOW_COLOR 1
#define CONFIG_LOG_TAG_MAX_LEN 0
#define CONFIG_LOG_BACKEND_SUPPORTS_FORMAT_TIMESTAMP 1
#define CONFIG_LOG_BACKEND_FORMAT_TIMESTAMP 1
#define CONFIG_LOG_OUTPUT_FORMAT_TIME_TIMESTAMP 1
#define CONFIG_LOG_BACKEND_UART 1
#define CONFIG_LOG_BACKEND_UART_BUFFER_SIZE 1
#define CONFIG_LOG_BACKEND_UART_AUTOSTART 1
#define CONFIG_LOG_BACKEND_UART_OUTPUT_TEXT 1
#define CONFIG_LOG_BACKEND_UART_OUTPUT_DEFAULT 0
#define CONFIG_LOG_USE_VLA 1
#define CONFIG_LOG_SIMPLE_MSG_OPTIMIZE 1
#define CONFIG_LOG_FAILURE_REPORT_PERIOD 1000
#define CONFIG_LOG_OUTPUT 1
#define CONFIG_MEM_ATTR 1
#define CONFIG_NETWORKING 1
#define CONFIG_NET_L2_PHY_IEEE802154 1
#define CONFIG_NET_L2_IEEE802154_MGMT 1
#define CONFIG_NET_L2_IEEE802154_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_L2_IEEE802154_LOG_LEVEL 3
#define CONFIG_NET_L2_IEEE802154_RFD 1
#define CONFIG_NET_L2_IEEE802154_FRAGMENT 1
#define CONFIG_NET_L2_IEEE802154_FRAGMENT_REASS_CACHE_SIZE 1
#define CONFIG_NET_L2_IEEE802154_REASSEMBLY_TIMEOUT 5
#define CONFIG_NET_L2_IEEE802154_RADIO_DFLT_TX_POWER 0
#define CONFIG_NET_L2_IEEE802154_RADIO_TX_RETRIES 3
#define CONFIG_NET_L2_IEEE802154_RADIO_CSMA_CA 1
#define CONFIG_NET_L2_IEEE802154_RADIO_CSMA_CA_MAX_BO 4
#define CONFIG_NET_L2_IEEE802154_RADIO_CSMA_CA_MIN_BE 3
#define CONFIG_NET_L2_IEEE802154_RADIO_CSMA_CA_MAX_BE 5
#define CONFIG_NET_IP 1
#define CONFIG_NET_NATIVE 1
#define CONFIG_NET_NATIVE_IP 1
#define CONFIG_NET_NATIVE_IPV6 1
#define CONFIG_NET_NATIVE_UDP 1
#define CONFIG_NET_INIT_PRIO 90
#define CONFIG_NET_IP_DSCP_ECN 1
#define CONFIG_NET_IF_MAX_IPV6_COUNT 1
#define CONFIG_NET_IF_UNICAST_IPV6_ADDR_COUNT 2
#define CONFIG_NET_IF_MCAST_IPV6_ADDR_COUNT 3
#define CONFIG_NET_IF_IPV6_PREFIX_COUNT 2
#define CONFIG_NET_IPV6_MTU 1280
#define CONFIG_NET_INITIAL_HOP_LIMIT 64
#define CONFIG_NET_INITIAL_MCAST_HOP_LIMIT 1
#define CONFIG_NET_INITIAL_IPV6_MCAST_LOOP 1
#define CONFIG_NET_IPV6_MAX_NEIGHBORS 8
#define CONFIG_NET_IPV6_MLD 1
#define CONFIG_NET_IPV6_NBR_CACHE 1
#define CONFIG_NET_IPV6_ND 1
#define CONFIG_NET_IPV6_DAD 1
#define CONFIG_NET_IPV6_RS_TIMEOUT 1
#define CONFIG_NET_IPV6_IID_EUI_64 1
#define CONFIG_NET_6LO 1
#define CONFIG_NET_6LO_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_6LO_LOG_LEVEL 3
#define CONFIG_NET_IPV6_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_IPV6_LOG_LEVEL 3
#define CONFIG_NET_IPV6_ND_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_IPV6_ND_LOG_LEVEL 3
#define CONFIG_NET_IPV6_PE_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_IPV6_PE_LOG_LEVEL 3
#define CONFIG_NET_ICMPV6_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_ICMPV6_LOG_LEVEL 3
#define CONFIG_NET_IPV6_NBR_CACHE_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_IPV6_NBR_CACHE_LOG_LEVEL 3
#define CONFIG_NET_TC_RX_COUNT 1
#define CONFIG_NET_TC_THREAD_COOPERATIVE 1
#define CONFIG_NET_TC_NUM_PRIORITIES 16
#define CONFIG_NET_TC_MAPPING_STRICT 1
#define CONFIG_NET_TX_DEFAULT_PRIORITY 1
#define CONFIG_NET_RX_DEFAULT_PRIORITY 0
#define CONFIG_NET_IP_ADDR_CHECK 1
#define CONFIG_NET_MAX_ROUTERS 1
#define CONFIG_NET_ROUTE 1
#define CONFIG_NET_MAX_ROUTES 8
#define CONFIG_NET_MAX_NEXTHOPS 8
#define CONFIG_NET_UDP 1
#define CONFIG_NET_UDP_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_UDP_LOG_LEVEL 3
#define CONFIG_NET_MAX_CONN 4
#define CONFIG_NET_CONN_PACKET_CLONE_TIMEOUT 100
#define CONFIG_NET_MAX_CONTEXTS 6
#define CONFIG_NET_CONTEXT_SYNC_RECV 1
#define CONFIG_NET_CONTEXT_CHECK 1
#define CONFIG_NET_CONTEXT_DSCP_ECN 1
#define CONFIG_NET_CONTEXT_REUSEADDR 1
#define CONFIG_NET_CONTEXT_REUSEPORT 1
#define CONFIG_NET_PKT_RX_COUNT 4
#define CONFIG_NET_PKT_TX_COUNT 4
#define CONFIG_NET_BUF_RX_COUNT 16
#define CONFIG_NET_BUF_TX_COUNT 16
#define CONFIG_NET_BUF_FIXED_DATA_SIZE 1
#define CONFIG_NET_BUF_DATA_SIZE 128
#define CONFIG_NET_PKT_BUF_USER_DATA_SIZE 4
#define CONFIG_NET_DEFAULT_IF_FIRST 1
#define CONFIG_NET_INTERFACE_NAME 1
#define CONFIG_NET_PROMISCUOUS_MODE 1
#define CONFIG_NET_PROMISC_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_PROMISC_LOG_LEVEL 3
#define CONFIG_NET_MGMT 1
#define CONFIG_NET_MGMT_EVENT 1
#define CONFIG_NET_MGMT_EVENT_THREAD 1
#define CONFIG_NET_MGMT_EVENT_QUEUE 1
#define CONFIG_NET_MGMT_EVENT_QUEUE_TIMEOUT 10
#define CONFIG_NET_MGMT_EVENT_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_MGMT_EVENT_LOG_LEVEL 3
#define CONFIG_NET_LOG 1
#define CONFIG_NET_PKT_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_PKT_LOG_LEVEL 3
#define CONFIG_NET_DEBUG_NET_PKT_EXTERNALS 0
#define CONFIG_NET_CORE_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_CORE_LOG_LEVEL 3
#define CONFIG_NET_IF_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_IF_LOG_LEVEL 3
#define CONFIG_NET_TC_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_TC_LOG_LEVEL 3
#define CONFIG_NET_UTILS_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_UTILS_LOG_LEVEL 3
#define CONFIG_NET_CONTEXT_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_CONTEXT_LOG_LEVEL 3
#define CONFIG_NET_CONN_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_CONN_LOG_LEVEL 3
#define CONFIG_NET_ROUTE_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_ROUTE_LOG_LEVEL 3
#define CONFIG_NET_HTTP_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_HTTP_LOG_LEVEL 3
#define CONFIG_NET_HTTP_SERVER_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_HTTP_SERVER_LOG_LEVEL 3
#define CONFIG_NET_CONFIG_LOG_LEVEL_DEFAULT 1
#define CONFIG_NET_CONFIG_LOG_LEVEL 3
#define CONFIG_NET_DHCPV6_DUID_MAX_LEN 22
#define CONFIG_TIMER_RANDOM_INITIAL_STATE 123456789
#define CONFIG_ENTROPY_DEVICE_RANDOM_GENERATOR 1
#define CONFIG_CSPRNG_AVAILABLE 1
#define CONFIG_CSPRNG_ENABLED 1
#define CONFIG_HARDWARE_DEVICE_CS_GENERATOR 1
#define CONFIG_TOOLCHAIN_ZEPHYR_0_17 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_GNU_EXTENSIONS 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_FLASH_LOAD_SIZE 0x0
#define CONFIG_ROM_END_OFFSET 0x0
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_LINKER_LAST_SECTION_ID 1
#define CONFIG_LINKER_LAST_SECTION_ID_PATTERN 0xE015E015
#define CONFIG_LINKER_USE_RELAX 1
#define CONFIG_LINKER_ITERABLE_SUBALIGN 4
#define CONFIG_LINKER_DEVNULL_SUPPORT 1
#define CONFIG_STD_C99 1
#define CONFIG_TOOLCHAIN_SUPPORTS_GNU_EXTENSIONS 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_TRACK_MACRO_EXPANSION 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_FORTIFY_SOURCE_COMPILE_TIME 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_TOOLCHAIN_SUPPORTS_VLA_IN_STATEMENTS 1
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_GAP_FILL_PATTERN 0xFF
#define CONFIG_BUILD_OUTPUT_STRIP_PATHS 1
#define CONFIG_CHECK_INIT_PRIORITIES 1
#define CONFIG_WARN_DEPRECATED 1
#define CONFIG_TAINT 1
#define CONFIG_ENFORCE_ZEPHYR_STDINT 1
#define CONFIG_LEGACY_GENERATED_INCLUDE_PATH 1
