#include "sfunctions.h"
#include "symclass.h"

symbol::symbol(){
	age = 0;
	name = NULL;
	bonusNum = 0;
}

symbol::~symbol(){
	age = 0;
	delete[] name;
	name = NULL;
	bonusNum = 0;
}

void symbol::setName(char* str){
	int length;
	length = strlen(str);
	name = new char[length + 1];
	strcpy(name, str);
}

char* symbol::getName(){
	return name;
}

void symbol::setBonusNum(int a){
	bonusNum = a;
}

int symbol::getBonusNum(){
	return bonusNum;
}

void symbol::setBonus(bool x){
	bonus = x;
}

bool symbol::getBonus(){
	return bonus;
}


