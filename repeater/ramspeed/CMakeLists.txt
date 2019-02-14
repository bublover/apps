zephyr_include_directories(.)

zephyr_sources_ifdef(
    CONFIG_RAMSPEED
    intmark.c
    intmem.c
    ramspeed.c
	ramspeed_shell.c
    )
