/*
** EPITECH PROJECT, 2022
** Project.cpp
** File description:
** Project
*/

#include "Project.hpp"

Project::Project(std::string name, size_t nbDays, size_t nbScore, size_t nbBestScore, size_t nbContributors)
{
    setName(name);
    setNbDays(nbDays);
    setNbScore(nbScore);
    setNbBestBefore(nbBestScore);
    setNbContributors(nbContributors);
}

Project::~Project()
{
}

void Project::setName(std::string name)
{
    _name = name;
}

void Project::setNbDays(size_t nbDays)
{
    _nbDays = nbDays;
}

void Project::setNbScore(size_t nbScore)
{
    _nbScore = nbScore;
}

void Project::setNbBestBefore(size_t nbBestBefore)
{
    _nbBestBefore = nbBestBefore;
}

void Project::setNbContributors(size_t nbContributors)
{
    _nbContributors = nbContributors;
}

void Project::setCompetencesList(std::string skill, size_t lvl)
{
    _competencesList.emplace(std::make_pair(skill, lvl));
}

void Project::setContributorList(size_t key, Contributor coder)
{
    _contributorsList.emplace(std::make_pair(key, coder));
}

std::string Project::getName()
{
    return (_name);
}

size_t Project::getNbDays()
{
    return (_nbDays);
}

size_t Project::getNbScore()
{
    return (_nbScore);
}

size_t Project::getNbBestBefore()
{
    return (_nbBestBefore);
}

size_t Project::getNbContributors()
{
    return (_nbContributors);
}

size_t Project::getSkillLevel(std::string skill)
{
    return (_competencesList[skill]);
}

Contributor Project::getSpecificContributor(size_t key)
{
    return (_contributorsList[key]);
}
