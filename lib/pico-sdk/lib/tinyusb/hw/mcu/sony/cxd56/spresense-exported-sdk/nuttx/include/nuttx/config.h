/* config.h -- Autogenerated! Do not edit. */

#ifndef __INCLUDE_NUTTX_CONFIG_H
#define __INCLUDE_NUTTX_CONFIG_H

/* Architecture-specific options *************************/

#define CONFIG_HOST_LINUX 1
#define CONFIG_APPS_DIR "../sdk/tools/empty_apps"
#define CONFIG_BUILD_FLAT 1
#define CONFIG_DEBUG_ALERT 1
#define CONFIG_ARCH_HAVE_STACKCHECK 1
#define CONFIG_STACK_COLORATION 1
#define CONFIG_ARCH_HAVE_HEAPCHECK 1
#define CONFIG_DEBUG_SYMBOLS 1
#define CONFIG_ARCH_HAVE_CUSTOMOPT 1
#define CONFIG_DEBUG_FULLOPT 1
#define CONFIG_ARCH_ARM 1
#define CONFIG_ARCH "arm"
#define CONFIG_ARCH_CHIP_CXD56XX 1
#define CONFIG_ARCH_CORTEXM4 1
#define CONFIG_ARCH_FAMILY "armv7-m"
#define CONFIG_ARCH_CHIP "cxd56xx"
#define CONFIG_ARMV7M_USEBASEPRI 1
#define CONFIG_ARCH_HAVE_CMNVECTOR 1
#define CONFIG_ARMV7M_CMNVECTOR 1
#define CONFIG_ARCH_HAVE_FPU 1
#define CONFIG_ARCH_FPU 1
#define CONFIG_ARM_HAVE_MPU_UNIFIED 1
#define CONFIG_ARMV7M_TOOLCHAIN_GNU_EABIL 1
#define CONFIG_SERIAL_TERMIOS 1
#define CONFIG_CXD56_ARCH_OPTS 1
#define CONFIG_CXD56_UART1 1
#define CONFIG_CXD56_UART2 1
#define CONFIG_ARCH_TOOLCHAIN_GNU 1
#define CONFIG_ARCH_DMA 1
#define CONFIG_ARCH_HAVE_IRQPRIO 1
#define CONFIG_ARCH_HAVE_MULTICPU 1
#define CONFIG_ARCH_HAVE_VFORK 1
#define CONFIG_ARCH_HAVE_MPU 1
#define CONFIG_ARCH_HAVE_POWEROFF 1
#define CONFIG_ARCH_HAVE_RESET 1
#define CONFIG_ARCH_STACKDUMP 1
#define CONFIG_ARCH_HAVE_RAMVECTORS 1
#define CONFIG_BOARD_LOOPSPERMSEC 5434
#define CONFIG_ARCH_HAVE_INTERRUPTSTACK 1
#define CONFIG_ARCH_INTERRUPTSTACK 2048
#define CONFIG_ARCH_HAVE_HIPRI_INTERRUPT 1
#define CONFIG_BOOT_RUNFROMISRAM 1
#define CONFIG_RAM_START 0x0d000000
#define CONFIG_RAM_SIZE 1572864
#define CONFIG_ARCH_BOARD_CXD56EVB 1
#define CONFIG_ARCH_BOARD "cxd56evb"
#define CONFIG_ARCH_HAVE_LEDS 1
#define CONFIG_ARCH_HAVE_BUTTONS 1
#define CONFIG_ARCH_HAVE_IRQBUTTONS 1
#define CONFIG_BOARD_CRASHDUMP 1
#define CONFIG_LIB_BOARDCTL 1
#define CONFIG_BOARDCTL_POWEROFF 1
#define CONFIG_BOARDCTL_RESET 1
#define CONFIG_BOARDCTL_UNIQUEID 1
#define CONFIG_BOARDCTL_UNIQUEID_SIZE 5
#define CONFIG_BOARDCTL_USBDEVCTRL 1
#define CONFIG_BOARDCTL_IOCTL 1
#define CONFIG_DISABLE_OS_API 1
#define CONFIG_USEC_PER_TICK 1000
#define CONFIG_SYSTEMTICK_HOOK 1
#define CONFIG_CLOCK_MONOTONIC 1
#define CONFIG_START_YEAR 2011
#define CONFIG_START_MONTH 12
#define CONFIG_START_DAY 6
#define CONFIG_MAX_WDOGPARMS 2
#define CONFIG_PREALLOC_WDOGS 16
#define CONFIG_WDOG_INTRESERVE 4
#define CONFIG_PREALLOC_TIMERS 4
#define CONFIG_INIT_ENTRYPOINT 1
#define CONFIG_USER_ENTRYPOINT sdk_entry
#define CONFIG_RR_INTERVAL 200
#define CONFIG_TASK_NAME_SIZE 31
#define CONFIG_MAX_TASKS 32
#define CONFIG_SCHED_HAVE_PARENT 1
#define CONFIG_SCHED_CHILD_STATUS 1
#define CONFIG_PREALLOC_CHILDSTATUS 0
#define CONFIG_SCHED_WAITPID 1
#define CONFIG_PTHREAD_MUTEX_ROBUST 1
#define CONFIG_NPTHREAD_KEYS 4
#define CONFIG_DEV_CONSOLE 1
#define CONFIG_SDCLONE_DISABLE 1
#define CONFIG_NFILE_DESCRIPTORS 16
#define CONFIG_NFILE_STREAMS 8
#define CONFIG_NAME_MAX 64
#define CONFIG_SIG_SIGUSR1 1
#define CONFIG_SIG_SIGUSR2 2
#define CONFIG_SIG_SIGALARM 3
#define CONFIG_SIG_SIGCHLD 4
#define CONFIG_SIG_SIGCONDTIMEDOUT 16
#define CONFIG_SIG_SIGWORK 17
#define CONFIG_PREALLOC_MQ_MSGS 4
#define CONFIG_MQ_MAXMSGSIZE 32
#define CONFIG_SCHED_WORKQUEUE 1
#define CONFIG_SCHED_HPWORK 1
#define CONFIG_SCHED_HPWORKPRIORITY 224
#define CONFIG_SCHED_HPWORKPERIOD 0
#define CONFIG_SCHED_HPWORKSTACKSIZE 2048
#define CONFIG_SCHED_LPWORK 1
#define CONFIG_SCHED_LPNTHREADS 3
#define CONFIG_SCHED_LPWORKPRIORITY 50
#define CONFIG_SCHED_LPWORKPERIOD 0
#define CONFIG_SCHED_LPWORKSTACKSIZE 2048
#define CONFIG_IDLETHREAD_STACKSIZE 1024
#define CONFIG_USERMAIN_STACKSIZE 8192
#define CONFIG_PTHREAD_STACK_MIN 256
#define CONFIG_PTHREAD_STACK_DEFAULT 2048
#define CONFIG_DEV_NULL 1
#define CONFIG_PWM 1
#define CONFIG_I2C 1
#define CONFIG_I2C_DRIVER 1
#define CONFIG_SPI 1
#define CONFIG_SPI_EXCHANGE 1
#define CONFIG_TIMER 1
#define CONFIG_RTC 1
#define CONFIG_RTC_HIRES 1
#define CONFIG_RTC_FREQUENCY 32768
#define CONFIG_RTC_ALARM 1
#define CONFIG_RTC_NALARMS 1
#define CONFIG_RTC_DRIVER 1
#define CONFIG_WATCHDOG 1
#define CONFIG_WATCHDOG_DEVPATH "/dev/watchdog0"
#define CONFIG_LCD 1
#define CONFIG_LCD_NOGETRUN 1
#define CONFIG_LCD_MAXCONTRAST 63
#define CONFIG_LCD_MAXPOWER 1
#define CONFIG_LCD_LANDSCAPE 1
#define CONFIG_MMCSD 1
#define CONFIG_MMCSD_NSLOTS 1
#define CONFIG_MMCSD_MMCSUPPORT 1
#define CONFIG_MMCSD_HAVECARDDETECT 1
#define CONFIG_MMCSD_SPI 1
#define CONFIG_MMCSD_SPICLOCK 20000000
#define CONFIG_MMCSD_SPIMODE 0
#define CONFIG_ARCH_HAVE_SDIO 1
#define CONFIG_SDIO_DMA 1
#define CONFIG_MMCSD_SDIO 1
#define CONFIG_SDIO_MUXBUS 1
#define CONFIG_SDIO_BLOCKSETUP 1
#define CONFIG_MTD 1
#define CONFIG_MTD_BYTE_WRITE 1
#define CONFIG_MTD_SMART 1
#define CONFIG_MTD_SMART_SECTOR_SIZE 4096
#define CONFIG_MTD_SMART_SKIP_SECTOR_SIZE_SCAN 1
#define CONFIG_MTD_SMART_ENABLE_CRC 1
#define CONFIG_SMART_CRC_8 1
#define CONFIG_MTD_SMART_FSCK 1
#define CONFIG_NETDEVICES 1
#define CONFIG_NETDEV_LATEINIT 1
#define CONFIG_PIPES 1
#define CONFIG_DEV_PIPE_MAXSIZE 1024
#define CONFIG_DEV_PIPE_SIZE 1024
#define CONFIG_DEV_FIFO_SIZE 1024
#define CONFIG_POWER 1
#define CONFIG_BATTERY_CHARGER 1
#define CONFIG_BATTERY_GAUGE 1
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_REMOVABLE 1
#define CONFIG_SERIAL_CONSOLE 1
#define CONFIG_UART1_SERIALDRIVER 1
#define CONFIG_UART2_SERIALDRIVER 1
#define CONFIG_MCU_SERIAL 1
#define CONFIG_SERIAL_IFLOWCONTROL 1
#define CONFIG_SERIAL_OFLOWCONTROL 1
#define CONFIG_ARCH_HAVE_SERIAL_TERMIOS 1
#define CONFIG_UART1_SERIAL_CONSOLE 1
#define CONFIG_UART1_RXBUFSIZE 1024
#define CONFIG_UART1_TXBUFSIZE 1024
#define CONFIG_UART1_BAUD 115200
#define CONFIG_UART1_BITS 8
#define CONFIG_UART1_PARITY 0
#define CONFIG_UART1_2STOP 0
#define CONFIG_UART2_RXBUFSIZE 256
#define CONFIG_UART2_TXBUFSIZE 256
#define CONFIG_UART2_BAUD 115200
#define CONFIG_UART2_BITS 8
#define CONFIG_UART2_PARITY 0
#define CONFIG_UART2_2STOP 0
#define CONFIG_UART2_IFLOWCONTROL 1
#define CONFIG_UART2_OFLOWCONTROL 1
#define CONFIG_USBDEV 1
#define CONFIG_USBDEV_DUALSPEED 1
#define CONFIG_USBDEV_SELFPOWERED 1
#define CONFIG_USBDEV_MAXPOWER 100
#define CONFIG_USBDEV_DMA 1
#define CONFIG_CDCACM 1
#define CONFIG_CDCACM_EP0MAXPACKET 64
#define CONFIG_CDCACM_EPINTIN 6
#define CONFIG_CDCACM_EPINTIN_FSSIZE 64
#define CONFIG_CDCACM_EPINTIN_HSSIZE 64
#define CONFIG_CDCACM_EPBULKOUT 5
#define CONFIG_CDCACM_EPBULKOUT_FSSIZE 64
#define CONFIG_CDCACM_EPBULKOUT_HSSIZE 512
#define CONFIG_CDCACM_EPBULKIN 4
#define CONFIG_CDCACM_EPBULKIN_FSSIZE 64
#define CONFIG_CDCACM_EPBULKIN_HSSIZE 512
#define CONFIG_CDCACM_NRDREQS 4
#define CONFIG_CDCACM_NWRREQS 4
#define CONFIG_CDCACM_BULKIN_REQLEN 768
#define CONFIG_CDCACM_RXBUFSIZE 3080
#define CONFIG_CDCACM_TXBUFSIZE 769
#define CONFIG_CDCACM_VENDORID 0x054c
#define CONFIG_CDCACM_PRODUCTID 0x0bc2
#define CONFIG_CDCACM_VENDORSTR "SONY"
#define CONFIG_CDCACM_PRODUCTSTR "CDC/ACM Serial"
#define CONFIG_USBMSC 1
#define CONFIG_USBMSC_EP0MAXPACKET 64
#define CONFIG_USBMSC_EPBULKOUT 2
#define CONFIG_USBMSC_EPBULKIN 1
#define CONFIG_USBMSC_NWRREQS 4
#define CONFIG_USBMSC_NRDREQS 4
#define CONFIG_USBMSC_BULKINREQLEN 512
#define CONFIG_USBMSC_BULKOUTREQLEN 512
#define CONFIG_USBMSC_VENDORID 0x054c
#define CONFIG_USBMSC_VENDORSTR "Sony"
#define CONFIG_USBMSC_PRODUCTID 0x0bc2
#define CONFIG_USBMSC_PRODUCTSTR "Mass Storage"
#define CONFIG_USBMSC_VERSIONNO 0x399
#define CONFIG_USBMSC_REMOVABLE 1
#define CONFIG_USBMSC_SCSI_PRIO 128
#define CONFIG_USBMSC_SCSI_STACKSIZE 2048
#define CONFIG_SYSLOG_WRITE 1
#define CONFIG_SYSLOG_SERIAL_CONSOLE 1
#define CONFIG_SYSLOG_CONSOLE 1
#define CONFIG_ARCH_HAVE_NET 1
#define CONFIG_NET 1
#define CONFIG_NET_GUARDSIZE 2
#define CONFIG_NSOCKET_DESCRIPTORS 8
#define CONFIG_NET_NACTIVESOCKETS 16
#define CONFIG_NET_SOCKOPTS 1
#define CONFIG_NET_SOLINGER 1
#define CONFIG_NET_TCP 1
#define CONFIG_NET_TCP_NO_STACK 1
#define CONFIG_NET_UDP 1
#define CONFIG_NET_UDP_NO_STACK 1
#define CONFIG_NET_DEV_SPEC_SOCK 1
#define CONFIG_NET_DEV_SPEC_SOCK_CONNS 10
#define CONFIG_NET_HOSTNAME ""
#define CONFIG_FS_READABLE 1
#define CONFIG_FS_WRITABLE 1
#define CONFIG_FS_MQUEUE_MPATH "/var/mqueue"
#define CONFIG_FS_FAT 1
#define CONFIG_FAT_LCNAMES 1
#define CONFIG_FAT_LFN 1
#define CONFIG_FAT_MAXFNAME 64
#define CONFIG_FS_ROMFS 1
#define CONFIG_FS_SMARTFS 1
#define CONFIG_SMARTFS_ERASEDSTATE 0xff
#define CONFIG_SMARTFS_MAXNAMLEN 30
#define CONFIG_SMARTFS_MULTI_ROOT_DIRS 1
#define CONFIG_SMARTFS_ALIGNED_ACCESS 1
#define CONFIG_FS_PROCFS 1
#define CONFIG_FS_PROCFS_REGISTER 1
#define CONFIG_NX 1
#define CONFIG_NX_LCDDRIVER 1
#define CONFIG_NX_NPLANES 1
#define CONFIG_NX_BGCOLOR 0x0
#define CONFIG_NX_DISABLE_1BPP 1
#define CONFIG_NX_DISABLE_2BPP 1
#define CONFIG_NX_DISABLE_4BPP 1
#define CONFIG_NX_DISABLE_24BPP 1
#define CONFIG_NX_DISABLE_32BPP 1
#define CONFIG_NX_PACKEDMSFIRST 1
#define CONFIG_NX_XYINPUT_NONE 1
#define CONFIG_NXTK_BORDERWIDTH 4
#define CONFIG_NXTK_DEFAULT_BORDERCOLORS 1
#define CONFIG_NXFONTS_CHARBITS 7
#define CONFIG_NXFONT_SANS40X49B 1
#define CONFIG_MM_REGIONS 1
#define CONFIG_ELF 1
#define CONFIG_ELF_ALIGN_LOG2 2
#define CONFIG_ELF_STACKSIZE 2048
#define CONFIG_ELF_BUFFERSIZE 128
#define CONFIG_ELF_BUFFERINCR 32
#define CONFIG_BUILTIN 1
#define CONFIG_STDIO_BUFFER_SIZE 64
#define CONFIG_STDIO_LINEBUFFER 1
#define CONFIG_NUNGET_CHARS 2
#define CONFIG_LIBC_FLOATINGPOINT 1
#define CONFIG_LIBC_LONG_LONG 1
#define CONFIG_EOL_IS_EITHER_CRLF 1
#define CONFIG_ARCH_LOWPUTC 1
#define CONFIG_LIBC_ARCH_ELF 1
#define CONFIG_LIB_RAND_ORDER 1
#define CONFIG_LIB_HOMEDIR "/"
#define CONFIG_LIBC_TMPDIR "/tmp"
#define CONFIG_LIBC_MAX_TMPFILE 32
#define CONFIG_POSIX_SPAWN_PROXY_STACKSIZE 1024
#define CONFIG_TASK_SPAWN_DEFAULT_STACKSIZE 2048
#define CONFIG_ARCH_HAVE_TLS 1
#define CONFIG_LIBC_IPv4_ADDRCONV 1
#define CONFIG_LIBC_IPv6_ADDRCONV 1
#define CONFIG_LIB_SENDFILE_BUFSIZE 512
#define CONFIG_LIB_KBDCODEC 1
#define CONFIG_HAVE_CXX 1

/* Sanity Checks *****************************************/

/* If this is an NXFLAT, external build, then make sure that
 * NXFLAT support is enabled in the base code.
 */

#if defined(__NXFLAT__) && !defined(CONFIG_NXFLAT)
# error "NXFLAT support not enabled in this configuration"
#endif

/* NXFLAT requires PIC support in the TCBs. */

#if defined(CONFIG_NXFLAT)
#  undef  CONFIG_PIC
#  define CONFIG_PIC 1
#endif

/* Binary format support is disabled if no binary formats are
 * configured (at present, NXFLAT is the only supported binary.
 * format).
 */

#if !defined(CONFIG_NXFLAT) && !defined(CONFIG_ELF) && !defined(CONFIG_BUILTIN)
#  undef CONFIG_BINFMT_DISABLE
#  define CONFIG_BINFMT_DISABLE 1
#endif

/* The correct way to disable RR scheduling is to set the
 * timeslice to zero.
 */

#ifndef CONFIG_RR_INTERVAL
#  define CONFIG_RR_INTERVAL 0
#endif

/* The correct way to disable filesystem support is to set the number of
 * file descriptors to zero.
 */

#ifndef CONFIG_NFILE_DESCRIPTORS
#  define CONFIG_NFILE_DESCRIPTORS 0
#endif

/* If no file descriptors are configured, then make certain no streams
 * are configured either.
 */

#if CONFIG_NFILE_DESCRIPTORS == 0
#  undef  CONFIG_NFILE_STREAMS
#  define CONFIG_NFILE_STREAMS 0
#endif

/* The correct way to disable stream support is to set the number of
 * streamd to zero.
 */

#ifndef CONFIG_NFILE_STREAMS
#  define CONFIG_NFILE_STREAMS 0
#endif

/* If a console is selected, then make sure that there are resources for
 * three file descriptors and, if any streams are selected, also for three
 * file streams.
 *
 * CONFIG_DEV_CONSOLE means that a builtin console device exists at /dev/console
 * and can be opened during boot-up.  Other consoles, such as USB consoles, may
 * not exist at boot-upand have to be handled in a different way.  Three file
 * descriptors and three file streams are still needed.
 */

#if defined(CONFIG_DEV_CONSOLE) || defined(CONFIG_CDCACM_CONSOLE) || \
    defined(CONFIG_PL2303_CONSOLE)
# if CONFIG_NFILE_DESCRIPTORS < 3
#   undef CONFIG_NFILE_DESCRIPTORS
#   define CONFIG_NFILE_DESCRIPTORS 3
# endif

# if CONFIG_NFILE_STREAMS > 0 && CONFIG_NFILE_STREAMS < 3
#  undef CONFIG_NFILE_STREAMS
#  define CONFIG_NFILE_STREAMS 3
# endif

/* If no console is selected, then disable all builtin console devices */

#else
#  undef CONFIG_DEV_LOWCONSOLE
#  undef CONFIG_RAMLOG_CONSOLE
#endif

/* If no file streams are configured, then make certain that buffered I/O
 * support is disabled
 */

#if CONFIG_NFILE_STREAMS == 0
#  undef  CONFIG_STDIO_BUFFER_SIZE
#  undef  CONFIG_STDIO_LINEBUFFER
#  undef  CONFIG_STDIO_DISABLE_BUFFERING
#  define CONFIG_STDIO_DISABLE_BUFFERING 1
#endif

/* If priority inheritance is disabled, then do not allocate any
 * associated resources.
 */

#if !defined(CONFIG_PRIORITY_INHERITANCE) || !defined(CONFIG_SEM_PREALLOCHOLDERS)
#  undef CONFIG_SEM_PREALLOCHOLDERS
#  define CONFIG_SEM_PREALLOCHOLDERS 0
#endif

#if !defined(CONFIG_PRIORITY_INHERITANCE) || !defined(CONFIG_SEM_NNESTPRIO)
#  undef  CONFIG_SEM_NNESTPRIO
#  define CONFIG_SEM_NNESTPRIO 0
#endif

/* If the end of RAM is not specified then it is assumed to be the beginning
 * of RAM plus the RAM size.
 */

#ifndef CONFIG_RAM_END
#  define CONFIG_RAM_END (CONFIG_RAM_START+CONFIG_RAM_SIZE)
#endif

#ifndef CONFIG_RAM_VEND
#  define CONFIG_RAM_VEND (CONFIG_RAM_VSTART+CONFIG_RAM_SIZE)
#endif

/* If the end of FLASH is not specified then it is assumed to be the beginning
 * of FLASH plus the FLASH size.
 */

#ifndef CONFIG_FLASH_END
#  define CONFIG_FLASH_END (CONFIG_FLASH_START+CONFIG_FLASH_SIZE)
#endif

/* If the maximum message size is zero, then we assume that message queues
 * support should be disabled
 */

#if !defined(CONFIG_MQ_MAXMSGSIZE) || defined(CONFIG_DISABLE_MQUEUE)
#  undef CONFIG_MQ_MAXMSGSIZE
#  define CONFIG_MQ_MAXMSGSIZE 0
#endif

#if CONFIG_MQ_MAXMSGSIZE <= 0 && !defined(CONFIG_DISABLE_MQUEUE)
#  define CONFIG_DISABLE_MQUEUE 1
#endif

/* The correct way to disable socket support is to set the number of
 * socket descriptors to zero.
 */

#ifndef CONFIG_NSOCKET_DESCRIPTORS
#  define CONFIG_NSOCKET_DESCRIPTORS 0
#endif

/* There can be no network support with no socket descriptors */

#if CONFIG_NSOCKET_DESCRIPTORS <= 0
#  undef CONFIG_NET
#endif

/* Conversely, if there is no network support, there is no need for
 * socket descriptors
 */

#ifndef CONFIG_NET
#  undef  CONFIG_NSOCKET_DESCRIPTORS
#  define CONFIG_NSOCKET_DESCRIPTORS 0
#endif

#endif /* __INCLUDE_NUTTX_CONFIG_H */
