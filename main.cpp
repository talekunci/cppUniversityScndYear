#include <iostream>
#include "thirdTask/solution/Date.h"
#include "thirdTask/solution/ParticipantCompetition.h"
#include "thirdTask/solution/Show.h"
#include "thirdTask/solution/Competition.h"

int main() {
    Date date;

    ParticipantCompetition pc = ParticipantCompetition("Yevhen", "Konoplianka", date);

    Show show = Show(true, pc, 1, "To win.", "Win");

    Competition c = Competition("Soccer");

    c.addShow(show, "First match");

    c.addShow(Show(true, ParticipantCompetition("Andrii", "Shchevchenko", Date(12, 5, 89)), 2, "To get the cup", "A cup of tea"),
              "Another match");

    c.printAll();
    cout << endl << "Another print method" << endl;
    c.printShortly();

    return 0;
}
