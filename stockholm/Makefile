SCRIPT		= stockholm
REPO_DIR	= $(HOME)/infection
GITHUB_REPO_URL	= https://github.com/6L45/42_cursus.git


all:
	@if [ ! -d "$(REPO_DIR)" ]; then \
		git clone $(GITHUB_REPO_URL) $(REPO_DIR); \
	else \
		echo "$(REPO_DIR) already exists"; \
	fi;
	@echo "\033[1;93m----------------------------------------------------\033[0m"
	@echo "\033[1;93mSet pass phrase Key [STKLM] (longer than 15 char):\033[0m"
	@echo
	@echo "\033[1;93m ==>    [export STKLM=<KEY PHRASE>]\033[0m"
	@echo
	@echo "\033[1;93m----------------------------------------------------\033[0m"

run:
	@/bin/python3 $(SCRIPT)
runs:
	@echo Encrypt discretly
	@/bin/python3 $(SCRIPT) -s

clean:
	@/bin/python3 $(SCRIPT) -r
cleans:
	@echo Decrypt discretly
	@/bin/python3 $(SCRIPT) -rs

fclean:
	@echo "fk this sh*t i'm out"
	@rm -rf $(HOME)/infection

