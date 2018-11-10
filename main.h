#ifndef MAIN_H
#define MAIN_H

#include<iostream>
#include<stdlib.h>
#include<string>
#include<sstream>
#include<vector>
#include<fstream>
#include<iterator>
#include<cctype>
#include<algorithm>
#include<unistd.h>
#include<sys/stat.h>

std::string username=getenv("USER"),terminal,userdir="/home/"+username+"/",currentwdir=userdir,title;

#endif // MAIN_H
