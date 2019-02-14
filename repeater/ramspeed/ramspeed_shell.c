#include <shell/shell.h>

int shell_main(const struct shell *shell, size_t argc, char **argv)
{
	ramspeed_main(argc, argv);

	return 0;
}

SHELL_CMD_REGISTER(ramspeed, NULL, "ramspeed benchmark", shell_main);
