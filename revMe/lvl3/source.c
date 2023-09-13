#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	no()
{
	printf("Nope.\n");
	exit(1);
}

void	ok()
{
	printf("Good job.\n");
}

int	main(void)
{
	ulong uVar1;
	int		iVar2;
	size_t	sVar3;
	short		bVar4;
	char		local_4c;
	char		local_4b;
	char		local_4a;
	int		local_49;
	char		local_48 [31];
	char		local_29 [9];
	ulong		local_20;
	int		local_18;
	int		local_14;
	int		local_10;
	int		local_c;

	local_c = 0;
	printf("Please enter key: ");
	local_10 = scanf("%s", local_48);
	if (local_10 != 1) {
		no();
	}
	if (local_48[1] != '2') {
		no();
	}
	if (local_48[0] != '4') {
		no();
	}

	fflush(stdin);
	memset(local_29, 0, 9);
	local_29[0] = '*';
	local_49 = 0;
	local_20 = 2;
	local_14 = 1;
	while( 1 ) {
		sVar3 = strlen(local_29);
		uVar1 = local_20;
		bVar4 = 0;
		if (sVar3 < 8) {
			sVar3 = strlen(local_48);
			bVar4 = uVar1 < sVar3;
		}
		if (!bVar4) break;
		local_4c = local_48[local_20];
		local_4b = local_48[local_20 + 1];
		local_4a = local_48[local_20 + 2];
		iVar2 = atoi(&local_4c);
		local_29[local_14] = (char)iVar2;
		local_20 = local_20 + 3;
		local_14 = local_14 + 1;
	}
	local_29[local_14] = '\0';
	local_18 = strcmp(local_29,"********");
	if (local_18 == -2) {
		no();
	}
	else if (local_18 == -1) {
		no();
	}
	else if (local_18 == 0) {
		ok();
	}
	else if (local_18 == 1) {
		no();
	}
	else if (local_18 == 2) {
		no();
	}
	else if (local_18 == 3) {
		no();
	}
	else if (local_18 == 4) {
		no();
	}
	else if (local_18 == 5) {
		no();
	}
	else if (local_18 == 0x73) {
		no();
	}
	else {
		no();
	}

	return 0;
}
