#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> LoadDictionary(const char* path);
bool searchWord(vector<string>& list, string query, size_t& index);

