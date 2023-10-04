//
// Created by Kyrylo on 11.09.2023.
//

#ifndef CPP_SHOW_H
#define CPP_SHOW_H


#include "ParticipantCompetition.h"
#include <ostream>

class Show {
private:
    bool team;
    static int count;
    ParticipantCompetition participantCompetition;
    int seqNumber = count;
    string goal;
    string result;
public:
    Show() {}

    Show(bool team, const ParticipantCompetition &participantCompetition, int seqNumber, const string &goal,
         const string &result) : team(team), participantCompetition(participantCompetition), seqNumber(seqNumber),
                                 goal(goal), result(result) {}

    virtual ~Show() {

    }

    bool getTeam() const {
        return team;
    }

    void setTeam(bool team) {
        Show::team = team;
    }

    static int getCount() {
        return count;
    }

    static void setCount(int count) {
        Show::count = count;
    }

    const ParticipantCompetition &getParticipantCompetition() const {
        return participantCompetition;
    }

    void setParticipantCompetition(const ParticipantCompetition &participantCompetition) {
        Show::participantCompetition = participantCompetition;
    }

    int getSeqNumber() const {
        return seqNumber;
    }

    void setSeqNumber(int seqNumber) {
        Show::seqNumber = seqNumber;
    }

    const string &getGoal() const {
        return goal;
    }

    void setGoal(const string &goal) {
        Show::goal = goal;
    }

    const string &getResult() const {
        return result;
    }

    void setResult(const string &result) {
        Show::result = result;
    }

    inline bool operator< (const Show &show) const {
        return seqNumber < show.getSeqNumber();
    }

    void print() {
        cout << "Is the show team: " << team << ";" << endl;
        cout << "Participant Competition: ";
        participantCompetition.print();
        cout << ";" << endl;
        cout << "Sequence number: " << seqNumber << ";" << endl;
        cout << "Goal: " << goal << ";" << endl;
        cout << "Result: " << result << ";" << endl;
    }

    friend ostream &operator<<(ostream &os, const Show &show) {
        os << "team: " << show.team << " participantCompetition: " << show.participantCompetition << " seqNumber: "
           << show.seqNumber << " goal: " << show.goal << " result: " << show.result;
        return os;
    }

};


#endif //CPP_SHOW_H
