/*
** EPITECH PROJECT, 2022
** Contributor.cpp
** File description:
** Contributor
*/

#include "Contributor.hpp"

Contributor::Contributor(std::string name, size_t nbSkills)
{
    setName(name);
    setNbSkills(nbSkills);
}

Contributor::~Contributor()
{
}

void Contributor::setName(std::string name)
{
    _name = name;
}

void Contributor::setSkills(std::string skill, size_t lvl)
{
    _skillList.emplace(std::make_pair(skill, lvl));
}

void Contributor::setNbSkills(size_t nbSkills)
{
    _nbSkills = nbSkills;
}

std::string Contributor::getName(void)
{
    return (_name);
}

size_t Contributor::getSkillLevel(std::string skill)
{
    return (_skillList[skill]);
}

size_t Contributor::getNbSkills(void)
{
    return (_nbSkills);
}