//#include <fstream>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//struct UniNode {
//    string rank;
//    string name;
//    string loc;
//    string location;
//    string ars;
//    string arr;
//    string ers;
//    string err;
//    string fsrs;
//    string fsrr;
//    string cpfs;
//    string cpfr;
//    string ifrs;
//    string ifrr;
//    string isrs;
//    string isrr;
//    string irns;
//    string irnr;
//    string gers;
//    string gerr;
//    string score;
//    UniNode* NextAdd;
//    UniNode* PrevAdd;
//}*unitail, * unihead;
//
//UniNode* CreateNewUni(string rank, string name, string loc, string location, string ars, string arr, string ers, string err, string fsrs,
//    string fsrr, string cpfs, string cpfr, string ifrs, string ifrr, string isrs, string isrr, string irns, string irnr, string gers, string gerr, string score) {
//    UniNode* newnode = new UniNode;
//    newnode->rank = rank;
//    newnode->name = name;
//    newnode->loc = loc;
//    newnode->location = location;
//    newnode->ars = ars;
//    newnode->arr = arr;
//    newnode->ers = ers;
//    newnode->err = err;
//    newnode->fsrs = fsrs;
//    newnode->fsrr = fsrr;
//    newnode->cpfs = cpfs;
//    newnode->cpfr = cpfr;
//    newnode->ifrs = ifrs;
//    newnode->ifrr = ifrr;
//    newnode->isrs = isrs;
//    newnode->isrr = isrr;
//    newnode->irns = irns;
//    newnode->irnr = irnr;
//    newnode->gers = gers;
//    newnode->gerr = gerr;
//    newnode->score = score;
//    newnode->NextAdd = NULL;
//    newnode->PrevAdd = NULL;
//    return newnode;
//}
//
//void InsertToEndUni(string rank, string name, string loc, string location, string ars, string arr, string ers, string err, string fsrs,
//    string fsrr, string cpfs, string cpfr, string ifrs, string ifrr, string isrs, string isrr, string irns, string irnr, string gers, string gerr, string score) {
//    UniNode* newnode = CreateNewUni(rank, name, loc, location, ars, arr, ers, err, fsrs, fsrr, cpfs, cpfr, ifrs, ifrr, isrs, isrr,
//        irns, irnr, gers, gerr, score);
//    if (unihead == NULL) {
//        unihead = unitail = newnode;
//    }
//    else {
//        newnode->PrevAdd = unitail;
//        unitail->NextAdd = newnode;
//        unitail = newnode;
//    }
//}
//
//void DisplayUni() {
//    UniNode* current = unitail;
//    while (current != NULL) {
//        cout << string(50, '-') << endl;
//        cout << "World University Ranking" << endl;
//        cout << string(50, '-') << endl;
//        cout << "Rank: " << current->rank << endl;
//        cout << "Institution: " << current->name << endl;
//        cout << "Location Code: " << current->loc << endl;
//        cout << "Location: " << current->location << endl;
//        cout << "Ar Score: " << current->ars << endl;
//        cout << "Ar Rank: " << current->arr << endl;
//        cout << "Er Score: " << current->ers << endl;
//        cout << "Er Rank: " << current->err << endl;
//        cout << "Fsr Score: " << current->fsrs << endl;
//        cout << "Fsr Rank: " << current->fsrr << endl;
//        cout << "Cpf Score: " << current->cpfs << endl;
//        cout << "Cpf Rank: " << current->cpfr << endl;
//        cout << "Ifr Score: " << current->ifrs << endl;
//        cout << "Ifr Rank: " << current->ifrr << endl;
//        cout << "Isr Score: " << current->isrs << endl;
//        cout << "Isr Rank: " << current->isrr << endl;
//        cout << "Irn Score: " << current->irns << endl;
//        cout << "Irn Rank: " << current->irnr << endl;
//        cout << "Ger Score: " << current->gers << endl;
//        cout << "Ger Rank: " << current->gerr << endl;
//        cout << "Score: " << current->score << endl << endl;
//        current = current->PrevAdd;
//    }
//    cout << "List ended here!" << endl;
//}
//
//int main()
//{
//    ifstream file("university.csv");
//
//    string rank, name, loc, location, ars, arr, ers, err, fsrs, fsrr, cpfs, cpfr, ifrs, ifrr, isrs, isrr, irns, irnr, gers, gerr, score;
//
//    if (file.is_open())
//    {
//        cout << "File open" << endl;
//    }
//    else
//    {
//        cout << "Not open" << endl;
//    }
//
//    while (file.good())
//    {
//        getline(file, rank, ',');
//        getline(file, name, ',');
//        getline(file, loc, ',');
//        getline(file, location, ',');
//        getline(file, ars, ',');
//        getline(file, arr, ',');
//        getline(file, ers, ',');
//        getline(file, err, ',');
//        getline(file, fsrs, ',');
//        getline(file, fsrr, ',');
//        getline(file, cpfs, ',');
//        getline(file, cpfr, ',');
//        getline(file, ifrs, ',');
//        getline(file, ifrr, ',');
//        getline(file, isrs, ',');
//        getline(file, isrr, ',');
//        getline(file, irns, ',');
//        getline(file, irnr, ',');
//        getline(file, gers, ',');
//        getline(file, gerr, ',');
//        getline(file, score);
//        if (name == "Institution") {
//            continue;
//        }
//        else if (rank == "") {
//            break;
//        }
//        InsertToEndUni(rank, name, loc, location, ars, arr, ers, err, fsrs, fsrr, cpfs,
//            cpfr, ifrs, ifrr, isrs, isrr, irns, irnr, gers, gerr, score);
//    }
//    file.close();
//    DisplayUni();
//
//    return 0;
//}
