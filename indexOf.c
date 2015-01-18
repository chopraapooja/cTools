int indexOf(char *str, char *keyword){
	int i, index = -1, j, allMatched = 0;
	int count = (strlen(str) - strlen(keyword)+1 );
	if(strlen(keyword) == 0) return strlen(str);
	for(i=0; i<count; i++){
		if(str[i] == keyword[0]){
			if(strlen(keyword) == 1) {
				index = i;
				break;
			}
			for(j=1; j<strlen(keyword); j++){
				if(keyword[j] == str[i+j]){
					if(j == strlen(keyword)-1){
						allMatched = 1;
					}
				}
				else{
					break;
				}
			}
			if(allMatched == 1){
				index = i;
				break;
			}
		}
	}
	return index;
}