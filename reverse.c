char * reverse(char *backwords_ptr); // function prototype
int main(int argc, char* argv[])
{
	char word[] = "Happy199 Birthday!";
	printf("%s\n", word);
	reverse(word);
	printf("%s\n", word);
	printf("%s\n", reverse(word));
	printf("%s\n", word);
	return 0;
}

char * reverse(char *backwords_ptr)
{
	char *beg = backwords_ptr;
	char *end = backwords_ptr;
	char temp;

	while (*end) ++end; // processes each char from string until null zero.

	if (beg < end) // variable end processed additional chars. Second function call in main will print the string forward.
	{
		for (; beg < --end; ++beg)
		{
			temp = *beg;
			*beg = *end;
			*end = temp;
		}
	}
	return backwords_ptr;
}

