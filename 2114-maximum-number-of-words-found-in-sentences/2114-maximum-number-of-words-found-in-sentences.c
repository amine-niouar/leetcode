



int count_words(char *s)
{
	int i;
	int alpha;
	int count;

	count = 0;
	alpha = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] != 32)
           alpha = 1;
		if(s[i] == 32 && alpha == 1)
		{
			alpha = 0;
			count++;
		}
		i++;
	}
	if(alpha == 1)
		count++;
	return (count);
}

int mostWordsFound(char ** sentences, int sentencesSize){
    int i;
    int currentCount;
    int most;
    
    most = 0;
    currentCount = 0;
    i = 0;
    while(i < sentencesSize)
    {
        currentCount = count_words(sentences[i]);
        if(most < currentCount)
            most = currentCount;
        i++;
    }
    return (most);
}