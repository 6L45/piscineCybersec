#include <stdio.h>
#include <string.h>

int main()
{
	char	prompt[108];
	char	*pass = "__stack_check";

	printf("Please enter key: ");
	scanf("%s", prompt);

	if (strcmp(prompt, pass))
		printf("Nope.\n");
	else
		printf("Good job.\n");

	return 0;
}