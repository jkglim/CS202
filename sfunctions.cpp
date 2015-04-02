
void strcpy(char* dest, char* source){
	char* destH = dest;
	while(*source != '\0'){
		*dest = *source;
		dest++; source++;
	}
	*dest = '\0';
	
}

bool strcomp(char* str1, char* str2){
	bool match = true;	
	while(*str1 != '\0' || *str2 != '\0'){
		if(*str1 != *str2){
			match = false;
		}
		str1++; str2++;
	}
	return match;
}


void strcat(char* dest, char* source){
	char* destH = dest;
	while(*dest != '\0'){
		dest++;
	}
	while(*source != '\0'){
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

int strlen(char* str){
	int index = 0;
	while(*str != '\0'){
		str++;
		index++;
	}
	return index;
}
