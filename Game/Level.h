#pragma once
#include <vector>
#include <iostream>
#include <unordered_map>

class Level
{
public:
	Level(std::vector<std::vector<char>> levelVector);

	void editLevel(std::string entityName, char character, std::pair<int, int> coordinates);

	std::unordered_map <std::string, std::pair<int, int>> getEntityPositions() { return _entityPositions; }

	std::pair<int, int> getEntityPosition(std::string entityName);

	void setEntityPosition(std::string entityName, std::pair<int, int> coordinates);

	std::vector<std::vector<char>> getLevel() { return _levelVector; }

private:
	std::vector<std::vector<char>> _levelVector;

	std::unordered_map<std::string, std::pair<int, int>> _entityPositions;
};