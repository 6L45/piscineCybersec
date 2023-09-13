STOCKHOLM python ransomware

FIRST set up your own pass key phrase (don't lose it)
by setting up the env variable STKLM (must be at least 16 char long)

make : clone github repo (specified in Makefile) at $HOME/infection
	$HOME/infection default attack repository

make run	: execute python ransomware script
make runs	: execute script with -s flag (no output from script)
make clean	: execute script with -r flag (reverse encrypting)
make cleans	: execute script with -rs flags (reverse encrypting and no output from script)
make fclean	: rm -rf $HOME/infection directory

./stockholm -h		|
	or		|  for help
./stockholm --help 	|

