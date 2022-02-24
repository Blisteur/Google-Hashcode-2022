/*
** EPITECH PROJECT, 2022
** main.cpp
** File description:
** main
*/

#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <unordered_map>
#include <memory>

#include "Contributor.hpp"
#include "Project.hpp"



void parseFirstLine(int& contributor, int &project, std::string &line)
{
    contributor = std::stoi(line, nullptr, 10);
    project = std::stoi(line.substr(line.find(' ') + 1), nullptr, 10);
}

void parse(int arg, char **args)
{
    std::ifstream file(args[1]);
    std::string line;

    int contributor = 0;
    int project = 0;

    std::getline(file, line);
    parseFirstLine(contributor, project, line);

    std::list <Contributor> contributors {};
    std::list <Project> projects {};

    std::cout << line << std::endl;

    for (size_t i = 0; std::getline(file, line); i++) {
        if (contributor) {
            Contributor tmpContributor(line.substr(0, line.find(' ')), std::stoi(line.substr(line.find(' ') + 1), nullptr, 10));
            std::cout << tmpContributor.getName() << "\t" << tmpContributor.getNbSkills() << std::endl;
            for (size_t j = 0; j != tmpContributor.getNbSkills(); j++) {
                std::getline(file, line);
                tmpContributor.setSkills(line.substr(0, ' '), std::stoi(line.substr(line.find(' ') + 1), nullptr, 10));
                std::cout << "\t" << line.substr(0, ' ') << "\t" << tmpContributor.getSkillLevel(line.substr(0, ' ')) << std::endl;
            }
            contributor--;
        } else {
            size_t nbDays = std::stoi(line.substr(line.find(' ')));
            size_t nbScore;
            size_t nbBestBefore;
            size_t nbContributors;
            Project tmpProject(line.substr(0, ' '), nbDays, nbScore, nbBestBefore, nbContributors);
        }
    }
}

int main(int arg, char **args)
{
    parse(arg, args);
    return (0);
}