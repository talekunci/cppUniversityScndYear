#include "thirdTask/solution/Date.h"
#include "thirdTask/solution/Competition.h"
#include "thirdTask/solution/Show.h"
#include "thirdTask/solution/ParticipantCompetition.h"

int main() {
    Competition c = Competition();
    Competition c1 = Competition("Competition2");
    Competition c2 = Competition("Competition3");

    Date tmp = Date(1, 1, 1996);
    Date d = Date();
    Date d1 = Date(14, 12, 1998);
    Date d2 = Date(tmp);

    ParticipantCompetition pc = ParticipantCompetition("Mykola", "Lybid'", d);
    ParticipantCompetition pc1 = ParticipantCompetition();
    ParticipantCompetition pc2 = ParticipantCompetition("Roman", "Shpak", d2);

    pc1.setBirthDate(d1);
    pc1.setFirstName("James");
    pc1.setLastName("Bay");

    Show s = Show();
    Show s1 = Show(true, pc, 5, "Win win", "Lose");
    Show s2 = Show(false, pc1, 4, "Something", "Anything");

    s.setParticipantCompetition(pc2);
    s.setCount(8);
    s.setGoal("Word");
    s.setResult("Sequence");

    c1.addShow(s1, "description");

    c2.addShow(s, "Lorem");
    c2.addShow(s2, "Ipsum");

    c.printAll();
    cout << "=============" << endl;
    c.printShortly();

    cout << "-----------------------" << endl;

    c1.printAll();
    cout << "=============" << endl;
    c1.printShortly();

    cout << "------------------------" << endl;

    c2.printAll();
    cout << "=============" << endl;
    c2.printShortly();

    return 0;
}
