/*
** EPITECH PROJECT, 2022
** Contributor.cpp
** File description:
** Contributor
*/

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <unordered_map>
#include <memory>
#include <map>

class Contributor {
    public:
        Contributor(std::string name, size_t nbSkills);
        ~Contributor();

        void setName(std::string name);
        void setSkills(std::string skill, size_t lvl);
        void setNbSkills(size_t nbSkills);
        void setIsAvailable();

        std::string getName(void);
        size_t getSkillLevel(std::string skill);
        size_t getNbSkills(void);
        bool getIsAbailable(void);

    protected:
        std::map<std::string, size_t> _skillList;
        std::string _name;
        size_t _nbSkills;
        bool _isAvailable = false;

    private:
};
