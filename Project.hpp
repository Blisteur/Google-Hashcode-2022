/*
** EPITECH PROJECT, 2022
** Project.hpp
** File description:
** Project
*/

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <unordered_map>
#include <memory>
#include <map>
#include "Contributor.hpp"

class Project {
    public:
        enum StatusProject {
            NOTSTARTED = (-true),
            STARTED = true,
            ENDED = false
        };

        Project(std::string name, size_t nbDays, size_t nbScore, size_t nbBestScore, size_t nbContributors);
        ~Project();

        void setName(std::string name);
        void setNbDays(size_t nbDays);
        void setNbScore(size_t nbScore);
        void setNbBestBefore(size_t nbBestBefore);
        void setNbContributors(size_t nbContributors);
        void setCompetencesList(std::string skill, size_t lvl);
        void setContributorList(size_t key, Contributor *coder);
        void setStatusProject(StatusProject editStatus);

        std::string getName();
        size_t getNbDays();
        size_t getNbScore();
        size_t getNbBestBefore();
        size_t getNbContributors();
        size_t getSkillLevel(std::string skill);
        Contributor *getSpecificContributor(size_t key);
        StatusProject getStatusProject();

    protected:
    private:
        std::string _name;
        size_t _nbDays;
        size_t _nbScore;
        size_t _nbBestBefore;
        size_t _nbContributors;
        StatusProject _statusProject;
        std::map<std::string, size_t> _competencesList;
        std::map<size_t, Contributor*> _contributorsList;
};
