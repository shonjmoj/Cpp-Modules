#include <iostream>
#include <string>
#include <fstream>

std::string ft_replace(std::string line, std::string s1, std::string s2) {
	std::string newLine;
	size_t index;
	while ((index = line.find(s1)) != std::string::npos){
		newLine.append(line.substr(0, index).append(s2));
		line.erase(0, index + s1.size());
	}
	newLine.append(line);
	return newLine;
}


int main(int argc, char **argv) {
	std::string		filename;
	std::string		line;
	std::string		s1;
	std::string		s2;
	std::ifstream	file;

	if(argc > 4 || argc < 4) {
		std::cerr << "Wrong args !" << std::endl;
		return 1;
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0) {
		std::cerr << "Error: Empty args !" << std::endl;
		return 1;
	}

	file.open(filename);

	if (!file.is_open()) {
		std::cerr << "Error: to open file : " << filename << std::endl;
		return 1;
	}
	
	std::ofstream	newfile(filename.append(".replace"));
	
	if (!newfile.is_open()) {
		std::cerr << "Error: to open file : " << filename.append(".replace") << std::endl;
		return 1;
	}
	else {

	}

	std::getline(file, line, '\0');
	newfile << ft_replace(line, s1, s2);

	file.close();
	newfile.close();

	return 0;
}