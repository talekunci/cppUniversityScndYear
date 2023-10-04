//
// Created by Kyrylo on 11.09.2023.
//

#ifndef CPP_PARTICIPANTCOMPETITION_H
#define CPP_PARTICIPANTCOMPETITION_H

#include <string>
#include <utility>
#include <ostream>
#include "Date.h"

using namespace std;

class ParticipantCompetition {
private:
    string firstName, lastName;
    Date birthDate;

public:
    ParticipantCompetition() {
        firstName.reserve(1024);
        lastName.reserve(1024);
        birthDate = Date();
    }

    ParticipantCompetition(const string &firstName, const string &lastName, const Date &birthDate) : firstName(
            firstName), lastName(lastName), birthDate(birthDate) {}

    virtual ~ParticipantCompetition() {
    }

    const string &getFirstName() const {
        return firstName;
    }

    string &setFirstName(const string &firstName) {
        ParticipantCompetition::firstName = firstName;
        return ParticipantCompetition::firstName;
    }

    const string &getLastName() const {
        return lastName;
    }

    string &setLastName(const string &lastName) {
        ParticipantCompetition::lastName = lastName;
        return ParticipantCompetition::lastName;
    }

    const Date &getBirthDate() const {
        return birthDate;
    }

    Date &setBirthDate(const Date &birthDate) {
        ParticipantCompetition::birthDate = birthDate;
        return ParticipantCompetition::birthDate;
    }

    void print() {
        cout << firstName << " " << lastName << " " << birthDate;
    }

    friend ostream &operator<<(ostream &os, const ParticipantCompetition &competition) {
        os << "firstName: " << competition.firstName << " lastName: " << competition.lastName << " birthDate: "
           << competition.birthDate;
        return os;
    }
};


#endif //CPP_PARTICIPANTCOMPETITION_H
