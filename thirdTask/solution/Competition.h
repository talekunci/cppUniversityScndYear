//
// Created by Kyrylo on 22.09.2023.
//

#ifndef CPP_COMPETITION_H
#define CPP_COMPETITION_H

#include <map>
#include "string"
#include "Show.h"

namespace std {

    class Competition {
    private:
        string name;
        map<Show, string> map;

    public:
        Competition() {}

        explicit Competition(string name) {
            this->name = name;
        }

        ~Competition() {}

        void addShow(const Show &show, const string &desc) {
            map.insert(make_pair(show, desc));
        }

        void printAll() {
            cout << "Competition name: " << name << endl;
            for (const auto& [key, value] : map) {
                cout << key << ";\t Description: ";
                cout << value << endl;
            }
        }

        void printShortly() {
            int count = 1;
            for (const auto& [key, value] : map) {
                cout << count << ". Competition name: \"" + name + "\"";
                cout << " Winner's name: \"" + key.getParticipantCompetition().getLastName() + "\"" << endl;
                count++;
            }
        }

    };

} // std

#endif //CPP_COMPETITION_H
